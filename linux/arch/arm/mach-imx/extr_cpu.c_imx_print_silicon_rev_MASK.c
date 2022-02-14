
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char const*,...) ;

void FUNC_1(const char *VAR_1, int VAR_2)
{
 if (VAR_2 == VAR_0)
  FUNC_0("CPU identified as %s, unknown revision\n", VAR_1);
 else
  FUNC_0("CPU identified as %s, silicon rev %d.%d\n",
    VAR_1, (VAR_2 >> 4) & 0xf, VAR_2 & 0xf);
}
