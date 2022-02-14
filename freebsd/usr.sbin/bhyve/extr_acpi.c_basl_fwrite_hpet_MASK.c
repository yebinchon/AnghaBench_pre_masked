
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(FILE *VAR_2)
{
 FUNC_1(VAR_2, "/*\n");
 FUNC_1(VAR_2, " * bhyve HPET template\n");
 FUNC_1(VAR_2, " */\n");
 FUNC_1(VAR_2, "[0004]\t\tSignature : \"HPET\"\n");
 FUNC_1(VAR_2, "[0004]\t\tTable Length : 00000000\n");
 FUNC_1(VAR_2, "[0001]\t\tRevision : 01\n");
 FUNC_1(VAR_2, "[0001]\t\tChecksum : 00\n");
 FUNC_1(VAR_2, "[0006]\t\tOem ID : \"BHYVE \"\n");
 FUNC_1(VAR_2, "[0008]\t\tOem Table ID : \"BVHPET  \"\n");
 FUNC_1(VAR_2, "[0004]\t\tOem Revision : 00000001\n");


 FUNC_1(VAR_2, "[0004]\t\tAsl Compiler ID : \"xxxx\"\n");
 FUNC_1(VAR_2, "[0004]\t\tAsl Compiler Revision : 00000000\n");
 FUNC_1(VAR_2, "\n");

 FUNC_1(VAR_2, "[0004]\t\tHardware Block ID : %08X\n", VAR_1);
 FUNC_1(VAR_2,
     "[0012]\t\tTimer Block Register : [Generic Address Structure]\n");
 FUNC_1(VAR_2, "[0001]\t\tSpace ID : 00 [SystemMemory]\n");
 FUNC_1(VAR_2, "[0001]\t\tBit Width : 00\n");
 FUNC_1(VAR_2, "[0001]\t\tBit Offset : 00\n");
 FUNC_1(VAR_2,
   "[0001]\t\tEncoded Access Width : 00 [Undefined/Legacy]\n");
 FUNC_1(VAR_2, "[0008]\t\tAddress : 00000000FED00000\n");
 FUNC_1(VAR_2, "\n");

 FUNC_1(VAR_2, "[0001]\t\tSequence Number : 00\n");
 FUNC_1(VAR_2, "[0002]\t\tMinimum Clock Ticks : 0000\n");
 FUNC_1(VAR_2, "[0004]\t\tFlags (decoded below) : 00000001\n");
 FUNC_1(VAR_2, "\t\t\t4K Page Protect : 1\n");
 FUNC_1(VAR_2, "\t\t\t64K Page Protect : 0\n");
 FUNC_1(VAR_2, "\n");

 FUNC_0(VAR_2);

 return (0);

err_exit:
 return (VAR_0);
}
