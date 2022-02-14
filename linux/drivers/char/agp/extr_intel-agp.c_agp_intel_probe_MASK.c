
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct resource {scalar_t__ end; int start; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {scalar_t__ device; int dev; struct resource* resource; int vendor; } ;
struct agp_bridge_data {int mode; scalar_t__ capndx; int * dev_private_data; struct pci_dev* dev; int driver; } ;
struct TYPE_2__ {scalar_t__ chip_id; int * name; int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct agp_bridge_data*) ;
 struct agp_bridge_data* FUNC_1 () ;
 int FUNC_2 (struct agp_bridge_data*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int *) ;
 int FUNC_5 (int *,char*,int ,scalar_t__) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_6 (struct pci_dev*,int *,struct agp_bridge_data*) ;
 scalar_t__ FUNC_7 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_8 (struct pci_dev*) ;
 scalar_t__ FUNC_9 (struct pci_dev*,int ) ;
 int FUNC_10 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_11 (struct pci_dev*,struct agp_bridge_data*) ;

__attribute__((used)) static int FUNC_12(struct pci_dev *VAR_5,
      const struct pci_device_id *VAR_6)
{
 struct agp_bridge_data *VAR_7;
 u8 VAR_8 = 0;
 struct resource *VAR_9;
 int VAR_10, VAR_11;

 VAR_8 = FUNC_9(VAR_5, VAR_3);

 VAR_7 = FUNC_1();
 if (!VAR_7)
  return -VAR_1;

 VAR_7->capndx = VAR_8;

 if (FUNC_6(VAR_5, ((void*)0), VAR_7))
  goto found_gmch;

 for (VAR_10 = 0; VAR_4[VAR_10].name != ((void*)0); VAR_10++) {



  if (VAR_5->device == VAR_4[VAR_10].chip_id) {
   VAR_7->driver = VAR_4[VAR_10].driver;
   break;
  }
 }

 if (!VAR_7->driver) {
  if (VAR_8)
   FUNC_5(&VAR_5->dev, "unsupported Intel chipset [%04x/%04x]\n",
     VAR_5->vendor, VAR_5->device);
  FUNC_2(VAR_7);
  return -VAR_0;
 }

 VAR_7->dev = VAR_5;
 VAR_7->dev_private_data = ((void*)0);

 FUNC_4(&VAR_5->dev, "Intel %s Chipset\n", VAR_4[VAR_10].name);
 VAR_9 = &VAR_5->resource[0];
 if (!VAR_9->start && VAR_9->end) {
  if (FUNC_7(VAR_5, 0)) {
   FUNC_3(&VAR_5->dev, "can't assign resource 0\n");
   FUNC_2(VAR_7);
   return -VAR_0;
  }
 }






 if (FUNC_8(VAR_5)) {
  FUNC_3(&VAR_5->dev, "can't enable PCI device\n");
  FUNC_2(VAR_7);
  return -VAR_0;
 }


 if (VAR_8) {
  FUNC_10(VAR_5,
    VAR_7->capndx+VAR_2,
    &VAR_7->mode);
 }

found_gmch:
 FUNC_11(VAR_5, VAR_7);
 VAR_11 = FUNC_0(VAR_7);
 return VAR_11;
}
