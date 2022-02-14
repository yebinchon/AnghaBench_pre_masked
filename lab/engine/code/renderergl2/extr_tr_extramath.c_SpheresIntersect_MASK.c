
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vec3_t ;
typedef int qboolean ;


 float FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_2(vec3_t VAR_2, float VAR_3, vec3_t VAR_4, float VAR_5)
{
 float VAR_6 = VAR_3 + VAR_5;
 vec3_t VAR_7;

 FUNC_1(VAR_2, VAR_4, VAR_7);

 if (FUNC_0(VAR_7, VAR_7) <= VAR_6 * VAR_6)
 {
  return VAR_1;
 }

 return VAR_0;
}
