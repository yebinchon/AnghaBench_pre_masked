
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct pci_conf {int pc_sel; } ;
 int VAR_0 ;





 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,int *,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(int VAR_8, struct pci_conf *VAR_9, uint8_t VAR_10)
{
 uint32_t VAR_11;
 uint16_t VAR_12;

 VAR_12 = FUNC_1(VAR_8, &VAR_9->pc_sel, VAR_10 + VAR_7, 2);
 FUNC_0("HT ");
 if ((VAR_12 & 0xe000) == VAR_1)
  FUNC_0("slave");
 else if ((VAR_12 & 0xe000) == VAR_0)
  FUNC_0("host");
 else
  switch (VAR_12 & VAR_2) {
  case 131:
   FUNC_0("switch");
   break;
  case 136:
   FUNC_0("interrupt");
   break;
  case 132:
   FUNC_0("revision ID");
   break;
  case 130:
   FUNC_0("unit ID clumping");
   break;
  case 140:
   FUNC_0("extended config space");
   break;
  case 142:
   FUNC_0("address mapping");
   break;
  case 135:
   FUNC_0("MSI %saddress window %s at 0x",
       VAR_12 & VAR_4 ? "fixed " : "",
       VAR_12 & VAR_3 ? "enabled" :
       "disabled");
   if (VAR_12 & VAR_4)
    FUNC_0("fee00000");
   else {
    VAR_11 = FUNC_1(VAR_8, &VAR_9->pc_sel,
        VAR_10 + VAR_5, 4);
    if (VAR_11 != 0)
     FUNC_0("%08x", VAR_11);
    VAR_11 = FUNC_1(VAR_8, &VAR_9->pc_sel,
        VAR_10 + VAR_6, 4);
    FUNC_0("%08x", VAR_11);
   }
   break;
  case 141:
   FUNC_0("direct route");
   break;
  case 129:
   FUNC_0("VC set");
   break;
  case 133:
   FUNC_0("retry mode");
   break;
  case 128:
   FUNC_0("X86 encoding");
   break;
  case 138:
   FUNC_0("Gen3");
   break;
  case 139:
   FUNC_0("function-level extension");
   break;
  case 134:
   FUNC_0("power management");
   break;
  case 137:
   FUNC_0("high node count");
   break;
  default:
   FUNC_0("unknown %02x", VAR_12);
   break;
  }
}
