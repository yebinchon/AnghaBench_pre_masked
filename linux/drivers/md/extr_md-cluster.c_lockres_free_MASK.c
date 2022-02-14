
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct dlm_lock_resource* sb_lvbptr; int sb_lkid; } ;
struct dlm_lock_resource {TYPE_1__ lksb; struct dlm_lock_resource* name; int sync_locking_done; int sync_locking; int ls; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,TYPE_1__*,struct dlm_lock_resource*) ;
 int FUNC_1 (struct dlm_lock_resource*) ;
 int FUNC_2 (char*,struct dlm_lock_resource*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct dlm_lock_resource *VAR_1)
{
 int VAR_2 = 0;

 if (!VAR_1)
  return;





 VAR_2 = FUNC_0(VAR_1->ls, VAR_1->lksb.sb_lkid, VAR_0,
  &VAR_1->lksb, VAR_1);
 if (FUNC_3(VAR_2 != 0))
  FUNC_2("failed to unlock %s return %d\n", VAR_1->name, VAR_2);
 else
  FUNC_4(VAR_1->sync_locking, VAR_1->sync_locking_done);

 FUNC_1(VAR_1->name);
 FUNC_1(VAR_1->lksb.sb_lvbptr);
 FUNC_1(VAR_1);
}
