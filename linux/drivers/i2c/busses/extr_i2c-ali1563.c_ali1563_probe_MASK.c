
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_5__ {int name; TYPE_1__ dev; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int VAR_1 ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int,char*,int) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_2,
    const struct pci_device_id *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4)
  goto exit;
 VAR_0.dev.parent = &VAR_2->dev;
 FUNC_4(VAR_0.name, sizeof(VAR_0.name),
   "SMBus ALi 1563 Adapter @ %04x", VAR_1);
 VAR_4 = FUNC_3(&VAR_0);
 if (VAR_4)
  goto exit_shutdown;
 return 0;

exit_shutdown:
 FUNC_1(VAR_2);
exit:
 FUNC_2(&VAR_2->dev, "ALi1563 SMBus probe failed (%d)\n", VAR_4);
 return VAR_4;
}
