
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vec_t ;
typedef double* vec3_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (double) ;

int FUNC_1(vec3_t VAR_6)
{
 vec_t VAR_7, VAR_8, VAR_9;


 if (VAR_6[0] == 1.0 || VAR_6[0] == -1.0)
  return VAR_3;
 if (VAR_6[1] == 1.0 || VAR_6[1] == -1.0)
  return VAR_4;
 if (VAR_6[2] == 1.0 || VAR_6[2] == -1.0)
  return VAR_5;

 VAR_7 = FUNC_0(VAR_6[0]);
 VAR_8 = FUNC_0(VAR_6[1]);
 VAR_9 = FUNC_0(VAR_6[2]);

 if (VAR_7 >= VAR_8 && VAR_7 >= VAR_9)
  return VAR_0;
 if (VAR_8 >= VAR_7 && VAR_8 >= VAR_9)
  return VAR_1;
 return VAR_2;
}
