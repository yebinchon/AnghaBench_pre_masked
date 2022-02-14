
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum pci_ers_result { ____Placeholder_pci_ers_result } pci_ers_result ;
 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static int FUNC_1(enum pci_ers_result VAR_0)
{
 switch (VAR_0) {
 case 130:
  return 1;
 case 129:
  return 2;
 case 128:
  return 3;
 case 133:
  return 4;
 case 132:
  return 5;
 case 131:
  return 6;
 default:
  FUNC_0(1, "Unknown pci_ers_result value: %d\n", (int)VAR_0);
  return 0;
 }
}
