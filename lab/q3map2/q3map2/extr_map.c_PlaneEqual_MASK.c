
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vec_t ;
typedef scalar_t__* vec3_t ;
typedef int qboolean ;
struct TYPE_3__ {scalar_t__ dist; scalar_t__* normal; } ;
typedef TYPE_1__ plane_t ;


 float VAR_0 ;
 float FUNC_0 (scalar_t__) ;
 float VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

qboolean FUNC_1( plane_t *VAR_4, vec3_t VAR_5, vec_t VAR_6 ){
 float VAR_7, VAR_8;



 VAR_7 = VAR_1;
 VAR_8 = VAR_0;






 if ( ( VAR_4->dist == VAR_6 || FUNC_0( VAR_4->dist - VAR_6 ) < VAR_8 ) &&
   ( VAR_4->normal[0] == VAR_5[0] || FUNC_0( VAR_4->normal[0] - VAR_5[0] ) < VAR_7 ) &&
   ( VAR_4->normal[1] == VAR_5[1] || FUNC_0( VAR_4->normal[1] - VAR_5[1] ) < VAR_7 ) &&
   ( VAR_4->normal[2] == VAR_5[2] || FUNC_0( VAR_4->normal[2] - VAR_5[2] ) < VAR_7 ) ) {
  return VAR_3;
 }


 return VAR_2;
}
