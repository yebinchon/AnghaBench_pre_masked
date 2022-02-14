
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vec3_t ;


 float FUNC_0 (float,float) ;
 float FUNC_1 (int ) ;
 int FUNC_2 (int ,float,int ,int ) ;
 int FUNC_3 (int ,float,int ) ;
 int FUNC_4 (int ,int ,int ) ;

void FUNC_5(vec3_t VAR_0, float VAR_1, vec3_t VAR_2, float VAR_3, vec3_t VAR_4, float *VAR_5)
{
 vec3_t VAR_6;

 FUNC_3(VAR_0, 0.5f, VAR_4);
 FUNC_2(VAR_4, 0.5f, VAR_2, VAR_4);

 FUNC_4(VAR_0, VAR_2, VAR_6);
 *VAR_5 = FUNC_1(VAR_6) * 0.5f + FUNC_0(VAR_1, VAR_3);
}
