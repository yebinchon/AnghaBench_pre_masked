
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* vec3_t ;
typedef int qboolean ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

qboolean FUNC_0( const vec3_t VAR_3, const vec3_t VAR_4, const vec3_t VAR_5 )
{
 if (VAR_4[0] < VAR_5[0] - VAR_0 ||
  VAR_4[1] < VAR_5[1] - VAR_0 ||
  VAR_4[2] < VAR_5[2] - VAR_0 ||
  VAR_3[0] > VAR_5[0] + VAR_0 ||
  VAR_3[1] > VAR_5[1] + VAR_0 ||
  VAR_3[2] > VAR_5[2] + VAR_0)
 {
  return VAR_1;
 }

 return VAR_2;
}
