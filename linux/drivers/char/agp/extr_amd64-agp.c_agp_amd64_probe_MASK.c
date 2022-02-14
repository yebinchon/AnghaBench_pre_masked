
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {scalar_t__ vendor; scalar_t__ device; int dev; } ;
struct agp_bridge_data {int mode; scalar_t__ capndx; struct pci_dev* dev; int * driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct agp_bridge_data*) ;
 struct agp_bridge_data* FUNC_1 () ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct agp_bridge_data*) ;
 int FUNC_3 (struct pci_dev*,struct agp_bridge_data*) ;
 int VAR_9 ;
 int FUNC_4 (struct pci_dev*,scalar_t__) ;
 int FUNC_5 (int *,char*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct pci_dev*) ;
 scalar_t__ FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_9 (struct pci_dev*,struct agp_bridge_data*) ;
 int FUNC_10 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_11(struct pci_dev *VAR_10,
      const struct pci_device_id *VAR_11)
{
 struct agp_bridge_data *VAR_12;
 u8 VAR_13;
 int VAR_14;


 if (VAR_8)
  return -VAR_0;

 VAR_13 = FUNC_7(VAR_10, VAR_3);
 if (!VAR_13)
  return -VAR_0;



 VAR_12 = FUNC_1();
 if (!VAR_12)
  return -VAR_1;

 if (VAR_10->vendor == VAR_6 &&
     VAR_10->device == VAR_4) {
  FUNC_3(VAR_10, VAR_12);
 } else {
  FUNC_5(&VAR_10->dev, "AGP bridge [%04x/%04x]\n",
    VAR_10->vendor, VAR_10->device);
 }

 VAR_12->driver = &VAR_9;
 VAR_12->dev = VAR_10;
 VAR_12->capndx = VAR_13;


 FUNC_8(VAR_10, VAR_12->capndx+VAR_2, &VAR_12->mode);

 if (FUNC_4(VAR_10, VAR_13) == -1) {
  FUNC_2(VAR_12);
  return -VAR_0;
 }

 if (VAR_10->vendor == VAR_7) {
  int VAR_15 = FUNC_6(VAR_10);
  if (VAR_15) {
   FUNC_2(VAR_12);
   return VAR_15;
  }
 }

 if (VAR_10->vendor == VAR_5) {
  int VAR_16 = FUNC_10(VAR_10);
  if (VAR_16) {
   FUNC_2(VAR_12);
   return VAR_16;
  }
 }

 FUNC_9(VAR_10, VAR_12);
 VAR_14 = FUNC_0(VAR_12);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_8++;
 return 0;
}
