
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int driver_data; } ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_2,
     const struct pci_device_id *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4 < 0) {
  FUNC_0(&VAR_2->dev, "error: could not enable device\n");
  return VAR_4;
 }

 VAR_1 = FUNC_1(VAR_2);
 VAR_0 = VAR_3->driver_data;

 return 0;
}
