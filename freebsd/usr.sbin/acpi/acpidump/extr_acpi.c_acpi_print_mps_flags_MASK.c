
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;





 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(uint16_t VAR_2)
{

 FUNC_0("\tFlags={Polarity=");
 switch (VAR_2 & VAR_0) {
 case 131:
  FUNC_0("conforming");
  break;
 case 133:
  FUNC_0("active-hi");
  break;
 case 132:
  FUNC_0("active-lo");
  break;
 default:
  FUNC_0("0x%x", VAR_2 & VAR_0);
  break;
 }
 FUNC_0(", Trigger=");
 switch (VAR_2 & VAR_1) {
 case 130:
  FUNC_0("conforming");
  break;
 case 129:
  FUNC_0("edge");
  break;
 case 128:
  FUNC_0("level");
  break;
 default:
  FUNC_0("0x%x", (VAR_2 & VAR_1) >> 2);
 }
 FUNC_0("}\n");
}
