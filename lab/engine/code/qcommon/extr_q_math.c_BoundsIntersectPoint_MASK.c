
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* vec3_t ;
typedef int qboolean ;


 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_0(const vec3_t VAR_2, const vec3_t VAR_3,
  const vec3_t VAR_4)
{
 if ( VAR_4[0] > VAR_3[0] ||
  VAR_4[0] < VAR_2[0] ||
  VAR_4[1] > VAR_3[1] ||
  VAR_4[1] < VAR_2[1] ||
  VAR_4[2] > VAR_3[2] ||
  VAR_4[2] < VAR_2[2])
 {
  return VAR_0;
 }

 return VAR_1;
}
