
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float vec_t ;
typedef int const vec3_t ;


 int FUNC_0 (int const,int const,int const) ;
 float FUNC_1 (int const,int const) ;
 int FUNC_2 (int const,float,int const,int const) ;
 int FUNC_3 (int const) ;

vec_t FUNC_4(vec3_t VAR_0, vec3_t VAR_1, const vec3_t VAR_2, const vec3_t VAR_3, const vec3_t VAR_4)
{
 vec3_t VAR_5;
 vec_t VAR_6, VAR_7;


 VAR_6 = FUNC_1(VAR_2, VAR_3);
 FUNC_2(VAR_3, -VAR_6, VAR_2, VAR_0);
 FUNC_3(VAR_0);


 FUNC_0(VAR_2, VAR_3, VAR_5);
 VAR_7 = (FUNC_1(VAR_5, VAR_4) < 0.0f) ? -1.0f : 1.0f;


 if (VAR_1)
  FUNC_0(VAR_2, VAR_0, VAR_1);

 return VAR_7;
}
