
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 int VAR_5 ;
 int FUNC_2 (struct pci_dev*) ;
 scalar_t__ FUNC_3 (struct pci_dev*,int ,int*) ;
 scalar_t__ FUNC_4 (struct pci_dev*,int ,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_8,
    const struct pci_device_id *VAR_9)
{
 u16 VAR_10, VAR_11;
 if (VAR_5) {
  VAR_10 = VAR_5 & 0xff00;
  FUNC_1(&VAR_8->dev, "Forcing ISA address 0x%x\n",
    VAR_10);

  if (VAR_1 !=
      FUNC_4(VAR_8, VAR_2, VAR_10 | 1))
   return -VAR_0;
 }

 if (VAR_1 != FUNC_3(VAR_8, VAR_2,
       &VAR_11))
  return -VAR_0;

 VAR_10 = VAR_11 & ~(VAR_4 - 1);
 if (VAR_10 == 0) {
  FUNC_0(&VAR_8->dev, "base address not set - upgrade BIOS or use force_addr=0xaddr\n");
  return -VAR_0;
 }

 if (VAR_1 != FUNC_3(VAR_8, VAR_3,
       &VAR_11))
  return -VAR_0;

 if (!(VAR_11 & 0x0001)) {
  FUNC_1(&VAR_8->dev, "enabling sensors\n");
  if (VAR_1 !=
   FUNC_4(VAR_8, VAR_3,
       VAR_11 | 0x0001))
   return -VAR_0;
 }

 if (FUNC_5(&VAR_7))
  goto exit;


 if (FUNC_7(VAR_10))
  goto exit_unregister;
 VAR_6 = FUNC_2(VAR_8);
 return -VAR_0;

exit_unregister:
 FUNC_6(&VAR_7);
exit:
 return -VAR_0;
}
