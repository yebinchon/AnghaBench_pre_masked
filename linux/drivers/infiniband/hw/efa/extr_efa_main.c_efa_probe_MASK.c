
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dummy; } ;
struct efa_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct efa_dev*) ;
 int FUNC_1 (struct efa_dev*) ;
 int FUNC_2 (struct efa_dev*) ;
 struct efa_dev* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_0, const struct pci_device_id *VAR_1)
{
 struct efa_dev *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_3(VAR_0);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  goto err_remove_device;

 return 0;

err_remove_device:
 FUNC_4(VAR_0);
 return VAR_3;
}
