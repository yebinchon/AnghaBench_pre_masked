
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_6__ {float dist; int normal; } ;
typedef TYPE_1__ plane_t ;
struct TYPE_7__ {size_t planenum; struct TYPE_7__** children; } ;
typedef TYPE_2__ node_t ;
typedef int mapDrawSurface_t ;


 int FUNC_0 (int *,TYPE_2__*) ;
 float FUNC_1 (int ,int ) ;
 float VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;

int FUNC_2( vec3_t VAR_3, mapDrawSurface_t *VAR_4, node_t *VAR_5 ){
 float VAR_6;
 plane_t *VAR_7;
 int VAR_8 = 0;



 if ( VAR_5->planenum != VAR_1 ) {

  VAR_7 = &VAR_2[ VAR_5->planenum ];
  VAR_6 = FUNC_1( VAR_3, VAR_7->normal ) - VAR_7->dist;


  VAR_8 = 0;
  if ( VAR_6 >= -VAR_0 ) {
   VAR_8 += FUNC_2( VAR_3, VAR_4, VAR_5->children[ 0 ] );
  }
  if ( VAR_6 <= VAR_0 ) {
   VAR_8 += FUNC_2( VAR_3, VAR_4, VAR_5->children[ 1 ] );
  }


  return VAR_8;
 }


 return FUNC_0( VAR_4, VAR_5 );
}
