
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int typebuf ;


 int FUNC_0 (char*,int,char*,int) ;

__attribute__((used)) static const char *
FUNC_1(int VAR_0)
{
 static char VAR_1[16];

 switch (VAR_0) {
 case 1:
  return ("PCI Endpoint Device");
 case 2:
  return ("PCI Sub-Hierarchy");
 case 3:
  return ("IOAPIC");
 case 4:
  return ("HPET");
 default:
  FUNC_0(VAR_1, sizeof(VAR_1), "%d", VAR_0);
  return (VAR_1);
 }
}
