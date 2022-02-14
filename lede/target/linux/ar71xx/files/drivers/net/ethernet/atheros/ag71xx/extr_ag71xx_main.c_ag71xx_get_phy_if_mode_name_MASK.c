
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phy_interface_t ;
__attribute__((used)) static const char *FUNC_0(phy_interface_t VAR_0)
{
 switch (VAR_0) {
 case 131:
  return "MII";
 case 132:
  return "GMII";
 case 129:
  return "RMII";
 case 130:
  return "RGMII";
 case 128:
  return "SGMII";
 default:
  break;
 }

 return "unknown";
}
