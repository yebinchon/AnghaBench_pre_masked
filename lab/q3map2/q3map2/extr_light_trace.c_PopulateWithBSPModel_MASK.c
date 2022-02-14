
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_12__ ;


typedef int tw ;
struct TYPE_27__ {int numVerts; TYPE_1__* v; int infoNum; } ;
typedef TYPE_3__ traceWinding_t ;
struct TYPE_28__ {scalar_t__ surfaceNum; scalar_t__ castShadows; TYPE_2__* si; } ;
typedef TYPE_4__ traceInfo_t ;
struct TYPE_29__ {scalar_t__ parentSurfaceNum; int patchIterations; TYPE_2__* si; scalar_t__ castShadows; } ;
typedef TYPE_5__ surfaceInfo_t ;
struct TYPE_30__ {int width; int height; TYPE_8__* verts; } ;
typedef TYPE_6__ mesh_t ;
typedef int * m4x4_t ;
struct TYPE_31__ {int numBSPSurfaces; int firstBSPSurface; scalar_t__ firstBSPBrush; } ;
typedef TYPE_7__ bspModel_t ;
struct TYPE_32__ {int st; int xyz; } ;
typedef TYPE_8__ bspDrawVert_t ;
struct TYPE_33__ {int surfaceType; size_t shaderNum; int patchWidth; size_t firstVert; size_t firstIndex; int numIndexes; int patchHeight; } ;
typedef TYPE_9__ bspDrawSurface_t ;
struct TYPE_26__ {int compileFlags; } ;
struct TYPE_25__ {int xyz; int st; } ;
struct TYPE_24__ {int contentFlags; int surfaceFlags; } ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_6__*) ;



 int FUNC_3 (TYPE_6__) ;
 TYPE_6__* FUNC_4 (TYPE_6__*) ;
 TYPE_6__* FUNC_5 (TYPE_6__,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int* VAR_5 ;
 TYPE_9__* VAR_6 ;
 TYPE_8__* VAR_7 ;
 TYPE_12__* VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (TYPE_3__*,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 TYPE_5__* VAR_15 ;

__attribute__((used)) static void FUNC_10( bspModel_t *VAR_16, m4x4_t VAR_17 ){
 int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22[ 5 ], VAR_23, VAR_24;
 bspDrawSurface_t *VAR_25;
 surfaceInfo_t *VAR_26;
 bspDrawVert_t *VAR_27;
 int *VAR_28;
 mesh_t VAR_29, *VAR_30, *VAR_31;
 traceInfo_t VAR_32;
 traceWinding_t VAR_33;



 if ( VAR_16 == ((void*)0) || VAR_17 == ((void*)0) ) {
  return;
 }


 for ( VAR_18 = 0; VAR_18 < VAR_16->numBSPSurfaces; VAR_18++ )
 {

  VAR_25 = &VAR_6[ VAR_16->firstBSPSurface + VAR_18 ];
  VAR_26 = &VAR_15[ VAR_16->firstBSPSurface + VAR_18 ];
  if ( VAR_26->si == ((void*)0) ) {
   continue;
  }


  if ( !VAR_26->castShadows ) {
   continue;
  }


  if ( VAR_25->surfaceType == 130 && VAR_12 == VAR_13 ) {
   continue;
  }


  if ( ( VAR_8[ VAR_25->shaderNum ].contentFlags & VAR_10 ) ||
    ( VAR_8[ VAR_25->shaderNum ].surfaceFlags & VAR_11 ) ) {
   continue;
  }


  if ( ( VAR_26->si->compileFlags & VAR_2 ) ) {
   continue;
  }
  if ( ( VAR_26->si->compileFlags & VAR_4 ) &&
    !( VAR_26->si->compileFlags & VAR_0 ) &&
    !( VAR_26->si->compileFlags & VAR_1 ) ) {
   continue;
  }


  VAR_32.si = VAR_26->si;
  VAR_32.castShadows = VAR_26->castShadows;
  VAR_32.surfaceNum = VAR_16->firstBSPBrush + VAR_18;


  if ( VAR_26->parentSurfaceNum >= 0 ) {
   VAR_24 = VAR_14;


   if ( VAR_26->si->compileFlags & VAR_3 ) {
    continue;
   }
  }
  else{
   VAR_24 = VAR_9;
  }


  FUNC_9( &VAR_33, 0, sizeof( VAR_33 ) );
  VAR_33.infoNum = FUNC_0( &VAR_32 );
  VAR_33.numVerts = 3;


  switch ( VAR_25->surfaceType )
  {

  case 130:

   VAR_29.width = VAR_25->patchWidth;
   VAR_29.height = VAR_25->patchHeight;
   VAR_29.verts = &VAR_7[ VAR_25->firstVert ];

   VAR_31 = FUNC_5( VAR_29, VAR_26->patchIterations );


   FUNC_3( *VAR_31 );
   VAR_30 = FUNC_4( VAR_31 );
   FUNC_2( VAR_31 );


   VAR_27 = VAR_30->verts;


   for ( VAR_21 = 0; VAR_21 < ( VAR_30->height - 1 ); VAR_21++ )
   {
    for ( VAR_20 = 0; VAR_20 < ( VAR_30->width - 1 ); VAR_20++ )
    {

     VAR_22[ 0 ] = VAR_20 + ( VAR_21 * VAR_30->width );
     VAR_22[ 1 ] = VAR_20 + ( ( VAR_21 + 1 ) * VAR_30->width );
     VAR_22[ 2 ] = VAR_20 + 1 + ( ( VAR_21 + 1 ) * VAR_30->width );
     VAR_22[ 3 ] = VAR_20 + 1 + ( VAR_21 * VAR_30->width );
     VAR_22[ 4 ] = VAR_20 + ( VAR_21 * VAR_30->width );


     VAR_23 = ( VAR_20 + VAR_21 ) & 1;


     FUNC_7( VAR_27[ VAR_22[ VAR_23 + 0 ] ].xyz, VAR_33.v[ 0 ].xyz );
     FUNC_6( VAR_27[ VAR_22[ VAR_23 + 0 ] ].st, VAR_33.v[ 0 ].st );
     FUNC_7( VAR_27[ VAR_22[ VAR_23 + 1 ] ].xyz, VAR_33.v[ 1 ].xyz );
     FUNC_6( VAR_27[ VAR_22[ VAR_23 + 1 ] ].st, VAR_33.v[ 1 ].st );
     FUNC_7( VAR_27[ VAR_22[ VAR_23 + 2 ] ].xyz, VAR_33.v[ 2 ].xyz );
     FUNC_6( VAR_27[ VAR_22[ VAR_23 + 2 ] ].st, VAR_33.v[ 2 ].st );
     FUNC_8( VAR_17, VAR_33.v[ 0 ].xyz );
     FUNC_8( VAR_17, VAR_33.v[ 1 ].xyz );
     FUNC_8( VAR_17, VAR_33.v[ 2 ].xyz );
     FUNC_1( &VAR_33, VAR_24 );


     FUNC_7( VAR_27[ VAR_22[ VAR_23 + 0 ] ].xyz, VAR_33.v[ 0 ].xyz );
     FUNC_6( VAR_27[ VAR_22[ VAR_23 + 0 ] ].st, VAR_33.v[ 0 ].st );
     FUNC_7( VAR_27[ VAR_22[ VAR_23 + 2 ] ].xyz, VAR_33.v[ 1 ].xyz );
     FUNC_6( VAR_27[ VAR_22[ VAR_23 + 2 ] ].st, VAR_33.v[ 1 ].st );
     FUNC_7( VAR_27[ VAR_22[ VAR_23 + 3 ] ].xyz, VAR_33.v[ 2 ].xyz );
     FUNC_6( VAR_27[ VAR_22[ VAR_23 + 3 ] ].st, VAR_33.v[ 2 ].st );
     FUNC_8( VAR_17, VAR_33.v[ 0 ].xyz );
     FUNC_8( VAR_17, VAR_33.v[ 1 ].xyz );
     FUNC_8( VAR_17, VAR_33.v[ 2 ].xyz );
     FUNC_1( &VAR_33, VAR_24 );
    }
   }


   FUNC_2( VAR_30 );
   break;


  case 128:
  case 129:

   VAR_27 = &VAR_7[ VAR_25->firstVert ];
   VAR_28 = &VAR_5[ VAR_25->firstIndex ];


   for ( VAR_19 = 0; VAR_19 < VAR_25->numIndexes; VAR_19 += 3 )
   {
    FUNC_7( VAR_27[ VAR_28[ VAR_19 ] ].xyz, VAR_33.v[ 0 ].xyz );
    FUNC_6( VAR_27[ VAR_28[ VAR_19 ] ].st, VAR_33.v[ 0 ].st );
    FUNC_7( VAR_27[ VAR_28[ VAR_19 + 1 ] ].xyz, VAR_33.v[ 1 ].xyz );
    FUNC_6( VAR_27[ VAR_28[ VAR_19 + 1 ] ].st, VAR_33.v[ 1 ].st );
    FUNC_7( VAR_27[ VAR_28[ VAR_19 + 2 ] ].xyz, VAR_33.v[ 2 ].xyz );
    FUNC_6( VAR_27[ VAR_28[ VAR_19 + 2 ] ].st, VAR_33.v[ 2 ].st );
    FUNC_8( VAR_17, VAR_33.v[ 0 ].xyz );
    FUNC_8( VAR_17, VAR_33.v[ 1 ].xyz );
    FUNC_8( VAR_17, VAR_33.v[ 2 ].xyz );
    FUNC_1( &VAR_33, VAR_24 );
   }
   break;


  default:
   break;
  }
 }
}
