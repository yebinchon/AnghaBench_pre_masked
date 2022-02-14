
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_1(void)
{
 int VAR_3;

 FUNC_0("static const u32 runnable_avg_yN_sum[] = {\n\t    0,");
 for (VAR_3 = 1; VAR_3 <= VAR_0; VAR_3++) {
  if (VAR_3 == 1)
   VAR_1 *= VAR_2;
  else
   VAR_1 = VAR_1*VAR_2 + 1024*VAR_2;

  if (VAR_3 % 11 == 0)
   FUNC_0("\n\t");

  FUNC_0("%5d,", VAR_1);
 }
 FUNC_0("\n};\n\n");
}
