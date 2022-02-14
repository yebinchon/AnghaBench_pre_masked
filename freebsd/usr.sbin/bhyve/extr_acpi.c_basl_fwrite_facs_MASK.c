
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(FILE *VAR_1)
{
 FUNC_1(VAR_1, "/*\n");
 FUNC_1(VAR_1, " * bhyve FACS template\n");
 FUNC_1(VAR_1, " */\n");
 FUNC_1(VAR_1, "[0004]\t\tSignature : \"FACS\"\n");
 FUNC_1(VAR_1, "[0004]\t\tLength : 00000040\n");
 FUNC_1(VAR_1, "[0004]\t\tHardware Signature : 00000000\n");
 FUNC_1(VAR_1, "[0004]\t\t32 Firmware Waking Vector : 00000000\n");
 FUNC_1(VAR_1, "[0004]\t\tGlobal Lock : 00000000\n");
 FUNC_1(VAR_1, "[0004]\t\tFlags (decoded below) : 00000000\n");
 FUNC_1(VAR_1, "\t\t\tS4BIOS Support Present : 0\n");
 FUNC_1(VAR_1, "\t\t\t64-bit Wake Supported (V2) : 0\n");
 FUNC_1(VAR_1,
     "[0008]\t\t64 Firmware Waking Vector : 0000000000000000\n");
 FUNC_1(VAR_1, "[0001]\t\tVersion : 02\n");
 FUNC_1(VAR_1, "[0003]\t\tReserved : 000000\n");
 FUNC_1(VAR_1, "[0004]\t\tOspmFlags (decoded below) : 00000000\n");
 FUNC_1(VAR_1, "\t\t\t64-bit Wake Env Required (V2) : 0\n");

 FUNC_0(VAR_1);

 return (0);

err_exit:
 return (VAR_0);
}
