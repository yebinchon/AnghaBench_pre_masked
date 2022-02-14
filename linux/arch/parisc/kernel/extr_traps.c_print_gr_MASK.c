
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int * gr; } ;


 int FUNC_0 (char*,int *,char*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,char*,...) ;

__attribute__((used)) static void FUNC_4(char *VAR_1, struct pt_regs *VAR_2)
{
 int VAR_3;
 char VAR_4[64];

 FUNC_3("%s\n", VAR_1);
 FUNC_3("%s     YZrvWESTHLNXBCVMcbcbcbcbOGFRQPDI\n", VAR_1);
 FUNC_2(VAR_4, VAR_2->gr[0], 32);
 FUNC_3("%sPSW: %s %s\n", VAR_1, VAR_4, FUNC_1());

 for (VAR_3 = 0; VAR_3 < 32; VAR_3 += 4)
  FUNC_0(VAR_1, VAR_2->gr, "r", VAR_0, VAR_3);
}
