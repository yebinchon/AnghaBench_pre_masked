
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mddev {int flags; } ;
struct TYPE_3__ {scalar_t__ sb_status; int sb_lkid; } ;
struct dlm_lock_resource {int sync_locking_done; int mode; TYPE_1__ lksb; int name; int ls; int sync_locking; int bast; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,TYPE_1__*,int ,int ,int ,int ,int ,struct dlm_lock_resource*,int ) ;
 int FUNC_1 (int ,int ,int ,TYPE_1__*,struct dlm_lock_resource*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int FUNC_8(struct dlm_lock_resource *VAR_4, int VAR_5,
           struct mddev *VAR_6)
{
 int VAR_7 = 0;

 VAR_7 = FUNC_0(VAR_4->ls, VAR_5, &VAR_4->lksb,
   VAR_4->flags, VAR_4->name, FUNC_4(VAR_4->name),
   0, VAR_3, VAR_4, VAR_4->bast);
 if (VAR_7)
  return VAR_7;

 FUNC_7(VAR_4->sync_locking, VAR_4->sync_locking_done
          || FUNC_2()
          || FUNC_5(VAR_2, &VAR_6->flags));
 if (!VAR_4->sync_locking_done) {





  VAR_7 = FUNC_1(VAR_4->ls, VAR_4->lksb.sb_lkid, VAR_0,
   &VAR_4->lksb, VAR_4);
  VAR_4->sync_locking_done = 0;
  if (FUNC_6(VAR_7 != 0))
   FUNC_3("failed to cancel previous lock request "
     "%s return %d\n", VAR_4->name, VAR_7);
  return -VAR_1;
 } else
  VAR_4->sync_locking_done = 0;
 if (VAR_4->lksb.sb_status == 0)
  VAR_4->mode = VAR_5;
 return VAR_4->lksb.sb_status;
}
