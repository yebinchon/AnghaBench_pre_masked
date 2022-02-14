
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kfd_dbgmgr {scalar_t__ pasid; TYPE_2__* dbgdev; } ;
struct dbg_address_watch_info {TYPE_1__* process; } ;
struct TYPE_4__ {scalar_t__ (* dbgdev_address_watch ) (TYPE_2__*,struct dbg_address_watch_info*) ;} ;
struct TYPE_3__ {scalar_t__ pasid; } ;


 long VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*,struct dbg_address_watch_info*) ;

long FUNC_2(struct kfd_dbgmgr *VAR_1,
    struct dbg_address_watch_info *VAR_2)
{

 if (VAR_1->pasid != VAR_2->process->pasid) {
  FUNC_0("H/W debugger support was not registered for requester pasid %d\n",
    VAR_2->process->pasid);
  return -VAR_0;
 }

 return (long) VAR_1->dbgdev->dbgdev_address_watch(VAR_1->dbgdev,
       VAR_2);
}
