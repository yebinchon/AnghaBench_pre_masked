
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {scalar_t__ device; int vendor; int dev; } ;
struct device_node {int dummy; } ;
struct agp_device_ids {scalar_t__ device_id; int * chipset_name; } ;
struct agp_bridge_data {int mode; int flags; scalar_t__ capndx; struct pci_dev* dev; int * driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct agp_bridge_data*) ;
 struct agp_bridge_data* FUNC_1 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,char*,int ,scalar_t__) ;
 int FUNC_3 (int *,char*,int *) ;
 int VAR_7 ;
 struct device_node* FUNC_4 (int *,char*) ;
 int* FUNC_5 (struct device_node*,char*,int *) ;
 int FUNC_6 (struct device_node*) ;
 scalar_t__ FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_9 (struct pci_dev*,struct agp_bridge_data*) ;
 int FUNC_10 (struct pci_dev*,int ,int ) ;
 int VAR_8 ;
 struct agp_device_ids* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_11(struct pci_dev *VAR_12,
         const struct pci_device_id *VAR_13)
{
 struct agp_device_ids *VAR_14 = VAR_9;
 struct agp_bridge_data *VAR_15;
 struct device_node *VAR_16;
 u8 VAR_17;
 int VAR_18;

 VAR_17 = FUNC_7(VAR_12, VAR_4);
 if (VAR_17 == 0)
  return -VAR_1;


 for (VAR_18 = 0; VAR_14[VAR_18].chipset_name != ((void*)0); ++VAR_18) {
  if (VAR_12->device == VAR_14[VAR_18].device_id) {
   FUNC_3(&VAR_12->dev, "Apple %s chipset\n",
     VAR_14[VAR_18].chipset_name);
   goto found;
  }
 }

 FUNC_2(&VAR_12->dev, "unsupported Apple chipset [%04x/%04x]\n",
  VAR_12->vendor, VAR_12->device);
 return -VAR_1;

 found:

 VAR_11 = 0;
 VAR_7 = 0;

 VAR_16 = FUNC_4(((void*)0), "uni-n");

 if (VAR_16 == ((void*)0)) {
  VAR_7 = 1;
  VAR_16 = FUNC_4(((void*)0), "u3");
 }
 if (VAR_16) {
  const int *VAR_19 = FUNC_5(VAR_16,
    "device-rev", ((void*)0));
  if (VAR_19 != ((void*)0))
   VAR_11 = *VAR_19 & 0x3f;
  FUNC_6(VAR_16);
 }







 VAR_15 = FUNC_1();
 if (!VAR_15)
  return -VAR_2;

 if (VAR_7)
  VAR_15->driver = &VAR_8;
 else
  VAR_15->driver = &VAR_10;

 VAR_15->dev = VAR_12;
 VAR_15->capndx = VAR_17;
 VAR_15->flags = VAR_0;


 FUNC_8(VAR_12, VAR_17+VAR_3, &VAR_15->mode);

 FUNC_9(VAR_12, VAR_15);
 return FUNC_0(VAR_15);
}
