
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vec_t ;
typedef int vec3_t ;
struct TYPE_6__ {scalar_t__ dist; int normal; } ;
typedef TYPE_1__ plane_t ;
struct TYPE_7__ {size_t planenum; struct TYPE_7__** children; } ;
typedef TYPE_2__ node_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;

node_t *FUNC_1( node_t *VAR_2, vec3_t VAR_3 ){
 plane_t *VAR_4;
 vec_t VAR_5;

 while ( VAR_2->planenum != VAR_0 )
 {
  VAR_4 = &VAR_1[VAR_2->planenum];
  VAR_5 = FUNC_0( VAR_3, VAR_4->normal ) - VAR_4->dist;
  if ( VAR_5 >= 0 ) {
   VAR_2 = VAR_2->children[0];
  }
  else{
   VAR_2 = VAR_2->children[1];
  }
 }

 return VAR_2;
}
