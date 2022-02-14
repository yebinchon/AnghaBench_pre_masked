
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct kfd_process_device {int dummy; } ;
struct kfd_process {scalar_t__ pasid; int mutex; } ;
struct kfd_dev {TYPE_1__* dbgmgr; } ;
struct TYPE_3__ {scalar_t__ pasid; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,struct kfd_process*) ;
 struct kfd_dev* FUNC_2 (struct pci_dev*) ;
 int * FUNC_3 () ;
 struct kfd_process_device* FUNC_4 (struct kfd_dev*,struct kfd_process*) ;
 struct kfd_process* FUNC_5 (int) ;
 int FUNC_6 (struct kfd_process_device*) ;
 int FUNC_7 (struct kfd_process*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,int) ;

__attribute__((used)) static void FUNC_11(struct pci_dev *VAR_0, int VAR_1)
{
 struct kfd_dev *VAR_2 = FUNC_2(VAR_0);
 struct kfd_process *VAR_3;
 struct kfd_process_device *VAR_4;

 if (!VAR_2)
  return;






 VAR_3 = FUNC_5(VAR_1);
 if (!VAR_3)
  return;

 FUNC_10("Unbinding process %d from IOMMU\n", VAR_1);

 FUNC_8(FUNC_3());

 if (VAR_2->dbgmgr && VAR_2->dbgmgr->pasid == VAR_3->pasid) {
  if (!FUNC_1(VAR_2->dbgmgr, VAR_3)) {
   FUNC_0(VAR_2->dbgmgr);
   VAR_2->dbgmgr = ((void*)0);
  }
 }

 FUNC_9(FUNC_3());

 FUNC_8(&VAR_3->mutex);

 VAR_4 = FUNC_4(VAR_2, VAR_3);
 if (VAR_4)



  FUNC_6(VAR_4);

 FUNC_9(&VAR_3->mutex);

 FUNC_7(VAR_3);
}
