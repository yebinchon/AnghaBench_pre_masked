
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

void
FUNC_2(char *VAR_0[])
{
 FUNC_1("Usage: %s <eeprom dump file>\n", VAR_0[0]);
 FUNC_1("\n");
 FUNC_1("  The eeprom dump file is a text hexdump of an EEPROM.\n");
 FUNC_1("  The lines must be formatted as follows:\n");
 FUNC_1("  0xAAAA: 0xDD 0xDD 0xDD 0xDD 0xDD 0xDD 0xDD 0xDD\n");
 FUNC_1("  where each line must have exactly eight data bytes.\n");
 FUNC_0(127);
}
