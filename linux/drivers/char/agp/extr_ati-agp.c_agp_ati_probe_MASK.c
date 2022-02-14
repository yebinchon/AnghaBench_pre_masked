
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {scalar_t__ device; int dev; int vendor; } ;
struct agp_device_ids {scalar_t__ device_id; scalar_t__ chipset_name; } ;
struct agp_bridge_data {int mode; scalar_t__ capndx; int * driver; struct pci_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct agp_bridge_data*) ;
 struct agp_bridge_data* FUNC_1 () ;
 struct agp_device_ids* VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,char*,int ,scalar_t__) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_6 (struct pci_dev*,struct agp_bridge_data*) ;

__attribute__((used)) static int FUNC_7(struct pci_dev *VAR_6, const struct pci_device_id *VAR_7)
{
 struct agp_device_ids *VAR_8 = VAR_4;
 struct agp_bridge_data *VAR_9;
 u8 VAR_10;
 int VAR_11;

 VAR_10 = FUNC_4(VAR_6, VAR_3);
 if (!VAR_10)
  return -VAR_0;


 for (VAR_11 = 0; VAR_8[VAR_11].chipset_name; VAR_11++) {
  if (VAR_6->device == VAR_8[VAR_11].device_id)
   goto found;
 }

 FUNC_2(&VAR_6->dev, "unsupported Ati chipset [%04x/%04x])\n",
  VAR_6->vendor, VAR_6->device);
 return -VAR_0;

found:
 VAR_9 = FUNC_1();
 if (!VAR_9)
  return -VAR_1;

 VAR_9->dev = VAR_6;
 VAR_9->capndx = VAR_10;

 VAR_9->driver = &VAR_5;

 FUNC_3(&VAR_6->dev, "Ati %s chipset\n", VAR_8[VAR_11].chipset_name);


 FUNC_5(VAR_6,
   VAR_9->capndx+VAR_2,
   &VAR_9->mode);

 FUNC_6(VAR_6, VAR_9);
 return FUNC_0(VAR_9);
}
