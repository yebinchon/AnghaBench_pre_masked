
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int driver_data; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_0, const struct pci_device_id *VAR_1)
{
 int VAR_2;

 FUNC_0(0, "MC:\n");


 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  return VAR_2;


 return FUNC_1(VAR_0, VAR_1->driver_data);
}
