
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adf_bar {scalar_t__ virt_addr; } ;
struct adf_accel_pci {TYPE_1__* pci_dev; struct adf_bar* pci_bars; } ;
struct adf_accel_dev {int debugfs_dir; int * hw_device; struct adf_accel_pci accel_pci_dev; } ;
struct TYPE_2__ {int device; int physfn; } ;



 int VAR_0 ;
 int FUNC_0 (struct adf_accel_dev*) ;
 int FUNC_1 (int *) ;
 struct adf_accel_dev* FUNC_2 (int ) ;
 int FUNC_3 (struct adf_accel_dev*,struct adf_accel_dev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct adf_accel_dev *VAR_1)
{
 struct adf_accel_pci *VAR_2 = &VAR_1->accel_pci_dev;
 struct adf_accel_dev *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct adf_bar *VAR_5 = &VAR_2->pci_bars[VAR_4];

  if (VAR_5->virt_addr)
   FUNC_6(VAR_2->pci_dev, VAR_5->virt_addr);
 }

 if (VAR_1->hw_device) {
  switch (VAR_2->pci_dev->device) {
  case 128:
   FUNC_1(VAR_1->hw_device);
   break;
  default:
   break;
  }
  FUNC_5(VAR_1->hw_device);
  VAR_1->hw_device = ((void*)0);
 }
 FUNC_0(VAR_1);
 FUNC_4(VAR_1->debugfs_dir);
 VAR_3 = FUNC_2(VAR_2->pci_dev->physfn);
 FUNC_3(VAR_1, VAR_3);
}
