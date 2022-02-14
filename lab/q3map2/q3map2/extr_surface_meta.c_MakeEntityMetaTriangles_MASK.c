
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ numVerts; int type; TYPE_1__* shaderInfo; } ;
typedef TYPE_2__ mapDrawSurface_t ;
struct TYPE_12__ {int firstDrawSurf; } ;
typedef TYPE_3__ entity_t ;
struct TYPE_10__ {scalar_t__ forceMeta; scalar_t__ autosprite; } ;


 int FUNC_0 () ;






 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

void FUNC_6( entity_t *VAR_11 ){
 int VAR_12, VAR_13, VAR_14, VAR_15;
 mapDrawSurface_t *VAR_16;



 FUNC_3( VAR_0, "--- MakeEntityMetaTriangles ---\n" );


 VAR_14 = -1;
 VAR_15 = FUNC_0();


 for ( VAR_12 = VAR_11->firstDrawSurf; VAR_12 < VAR_4; VAR_12++ )
 {

  VAR_13 = 10 * ( VAR_12 - VAR_11->firstDrawSurf ) / ( VAR_4 - VAR_11->firstDrawSurf );
  if ( VAR_13 != VAR_14 ) {
   VAR_14 = VAR_13;
   FUNC_3( VAR_0, "%d...", VAR_13 );
  }


  VAR_16 = &VAR_1[ VAR_12 ];
  if ( VAR_16->numVerts <= 0 ) {
   continue;
  }


  if ( VAR_16->shaderInfo->autosprite ) {
   continue;
  }


  if ( VAR_2 == VAR_10 && VAR_16->shaderInfo->forceMeta == VAR_10 ) {
   continue;
  }


  switch ( VAR_16->type )
  {
  case 132:
  case 133:
   FUNC_1( VAR_16 );
   FUNC_2( VAR_16 );
   break;

  case 129:
   FUNC_5( VAR_16 );
   break;

  case 128:
   break;

  case 131:
  case 130:
   FUNC_2( VAR_16 );
   break;

  default:
   break;
  }
 }


 if ( ( VAR_4 - VAR_11->firstDrawSurf ) ) {
  FUNC_3( VAR_0, " (%d)\n", (int) ( FUNC_0() - VAR_15 ) );
 }


 FUNC_3( VAR_0, "%9d total meta surfaces\n", VAR_5 );
 FUNC_3( VAR_0, "%9d stripped surfaces\n", VAR_9 );
 FUNC_3( VAR_0, "%9d fanned surfaces\n", VAR_3 );
 FUNC_3( VAR_0, "%9d patch meta surfaces\n", VAR_8 );
 FUNC_3( VAR_0, "%9d meta verts\n", VAR_7 );
 FUNC_3( VAR_0, "%9d meta triangles\n", VAR_6 );


 FUNC_4( VAR_11 );
}
