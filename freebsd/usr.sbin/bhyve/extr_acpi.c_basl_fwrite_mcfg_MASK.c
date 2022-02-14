
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 int VAR_0 ;
 int FUNC_2 () ;

__attribute__((used)) static int
FUNC_3(FILE *VAR_1)
{
 FUNC_1(VAR_1, "/*\n");
 FUNC_1(VAR_1, " * bhyve MCFG template\n");
 FUNC_1(VAR_1, " */\n");
 FUNC_1(VAR_1, "[0004]\t\tSignature : \"MCFG\"\n");
 FUNC_1(VAR_1, "[0004]\t\tTable Length : 00000000\n");
 FUNC_1(VAR_1, "[0001]\t\tRevision : 01\n");
 FUNC_1(VAR_1, "[0001]\t\tChecksum : 00\n");
 FUNC_1(VAR_1, "[0006]\t\tOem ID : \"BHYVE \"\n");
 FUNC_1(VAR_1, "[0008]\t\tOem Table ID : \"BVMCFG  \"\n");
 FUNC_1(VAR_1, "[0004]\t\tOem Revision : 00000001\n");


 FUNC_1(VAR_1, "[0004]\t\tAsl Compiler ID : \"xxxx\"\n");
 FUNC_1(VAR_1, "[0004]\t\tAsl Compiler Revision : 00000000\n");
 FUNC_1(VAR_1, "[0008]\t\tReserved : 0\n");
 FUNC_1(VAR_1, "\n");

 FUNC_1(VAR_1, "[0008]\t\tBase Address : %016lX\n", FUNC_2());
 FUNC_1(VAR_1, "[0002]\t\tSegment Group Number : 0000\n");
 FUNC_1(VAR_1, "[0001]\t\tStart Bus Number : 00\n");
 FUNC_1(VAR_1, "[0001]\t\tEnd Bus Number : FF\n");
 FUNC_1(VAR_1, "[0004]\t\tReserved : 0\n");
 FUNC_0(VAR_1);
 return (0);
err_exit:
 return (VAR_0);
}
