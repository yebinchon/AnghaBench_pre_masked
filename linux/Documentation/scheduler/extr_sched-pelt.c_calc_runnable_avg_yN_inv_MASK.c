
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long FUNC_0 (int ,int) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;

void FUNC_2(void)
{
 int VAR_2;
 unsigned int VAR_3;


 FUNC_1("static const u32 runnable_avg_yN_inv[] __maybe_unused = {");
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_3 = ((1UL<<32)-1)*FUNC_0(VAR_1, VAR_2);

  if (VAR_2 % 6 == 0) FUNC_1("\n\t");
  FUNC_1("0x%8x, ", VAR_3);
 }
 FUNC_1("\n};\n\n");
}
