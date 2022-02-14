
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_2__ {int cluster; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;

int FUNC_1( vec3_t VAR_1 ){
 int VAR_2;



 VAR_2 = FUNC_0( VAR_1 );
 if ( VAR_2 < 0 ) {
  return -1;
 }


 return VAR_0[ VAR_2 ].cluster;
}
