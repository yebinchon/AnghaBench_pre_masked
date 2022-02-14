
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int irq; } ;
struct inf_hw {struct inf_hw** sc; TYPE_1__* ci; struct pci_dev* pdev; int irq; } ;
struct TYPE_2__ {int full; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct inf_hw*) ;
 struct inf_hw* FUNC_2 (int,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,struct inf_hw*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,int ,int ) ;
 int FUNC_9 (struct inf_hw*) ;
 int FUNC_10 (struct inf_hw*) ;

__attribute__((used)) static int
FUNC_11(struct pci_dev *VAR_4, const struct pci_device_id *VAR_5)
{
 int VAR_6 = -VAR_1;
 struct inf_hw *VAR_7;

 VAR_7 = FUNC_2(sizeof(struct inf_hw), VAR_2);
 if (!VAR_7) {
  FUNC_7("No memory for Infineon ISDN card\n");
  return VAR_6;
 }
 VAR_7->pdev = VAR_4;
 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6) {
  FUNC_1(VAR_7);
  return VAR_6;
 }
 VAR_7->ci = FUNC_0(VAR_5->driver_data);
 if (!VAR_7->ci) {
  FUNC_7("mISDN: do not have information about adapter at %s\n",
   FUNC_5(VAR_4));
  FUNC_1(VAR_7);
  FUNC_3(VAR_4);
  return -VAR_0;
 } else
  FUNC_8("mISDN: found adapter %s at %s\n",
     VAR_7->ci->full, FUNC_5(VAR_4));

 VAR_7->irq = VAR_4->irq;
 FUNC_6(VAR_4, VAR_7);
 VAR_6 = FUNC_10(VAR_7);
 if (VAR_6) {
  FUNC_3(VAR_4);
  FUNC_1(VAR_7);
  FUNC_6(VAR_4, ((void*)0));
 } else if (VAR_5->driver_data == VAR_3) {
  int VAR_8;
  struct inf_hw *VAR_9;

  for (VAR_8 = 1; VAR_8 < 4; VAR_8++) {
   VAR_9 = FUNC_2(sizeof(struct inf_hw), VAR_2);
   if (!VAR_9) {
    FUNC_9(VAR_7);
    FUNC_3(VAR_4);
    return -VAR_1;
   }
   VAR_9->irq = VAR_7->irq;
   VAR_9->pdev = VAR_7->pdev;
   VAR_9->ci = VAR_7->ci + VAR_8;
   VAR_6 = FUNC_10(VAR_9);
   if (VAR_6) {
    FUNC_3(VAR_4);
    FUNC_1(VAR_9);
    FUNC_9(VAR_7);
    break;
   } else
    VAR_7->sc[VAR_8 - 1] = VAR_9;
  }
 }
 return VAR_6;
}
