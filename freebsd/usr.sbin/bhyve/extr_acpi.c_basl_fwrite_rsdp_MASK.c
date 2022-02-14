
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2(FILE *VAR_4)
{
 FUNC_1(VAR_4, "/*\n");
 FUNC_1(VAR_4, " * bhyve RSDP template\n");
 FUNC_1(VAR_4, " */\n");
 FUNC_1(VAR_4, "[0008]\t\tSignature : \"RSD PTR \"\n");
 FUNC_1(VAR_4, "[0001]\t\tChecksum : 43\n");
 FUNC_1(VAR_4, "[0006]\t\tOem ID : \"BHYVE \"\n");
 FUNC_1(VAR_4, "[0001]\t\tRevision : 02\n");
 FUNC_1(VAR_4, "[0004]\t\tRSDT Address : %08X\n",
     VAR_2 + VAR_0);
 FUNC_1(VAR_4, "[0004]\t\tLength : 00000024\n");
 FUNC_1(VAR_4, "[0008]\t\tXSDT Address : 00000000%08X\n",
     VAR_2 + VAR_1);
 FUNC_1(VAR_4, "[0001]\t\tExtended Checksum : 00\n");
 FUNC_1(VAR_4, "[0003]\t\tReserved : 000000\n");

 FUNC_0(VAR_4);

 return (0);

err_exit:
 return (VAR_3);
}
