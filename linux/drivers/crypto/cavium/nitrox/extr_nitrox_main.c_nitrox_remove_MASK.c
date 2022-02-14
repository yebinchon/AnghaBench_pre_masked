
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int device_id; int vendor_id; } ;
struct nitrox_device {int bar_addr; int state; TYPE_1__ hw; int refcnt; } ;


 int FUNC_0 (struct nitrox_device*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct nitrox_device*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct nitrox_device*) ;
 int FUNC_8 (struct nitrox_device*) ;
 int FUNC_9 (struct nitrox_device*) ;
 int FUNC_10 (struct pci_dev*,int ) ;
 int FUNC_11 (struct pci_dev*) ;
 struct nitrox_device* FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 () ;

__attribute__((used)) static void FUNC_18(struct pci_dev *VAR_1)
{
 struct nitrox_device *VAR_2 = FUNC_12(VAR_1);

 if (!VAR_2)
  return;

 if (!FUNC_15(&VAR_2->refcnt)) {
  FUNC_2(FUNC_0(VAR_2), "Device refcnt not zero (%d)\n",
   FUNC_16(&VAR_2->refcnt));
  return;
 }

 FUNC_3(FUNC_0(VAR_2), "Removing Device %x:%x\n",
   VAR_2->hw.vendor_id, VAR_2->hw.device_id);

 FUNC_1(&VAR_2->state, VAR_0);

 FUNC_17();

 FUNC_9(VAR_2);





 FUNC_6();
 FUNC_7(VAR_2);
 FUNC_8(VAR_2);

 FUNC_4(VAR_2->bar_addr);
 FUNC_5(VAR_2);

 FUNC_14(VAR_1, ((void*)0));
 FUNC_13(VAR_1);
 FUNC_11(VAR_1);
}
