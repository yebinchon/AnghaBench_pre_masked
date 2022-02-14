
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef double vec_t ;
typedef int vec3_t ;
struct TYPE_6__ {double dist; int normal; } ;
typedef TYPE_1__ bspPlane_t ;
struct TYPE_7__ {size_t planeNum; int* children; } ;
typedef TYPE_2__ bspNode_t ;
struct TYPE_8__ {int cluster; } ;


 double FUNC_0 (int ,int ) ;
 TYPE_5__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;

int FUNC_1( vec3_t VAR_3, int VAR_4 ){
 int VAR_5;
 vec_t VAR_6;
 bspNode_t *VAR_7;
 bspPlane_t *VAR_8;


 while ( VAR_4 >= 0 )
 {
  VAR_7 = &VAR_1[ VAR_4 ];
  VAR_8 = &VAR_2[ VAR_7->planeNum ];
  VAR_6 = FUNC_0( VAR_3, VAR_8->normal ) - VAR_8->dist;
  if ( VAR_6 > 0.1 ) {
   VAR_4 = VAR_7->children[ 0 ];
  }
  else if ( VAR_6 < -0.1 ) {
   VAR_4 = VAR_7->children[ 1 ];
  }
  else
  {
   VAR_5 = FUNC_1( VAR_3, VAR_7->children[ 0 ] );
   if ( VAR_0[ VAR_5 ].cluster != -1 ) {
    return VAR_5;
   }
   VAR_4 = VAR_7->children[ 1 ];
  }
 }

 VAR_5 = -VAR_4 - 1;
 return VAR_5;
}
