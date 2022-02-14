
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum pci_ers_result { ____Placeholder_pci_ers_result } pci_ers_result ;
 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static const char *FUNC_1(enum pci_ers_result VAR_0)
{
 switch (VAR_0) {
 case 130:
  return "none";
 case 133:
  return "can recover";
 case 131:
  return "need reset";
 case 132:
  return "disconnect";
 case 128:
  return "recovered";
 case 129:
  return "no AER driver";
 default:
  FUNC_0(1, "Unknown result type: %d\n", (int)VAR_0);
  return "unknown";
 }
}
