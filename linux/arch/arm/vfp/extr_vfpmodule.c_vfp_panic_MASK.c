
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(char *VAR_2, u32 VAR_3)
{
 int VAR_4;

 FUNC_1("VFP: Error: %s\n", VAR_2);
 FUNC_1("VFP: EXC 0x%08x SCR 0x%08x INST 0x%08x\n",
  FUNC_0(VAR_0), FUNC_0(VAR_1), VAR_3);
 for (VAR_4 = 0; VAR_4 < 32; VAR_4 += 2)
  FUNC_1("VFP: s%2u: 0x%08x s%2u: 0x%08x\n",
         VAR_4, FUNC_2(VAR_4), VAR_4+1, FUNC_2(VAR_4+1));
}
