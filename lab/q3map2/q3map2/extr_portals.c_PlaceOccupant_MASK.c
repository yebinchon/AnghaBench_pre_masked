
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vec_t ;
typedef int vec3_t ;
typedef int qboolean ;
struct TYPE_6__ {scalar_t__ dist; int normal; } ;
typedef TYPE_1__ plane_t ;
struct TYPE_7__ {size_t planenum; int skybox; int * occupant; scalar_t__ opaque; struct TYPE_7__** children; } ;
typedef TYPE_2__ node_t ;
typedef int entity_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,int,int ) ;
 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

qboolean FUNC_2( node_t *VAR_4, vec3_t VAR_5, entity_t *VAR_6, qboolean VAR_7 ){
 vec_t VAR_8;
 node_t *VAR_9;
 plane_t *VAR_10;



 VAR_9 = VAR_4;
 while ( VAR_9->planenum != VAR_0 )
 {
  VAR_10 = &VAR_1[ VAR_9->planenum ];
  VAR_8 = FUNC_0( VAR_5, VAR_10->normal ) - VAR_10->dist;
  if ( VAR_8 >= 0 ) {
   VAR_9 = VAR_9->children[ 0 ];
  }
  else{
   VAR_9 = VAR_9->children[ 1 ];
  }
 }

 if ( VAR_9->opaque ) {
  return VAR_2;
 }
 VAR_9->occupant = VAR_6;
 VAR_9->skybox = VAR_7;

 FUNC_1( VAR_9, 1, VAR_7 );

 return VAR_3;
}
