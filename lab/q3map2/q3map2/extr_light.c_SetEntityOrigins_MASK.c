
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vec3_t ;
typedef int entity_t ;
struct TYPE_10__ {int numBSPSurfaces; int firstBSPSurface; } ;
typedef TYPE_1__ bspModel_t ;
typedef int bspDrawVert_t ;
struct TYPE_11__ {int numVerts; int firstVert; } ;
typedef TYPE_2__ bspDrawSurface_t ;
struct TYPE_13__ {int xyz; } ;
struct TYPE_12__ {int xyz; } ;


 int FUNC_0 (int *,char*,int ) ;
 char* FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char const*) ;
 TYPE_2__* VAR_0 ;
 TYPE_6__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int * VAR_3 ;
 int FUNC_4 (TYPE_3__*,TYPE_6__*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_5 (int) ;
 TYPE_3__* VAR_6 ;

void FUNC_6( void ){
 int VAR_7, VAR_8, VAR_9, VAR_10;
 entity_t *VAR_11;
 vec3_t VAR_12;
 const char *VAR_13;
 int VAR_14;
 bspModel_t *VAR_15;
 bspDrawSurface_t *VAR_16;



 VAR_6 = FUNC_5( VAR_4 * sizeof( bspDrawVert_t ) );
 FUNC_4( VAR_6, VAR_1, VAR_4 * sizeof( bspDrawVert_t ) );


 for ( VAR_7 = 0; VAR_7 < VAR_5; VAR_7++ )
 {

  VAR_11 = &VAR_3[ VAR_7 ];
  VAR_13 = FUNC_1( VAR_11, "model" );
  if ( VAR_13[ 0 ] != '*' ) {
   continue;
  }
  VAR_14 = FUNC_3( VAR_13 + 1 );
  VAR_15 = &VAR_2[ VAR_14 ];


  VAR_13 = FUNC_1( VAR_11, "origin" );
  if ( VAR_13[ 0 ] == '\0' ) {
   continue;
  }
  FUNC_0( VAR_11, "origin", VAR_12 );


  for ( VAR_8 = 0; VAR_8 < VAR_15->numBSPSurfaces; VAR_8++ )
  {

   VAR_16 = &VAR_0[ VAR_15->firstBSPSurface + VAR_8 ];


   for ( VAR_9 = 0; VAR_9 < VAR_16->numVerts; VAR_9++ )
   {
    VAR_10 = VAR_16->firstVert + VAR_9;
    FUNC_2( VAR_12, VAR_1[ VAR_10 ].xyz, VAR_6[ VAR_10 ].xyz );
   }
  }
 }
}
