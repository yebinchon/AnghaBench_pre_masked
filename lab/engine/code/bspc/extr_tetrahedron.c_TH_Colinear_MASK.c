
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vec3_t ;


 int FUNC_0 (int ,int ,int ) ;
 float FUNC_1 (int ) ;
 int FUNC_2 (float*,float*,int ) ;

int FUNC_3(float *VAR_0, float *VAR_1, float *VAR_2)
{
 vec3_t VAR_3, VAR_4, VAR_5;
 float VAR_6;

 FUNC_2(VAR_1, VAR_0, VAR_3);
 FUNC_2(VAR_2, VAR_0, VAR_4);
 FUNC_0 (VAR_3, VAR_4, VAR_5);
 VAR_6 = FUNC_1( VAR_5 );


 if (VAR_6 < 10)
 {
  return 1;
 }
 return 0;
}
