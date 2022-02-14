
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;

void FUNC_1(void)
{
 int VAR_3, VAR_4 = VAR_2;

 FUNC_0("static const u32 __accumulated_sum_N32[] = {\n\t     0,");
 for (VAR_3 = 1; VAR_3 <= VAR_1/VAR_0+1; VAR_3++) {
  if (VAR_3 > 1)
   VAR_4 = VAR_4/2 + VAR_2;

  if (VAR_3 % 6 == 0)
   FUNC_0("\n\t");

  FUNC_0("%6d,", VAR_4);
 }
 FUNC_0("\n};\n\n");
}
