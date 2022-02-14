
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vec3_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 float FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;

unsigned short int FUNC_4(int VAR_3, vec3_t VAR_4, vec3_t VAR_5)
{
 int VAR_6;
 float VAR_7;
 vec3_t VAR_8;

 FUNC_3(VAR_4, VAR_5, VAR_8);
 VAR_7 = FUNC_2(VAR_8);

 if (FUNC_0(VAR_3)) VAR_7 *= VAR_0;

 else if (FUNC_1(VAR_3)) VAR_7 *= VAR_1;

 else VAR_7 *= VAR_2;

 VAR_6 = (int) VAR_7;

 if (VAR_6 <= 0) VAR_6 = 1;
 return VAR_6;
}
