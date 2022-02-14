
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct hfi1_devdata {int flags; } ;
typedef int pci_ers_result_t ;
typedef int pci_channel_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hfi1_devdata*,char*,...) ;
 int FUNC_1 (struct hfi1_devdata*) ;



 int FUNC_2 (struct pci_dev*) ;
 struct hfi1_devdata* FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t
FUNC_4(struct pci_dev *VAR_4, pci_channel_state_t VAR_5)
{
 struct hfi1_devdata *VAR_6 = FUNC_3(VAR_4);
 pci_ers_result_t VAR_7 = VAR_3;

 switch (VAR_5) {
 case 129:
  FUNC_0(VAR_6, "State Normal, ignoring\n");
  break;

 case 130:
  FUNC_0(VAR_6, "State Frozen, requesting reset\n");
  FUNC_2(VAR_4);
  VAR_7 = VAR_2;
  break;

 case 128:
  if (VAR_6) {
   FUNC_0(VAR_6, "State Permanent Failure, disabling\n");

   VAR_6->flags &= ~VAR_0;
   FUNC_1(VAR_6);
  }

  VAR_7 = VAR_1;
  break;

 default:
  FUNC_0(VAR_6, "HFI1 PCI errors detected (state %d)\n",
       VAR_5);
  break;
 }
 return VAR_7;
}
