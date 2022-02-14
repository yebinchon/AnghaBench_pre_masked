
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int num_vfs; int max_vf_queues; } ;
struct nitrox_device {int mode; TYPE_1__ iov; int flags; } ;


 int FUNC_0 (struct nitrox_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct nitrox_device*,int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct nitrox_device*) ;
 int FUNC_6 (struct nitrox_device*) ;
 int FUNC_7 (struct nitrox_device*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,int) ;
 struct nitrox_device* FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct pci_dev *VAR_3, int VAR_4)
{
 struct nitrox_device *VAR_5 = FUNC_12(VAR_3);
 int VAR_6;

 if (!FUNC_9(VAR_4)) {
  FUNC_3(FUNC_0(VAR_5), "Invalid num_vfs %d\n", VAR_4);
  return -VAR_0;
 }

 if (FUNC_13(VAR_3) == VAR_4)
  return VAR_4;

 VAR_6 = FUNC_11(VAR_3, VAR_4);
 if (VAR_6) {
  FUNC_3(FUNC_0(VAR_5), "failed to enable PCI sriov %d\n", VAR_6);
  return VAR_6;
 }
 FUNC_4(FUNC_0(VAR_5), "Enabled VF(s) %d\n", VAR_4);

 VAR_5->mode = FUNC_8(VAR_4);
 VAR_5->iov.num_vfs = VAR_4;
 VAR_5->iov.max_vf_queues = FUNC_15(VAR_5->mode);

 FUNC_14(VAR_2, &VAR_5->flags);


 FUNC_5(VAR_5);


 VAR_6 = FUNC_7(VAR_5);
 if (VAR_6)
  goto iov_fail;

 FUNC_2(VAR_5, VAR_5->mode);
 return VAR_4;

iov_fail:
 FUNC_10(VAR_3);

 FUNC_1(VAR_2, &VAR_5->flags);
 VAR_5->iov.num_vfs = 0;
 VAR_5->mode = VAR_1;

 FUNC_6(VAR_5);
 return VAR_6;
}
