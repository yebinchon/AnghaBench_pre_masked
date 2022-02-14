
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,int) ;
 int * VAR_1 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(FILE *VAR_4)
{
 VAR_1 = VAR_4;
 VAR_0 = 0;
 VAR_2 = 0;

 FUNC_3("/*");
 FUNC_3(" * bhyve DSDT template");
 FUNC_3(" */");
 FUNC_3("DefinitionBlock (\"bhyve_dsdt.aml\", \"DSDT\", 2,"
   "\"BHYVE \", \"BVDSDT  \", 0x00000001)");
 FUNC_3("{");
 FUNC_3("  Name (_S5, Package ()");
 FUNC_3("  {");
 FUNC_3("      0x05,");
 FUNC_3("      Zero,");
 FUNC_3("  })");

 FUNC_5();

 FUNC_3("");
 FUNC_3("  Scope (_SB.PC00)");
 FUNC_3("  {");
 FUNC_3("    Device (HPET)");
 FUNC_3("    {");
 FUNC_3("      Name (_HID, EISAID(\"PNP0103\"))");
 FUNC_3("      Name (_UID, 0)");
 FUNC_3("      Name (_CRS, ResourceTemplate ()");
 FUNC_3("      {");
 FUNC_2(4);
 FUNC_1(0xFED00000, 0x400);
 FUNC_4(4);
 FUNC_3("      })");
 FUNC_3("    }");
 FUNC_3("  }");
 FUNC_3("}");

 if (VAR_0 != 0)
  return (VAR_0);

 FUNC_0(VAR_4);

 return (0);

err_exit:
 return (VAR_3);
}
