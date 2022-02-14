
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ max_vf_queues; scalar_t__ num_vfs; } ;
struct nitrox_device {int mode; TYPE_1__ iov; int flags; } ;


 int FUNC_0 (struct nitrox_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct nitrox_device*,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct nitrox_device*) ;
 int FUNC_5 (struct nitrox_device*) ;
 int FUNC_6 (struct pci_dev*) ;
 struct nitrox_device* FUNC_7 (struct pci_dev*) ;
 scalar_t__ FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct pci_dev *VAR_3)
{
 struct nitrox_device *VAR_4 = FUNC_7(VAR_3);

 if (!FUNC_9(VAR_2, &VAR_4->flags))
  return 0;

 if (FUNC_8(VAR_3)) {
  FUNC_3(FUNC_0(VAR_4), "VFs are attached to VM. Can't disable SR-IOV\n");
  return -VAR_0;
 }
 FUNC_6(VAR_3);

 FUNC_1(VAR_2, &VAR_4->flags);

 VAR_4->iov.num_vfs = 0;
 VAR_4->iov.max_vf_queues = 0;
 VAR_4->mode = VAR_1;


 FUNC_5(VAR_4);

 FUNC_2(VAR_4, VAR_4->mode);

 return FUNC_4(VAR_4);
}
