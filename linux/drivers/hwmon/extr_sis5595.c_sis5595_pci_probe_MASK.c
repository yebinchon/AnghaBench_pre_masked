
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,int) ;
 int VAR_7 ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 struct pci_dev* FUNC_5 (int ,int,int *) ;
 scalar_t__ FUNC_6 (struct pci_dev*,int ,int*) ;
 scalar_t__ FUNC_7 (struct pci_dev*,int ,int*) ;
 scalar_t__ FUNC_8 (struct pci_dev*,int ,int) ;
 int FUNC_9 (struct pci_dev*,int ,int) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_8 ;
 scalar_t__ FUNC_12 (int) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_13(struct pci_dev *VAR_10,
           const struct pci_device_id *VAR_11)
{
 u16 VAR_12;
 u8 VAR_13;
 int *VAR_14;

 for (VAR_14 = VAR_6; *VAR_14 != 0; VAR_14++) {
  struct pci_dev *VAR_15;
  VAR_15 = FUNC_5(VAR_2, *VAR_14, ((void*)0));
  if (VAR_15) {
   FUNC_1(&VAR_15->dev,
    "Looked for SIS5595 but found unsupported device %.4x\n",
    *VAR_14);
   FUNC_4(VAR_15);
   return -VAR_0;
  }
 }

 VAR_7 &= ~(VAR_5 - 1);
 if (VAR_7) {
  FUNC_2(&VAR_10->dev, "Forcing ISA address 0x%x\n", VAR_7);
  FUNC_9(VAR_10, VAR_3, VAR_7);
 }

 if (VAR_1 !=
     FUNC_7(VAR_10, VAR_3, &VAR_12)) {
  FUNC_1(&VAR_10->dev, "Failed to read ISA address\n");
  return -VAR_0;
 }

 VAR_12 &= ~(VAR_5 - 1);
 if (!VAR_12) {
  FUNC_1(&VAR_10->dev,
   "Base address not set - upgrade BIOS or use force_addr=0xaddr\n");
  return -VAR_0;
 }
 if (VAR_7 && VAR_12 != VAR_7) {

  FUNC_1(&VAR_10->dev, "Failed to force ISA address\n");
  return -VAR_0;
 }

 if (VAR_1 !=
     FUNC_6(VAR_10, VAR_4, &VAR_13)) {
  FUNC_1(&VAR_10->dev, "Failed to read enable register\n");
  return -VAR_0;
 }
 if (!(VAR_13 & 0x80)) {
  if ((VAR_1 !=
       FUNC_8(VAR_10, VAR_4,
        VAR_13 | 0x80))
   || (VAR_1 !=
       FUNC_6(VAR_10, VAR_4, &VAR_13))
   || (!(VAR_13 & 0x80))) {

   FUNC_1(&VAR_10->dev, "Failed to enable HWM device\n");
   return -VAR_0;
  }
 }

 if (FUNC_10(&VAR_9)) {
  FUNC_0(&VAR_10->dev, "Failed to register sis5595 driver\n");
  goto exit;
 }

 VAR_8 = FUNC_3(VAR_10);

 if (FUNC_12(VAR_12))
  goto exit_unregister;






 return -VAR_0;

exit_unregister:
 FUNC_4(VAR_10);
 FUNC_11(&VAR_9);
exit:
 return -VAR_0;
}
