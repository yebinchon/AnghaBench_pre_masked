
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int member_0; int member_1; int member_2; } ;
typedef TYPE_2__ vec3_t ;
struct TYPE_18__ {scalar_t__ numVerts; scalar_t__* mins; scalar_t__* maxs; int type; TYPE_1__* shaderInfo; } ;
typedef TYPE_3__ mapDrawSurface_t ;
struct TYPE_19__ {int firstDrawSurf; int origin; } ;
typedef TYPE_4__ entity_t ;
struct TYPE_20__ {scalar_t__* center; scalar_t__ radius; } ;
typedef TYPE_5__ decalProjector_t ;
struct TYPE_16__ {int compileFlags; scalar_t__ autosprite; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_5__*,TYPE_3__*) ;





 int VAR_1 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int *,TYPE_2__*,int ,TYPE_5__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;

void FUNC_8( entity_t *VAR_8 ){
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 decalProjector_t VAR_15;
 mapDrawSurface_t *VAR_16;
 vec3_t VAR_17[ 3 ] = { { 1, 0, 0 }, { 0, 1, 0 }, { 0, 0, 1 } };



 FUNC_4( VAR_1, "--- MakeEntityDecals ---\n" );


 FUNC_7( VAR_8->origin, VAR_2 );


 FUNC_6( VAR_2 );


 VAR_13 = -1;
 VAR_14 = FUNC_0();


 for ( VAR_9 = 0; VAR_9 < VAR_6; VAR_9++ )
 {

  VAR_12 = 10 * VAR_9 / VAR_6;
  if ( VAR_12 != VAR_13 ) {
   VAR_13 = VAR_12;
   FUNC_4( VAR_1, "%d...", VAR_12 );
  }


  FUNC_5( &VAR_7[ VAR_9 ], VAR_17, VAR_8->origin, &VAR_15 );


  for ( VAR_10 = VAR_8->firstDrawSurf; VAR_10 < VAR_5; VAR_10++ )
  {

   VAR_16 = &VAR_3[ VAR_10 ];
   if ( VAR_16->numVerts <= 0 ) {
    continue;
   }


   if ( VAR_16->shaderInfo->autosprite || ( VAR_16->shaderInfo->compileFlags & VAR_0 ) ) {
    continue;
   }


   for ( VAR_11 = 0; VAR_11 < 3; VAR_11++ )
    if ( VAR_16->mins[ VAR_11 ] >= ( VAR_15.center[ VAR_11 ] + VAR_15.radius ) ||
      VAR_16->maxs[ VAR_11 ] <= ( VAR_15.center[ VAR_11 ] - VAR_15.radius ) ) {
     break;
    }
   if ( VAR_11 < 3 ) {
    continue;
   }


   switch ( VAR_16->type )
   {
   case 132:
    FUNC_1( &VAR_15, VAR_16 );
    break;

   case 129:
    FUNC_2( &VAR_15, VAR_16 );
    break;

   case 128:
   case 131:
   case 130:
    FUNC_3( &VAR_15, VAR_16 );
    break;

   default:
    break;
   }
  }
 }


 FUNC_4( VAR_1, " (%d)\n", (int) ( FUNC_0() - VAR_14 ) );


 FUNC_4( VAR_1, "%9d decal surfaces\n", VAR_4 );
}
