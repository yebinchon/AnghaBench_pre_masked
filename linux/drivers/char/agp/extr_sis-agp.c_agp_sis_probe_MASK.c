
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int device; int vendor; int dev; } ;
struct agp_bridge_data {int mode; scalar_t__ capndx; struct pci_dev* dev; int * driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct agp_bridge_data*) ;
 struct agp_bridge_data* FUNC_1 () ;
 int FUNC_2 (int *,char*,int ,int ) ;
 int FUNC_3 (struct agp_bridge_data*) ;
 scalar_t__ FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_6 (struct pci_dev*,struct agp_bridge_data*) ;
 int VAR_4 ;
 int FUNC_7 (struct agp_bridge_data*) ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_5, const struct pci_device_id *VAR_6)
{
 struct agp_bridge_data *VAR_7;
 u8 VAR_8;

 VAR_8 = FUNC_4(VAR_5, VAR_3);
 if (!VAR_8)
  return -VAR_0;


 FUNC_2(&VAR_5->dev, "SiS chipset [%04x/%04x]\n",
   VAR_5->vendor, VAR_5->device);
 VAR_7 = FUNC_1();
 if (!VAR_7)
  return -VAR_1;

 VAR_7->driver = &VAR_4;
 VAR_7->dev = VAR_5;
 VAR_7->capndx = VAR_8;

 FUNC_3(VAR_7);


 FUNC_5(VAR_5, VAR_7->capndx+VAR_2, &VAR_7->mode);
 FUNC_7(VAR_7);

 FUNC_6(VAR_5, VAR_7);
 return FUNC_0(VAR_7);
}
