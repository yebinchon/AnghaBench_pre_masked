
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int winding_t ;
typedef int vec_t ;
typedef int vec3_t ;
struct TYPE_5__ {int dist; int normal; } ;
typedef TYPE_1__ plane_t ;
struct TYPE_6__ {size_t planenum; struct TYPE_6__* parent; struct TYPE_6__** children; } ;
typedef TYPE_2__ node_t ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int **,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

winding_t *FUNC_3( node_t *VAR_3 ){
 winding_t *VAR_4;
 node_t *VAR_5;
 plane_t *VAR_6;
 vec3_t VAR_7;
 vec_t VAR_8;

 VAR_4 = FUNC_0( VAR_1[VAR_3->planenum].normal
        , VAR_1[VAR_3->planenum].dist );


 for ( VAR_5 = VAR_3->parent ; VAR_5 && VAR_4 ; )
 {
  VAR_6 = &VAR_1[VAR_5->planenum];

  if ( VAR_5->children[0] == VAR_3 ) {
   FUNC_1( &VAR_4, VAR_6->normal, VAR_6->dist, VAR_0 );
  }
  else
  {
   FUNC_2( VAR_2, VAR_6->normal, VAR_7 );
   VAR_8 = -VAR_6->dist;
   FUNC_1( &VAR_4, VAR_7, VAR_8, VAR_0 );
  }
  VAR_3 = VAR_5;
  VAR_5 = VAR_5->parent;
 }

 return VAR_4;
}
