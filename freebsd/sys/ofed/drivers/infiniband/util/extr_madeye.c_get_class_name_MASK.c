
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
__attribute__((used)) static char * FUNC_0(u8 VAR_0)
{
 switch(VAR_0) {
 case 128:
  return "LID routed SMP";
 case 129:
  return "Directed route SMP";
 case 130:
  return "Subnet admin.";
 case 132:
  return "Perf. mgmt.";
 case 135:
  return "Baseboard mgmt.";
 case 133:
  return "Device mgmt.";
 case 134:
  return "Comm. mgmt.";
 case 131:
  return "SNMP";
 default:
  return "Unknown vendor/application";
 }
}
