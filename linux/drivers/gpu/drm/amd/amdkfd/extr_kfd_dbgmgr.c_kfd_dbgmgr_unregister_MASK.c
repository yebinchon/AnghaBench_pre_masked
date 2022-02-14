
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kfd_process {scalar_t__ pasid; } ;
struct kfd_dbgmgr {scalar_t__ pasid; TYPE_1__* dbgdev; } ;
struct TYPE_2__ {int (* dbgdev_unregister ) (TYPE_1__*) ;} ;


 long VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

long FUNC_2(struct kfd_dbgmgr *VAR_1, struct kfd_process *VAR_2)
{

 if (VAR_1->pasid != VAR_2->pasid) {
  FUNC_0("H/W debugger is not registered by calling pasid %d\n",
    VAR_2->pasid);
  return -VAR_0;
 }

 VAR_1->dbgdev->dbgdev_unregister(VAR_1->dbgdev);

 VAR_1->pasid = 0;

 return 0;
}
