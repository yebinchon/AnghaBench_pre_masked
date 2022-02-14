
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sb_status; } ;
struct dlm_lock_resource {int sync_locking_done; int mode; TYPE_1__ lksb; int sync_locking; int bast; int name; int flags; int ls; } ;


 int FUNC_0 (int ,int,TYPE_1__*,int ,int ,int ,int ,int ,struct dlm_lock_resource*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct dlm_lock_resource *VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 VAR_3 = FUNC_0(VAR_1->ls, VAR_2, &VAR_1->lksb,
   VAR_1->flags, VAR_1->name, FUNC_1(VAR_1->name),
   0, VAR_0, VAR_1, VAR_1->bast);
 if (VAR_3)
  return VAR_3;
 FUNC_2(VAR_1->sync_locking, VAR_1->sync_locking_done);
 VAR_1->sync_locking_done = 0;
 if (VAR_1->lksb.sb_status == 0)
  VAR_1->mode = VAR_2;
 return VAR_1->lksb.sb_status;
}
