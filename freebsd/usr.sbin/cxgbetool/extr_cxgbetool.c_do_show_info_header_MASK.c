
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;




 int VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(uint32_t VAR_1)
{
 uint32_t VAR_2;

 FUNC_0("%4s %8s", "Idx", "Hits");
 for (VAR_2 = 136; VAR_2 <= 135; VAR_2 <<= 1) {
  switch (VAR_1 & VAR_2) {
  case 136:
   FUNC_0(" FCoE");
   break;

  case 130:
   FUNC_0(" Port");
   break;

  case 128:
   if (VAR_1 & VAR_0)
    FUNC_0("   VFvld:PF:VF");
   else
    FUNC_0("     vld:oVLAN");
   break;

  case 129:
   FUNC_0("      vld:VLAN");
   break;

  case 133:
   FUNC_0("   TOS");
   break;

  case 134:
   FUNC_0("  Prot");
   break;

  case 137:
   FUNC_0("   EthType");
   break;

  case 132:
   FUNC_0("  MACIdx");
   break;

  case 131:
   FUNC_0(" MPS");
   break;

  case 135:
   FUNC_0(" Frag");
   break;

  default:

   break;
  }
 }
 FUNC_0(" %20s %20s %9s %9s %s\n",
     "DIP", "SIP", "DPORT", "SPORT", "Action");
}
