
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int bus; } ;
struct e752x_pvt {int * dev_d0f1; int * dev_d0f0; TYPE_1__* dev_info; } ;
struct TYPE_4__ {int ctl_dev; int err_dev; } ;
struct TYPE_3__ {int err_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int ,int ,int *) ;
 int * FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_3, int VAR_4,
   struct e752x_pvt *VAR_5)
{
 VAR_5->dev_d0f1 = FUNC_4(VAR_1,
    VAR_5->dev_info->err_dev, ((void*)0));

 if (VAR_5->dev_d0f1 == ((void*)0)) {
  VAR_5->dev_d0f1 = FUNC_5(VAR_3->bus,
       FUNC_0(0, 1));
  FUNC_2(VAR_5->dev_d0f1);
 }

 if (VAR_5->dev_d0f1 == ((void*)0)) {
  FUNC_1(VAR_0, "error reporting device not found:"
   "vendor %x device 0x%x (broken BIOS?)\n",
   VAR_1, VAR_2[VAR_4].err_dev);
  return 1;
 }

 VAR_5->dev_d0f0 = FUNC_4(VAR_1,
    VAR_2[VAR_4].ctl_dev,
    ((void*)0));

 if (VAR_5->dev_d0f0 == ((void*)0))
  goto fail;

 return 0;

fail:
 FUNC_3(VAR_5->dev_d0f1);
 return 1;
}
