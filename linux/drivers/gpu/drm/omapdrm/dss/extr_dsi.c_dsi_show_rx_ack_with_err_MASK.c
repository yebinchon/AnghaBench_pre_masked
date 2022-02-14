
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(u16 VAR_0)
{
 FUNC_0("\tACK with ERROR (%#x):\n", VAR_0);
 if (VAR_0 & (1 << 0))
  FUNC_0("\t\tSoT Error\n");
 if (VAR_0 & (1 << 1))
  FUNC_0("\t\tSoT Sync Error\n");
 if (VAR_0 & (1 << 2))
  FUNC_0("\t\tEoT Sync Error\n");
 if (VAR_0 & (1 << 3))
  FUNC_0("\t\tEscape Mode Entry Command Error\n");
 if (VAR_0 & (1 << 4))
  FUNC_0("\t\tLP Transmit Sync Error\n");
 if (VAR_0 & (1 << 5))
  FUNC_0("\t\tHS Receive Timeout Error\n");
 if (VAR_0 & (1 << 6))
  FUNC_0("\t\tFalse Control Error\n");
 if (VAR_0 & (1 << 7))
  FUNC_0("\t\t(reserved7)\n");
 if (VAR_0 & (1 << 8))
  FUNC_0("\t\tECC Error, single-bit (corrected)\n");
 if (VAR_0 & (1 << 9))
  FUNC_0("\t\tECC Error, multi-bit (not corrected)\n");
 if (VAR_0 & (1 << 10))
  FUNC_0("\t\tChecksum Error\n");
 if (VAR_0 & (1 << 11))
  FUNC_0("\t\tData type not recognized\n");
 if (VAR_0 & (1 << 12))
  FUNC_0("\t\tInvalid VC ID\n");
 if (VAR_0 & (1 << 13))
  FUNC_0("\t\tInvalid Transmission Length\n");
 if (VAR_0 & (1 << 14))
  FUNC_0("\t\t(reserved14)\n");
 if (VAR_0 & (1 << 15))
  FUNC_0("\t\tDSI Protocol Violation\n");
}
