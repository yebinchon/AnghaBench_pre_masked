
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_10__ {scalar_t__ occupied; } ;
struct TYPE_11__ {TYPE_1__ outside_node; int * headnode; } ;
typedef TYPE_2__ tree_t ;
typedef void* qboolean ;
typedef int node_t ;
struct TYPE_12__ {int mapEntityNum; } ;
typedef TYPE_3__ entity_t ;


 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (TYPE_3__*,char*,int*) ;
 void* FUNC_2 (int *,int*,TYPE_3__*,void*) ;
 int FUNC_3 (char const*,char*) ;
 int VAR_0 ;
 int FUNC_4 (int ,char*,...) ;
 char* FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (int*) ;
 scalar_t__ FUNC_7 (int*,int ) ;
 int FUNC_8 (int*,float,int*) ;
 int FUNC_9 (int*,float,float,float) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int*,int*,int ,int*,int*) ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (char const*,char*,int*,int*,int*) ;
 int VAR_9 ;
 int FUNC_13 (char*,int ,int ,void*) ;

qboolean FUNC_14( tree_t *VAR_10 ){
 int VAR_11, VAR_12;
 vec3_t VAR_13, VAR_14, VAR_15, VAR_16;
 qboolean VAR_17, VAR_18, VAR_19, VAR_20;
 node_t *VAR_21;
 entity_t *VAR_22;
 const char *VAR_23;


 VAR_21 = VAR_10->headnode;
 FUNC_4( VAR_0,"--- FloodEntities ---\n" );
 VAR_18 = VAR_5;
 VAR_10->outside_node.occupied = 0;

 VAR_19 = VAR_5;
 VAR_1 = 0;
 for ( VAR_11 = 1; VAR_11 < VAR_4; VAR_11++ )
 {

  VAR_22 = &VAR_3[ VAR_11 ];


  FUNC_1( VAR_22, "origin", VAR_13 );
  if ( FUNC_7( VAR_13, VAR_9 ) ) {
   continue;
  }


  VAR_23 = FUNC_5( VAR_22, "classname" );
  if ( !FUNC_3( VAR_23, "_skybox" ) ) {
   VAR_20 = VAR_6;
   VAR_7 = VAR_6;


   FUNC_8( VAR_13, -1.0f, VAR_14 );


   FUNC_9( VAR_15, 64.0f, 64.0f, 64.0f );
   VAR_23 = FUNC_5( VAR_22, "_scale" );
   if ( VAR_23[ 0 ] != '\0' ) {
    VAR_12 = FUNC_12( VAR_23, "%f %f %f", &VAR_15[ 0 ], &VAR_15[ 1 ], &VAR_15[ 2 ] );
    if ( VAR_12 == 1 ) {
     VAR_15[ 1 ] = VAR_15[ 0 ];
     VAR_15[ 2 ] = VAR_15[ 0 ];
    }
   }


   FUNC_6( VAR_16 );
   VAR_16[ 2 ] = FUNC_0( VAR_22, "angle" );
   VAR_23 = FUNC_5( VAR_22, "angles" );
   if ( VAR_23[ 0 ] != '\0' ) {
    FUNC_12( VAR_23, "%f %f %f", &VAR_16[ 1 ], &VAR_16[ 2 ], &VAR_16[ 0 ] );
   }


   FUNC_10( VAR_8 );
   FUNC_11( VAR_8, VAR_14, VAR_16, VAR_2, VAR_15, VAR_13 );
  }
  else{
   VAR_20 = VAR_5;
  }


  VAR_13[ 2 ] += 1;






  VAR_17 = FUNC_2( VAR_21, VAR_13, VAR_22, VAR_20 );
  if ( VAR_17 ) {
   VAR_18 = VAR_6;
  }
  if ( ( !VAR_17 || VAR_10->outside_node.occupied ) && !VAR_19 ) {
   FUNC_13( "Entity leaked", VAR_22->mapEntityNum, 0, VAR_5 );
   VAR_19 = VAR_6;
  }
 }

 FUNC_4( VAR_0, "%9d flooded leafs\n", VAR_1 );

 if ( !VAR_18 ) {
  FUNC_4( VAR_0, "no entities in open -- no filling\n" );
 }
 else if ( VAR_10->outside_node.occupied ) {
  FUNC_4( VAR_0, "entity reached from outside -- no filling\n" );
 }

 return (qboolean) ( VAR_18 && !VAR_10->outside_node.occupied );
}
