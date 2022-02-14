
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(int VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4,
    void *VAR_5)
{
 char *VAR_6;

 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6 == ((void*)0))
  return;
 FUNC_0("  Package ()");
 FUNC_0("  {");
 FUNC_0("    0x%X,", VAR_1 << 16 | 0xffff);
 FUNC_0("    0x%02X,", VAR_2 - 1);
 FUNC_0("    %s,", VAR_6);
 FUNC_0("    0x00");
 FUNC_0("  },");
 FUNC_1(VAR_6);
}
