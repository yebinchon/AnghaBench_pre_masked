
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kfd_dev {TYPE_1__* dqm; int init_complete; } ;
struct kfd_dbgmgr {struct kfd_dbgmgr* dbgdev; struct kfd_dev* dev; scalar_t__ pasid; } ;
typedef enum DBGDEV_TYPE { ____Placeholder_DBGDEV_TYPE } DBGDEV_TYPE ;
struct TYPE_2__ {scalar_t__ sched_policy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 void* FUNC_1 (struct kfd_dbgmgr*) ;
 int FUNC_2 (struct kfd_dbgmgr*,struct kfd_dev*,int) ;
 int FUNC_3 (struct kfd_dbgmgr*) ;
 int FUNC_4 (char*) ;

bool FUNC_5(struct kfd_dbgmgr **VAR_3, struct kfd_dev *VAR_4)
{
 enum DBGDEV_TYPE VAR_5 = VAR_0;
 struct kfd_dbgmgr *VAR_6;

 if (FUNC_0(!VAR_4->init_complete))
  return 0;

 VAR_6 = FUNC_1(VAR_6);
 if (!VAR_6) {
  FUNC_4("Failed to allocate dbgmgr instance\n");
  return 0;
 }

 VAR_6->pasid = 0;
 VAR_6->dev = VAR_4;
 VAR_6->dbgdev = FUNC_1(VAR_6->dbgdev);
 if (!VAR_6->dbgdev) {
  FUNC_4("Failed to allocate dbgdev instance\n");
  FUNC_3(VAR_6);
  return 0;
 }


 if (VAR_4->dqm->sched_policy == VAR_2)
  VAR_5 = VAR_1;

 FUNC_2(VAR_6->dbgdev, VAR_4, VAR_5);
 *VAR_3 = VAR_6;

 return 1;
}
