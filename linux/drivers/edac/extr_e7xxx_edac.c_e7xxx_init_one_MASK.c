
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int driver_data; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_1, const struct pci_device_id *VAR_2)
{
 FUNC_1(0, "\n");


 return FUNC_2(VAR_1) ?
  -VAR_0 : FUNC_0(VAR_1, VAR_2->driver_data);
}
