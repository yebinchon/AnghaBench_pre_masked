
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int features; } ;
struct rbd_device {long acquire_err; TYPE_3__* opts; int lock_dwork; int acquire_wait; int task_wq; TYPE_2__* spec; TYPE_1__ header; } ;
struct TYPE_6__ {int exclusive; int lock_timeout; int lock_on_read; } ;
struct TYPE_5__ {scalar_t__ snap_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct rbd_device*) ;
 int FUNC_5 (struct rbd_device*,char*,...) ;
 long FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(struct rbd_device *VAR_4)
{
 long VAR_5;

 if (!(VAR_4->header.features & VAR_3)) {
  if (!VAR_4->opts->exclusive && !VAR_4->opts->lock_on_read)
   return 0;

  FUNC_5(VAR_4, "exclusive-lock feature is not enabled");
  return -VAR_1;
 }

 if (VAR_4->spec->snap_id != VAR_0)
  return 0;

 FUNC_3(!FUNC_4(VAR_4));
 FUNC_2(VAR_4->task_wq, &VAR_4->lock_dwork, 0);
 VAR_5 = FUNC_6(&VAR_4->acquire_wait,
       FUNC_1(VAR_4->opts->lock_timeout));
 if (VAR_5 > 0) {
  VAR_5 = VAR_4->acquire_err;
 } else {
  FUNC_0(&VAR_4->lock_dwork);
  if (!VAR_5)
   VAR_5 = -VAR_2;
 }

 if (VAR_5) {
  FUNC_5(VAR_4, "failed to acquire exclusive lock: %ld", VAR_5);
  return VAR_5;
 }





 FUNC_3(!VAR_4->opts->exclusive || FUNC_4(VAR_4));
 return 0;
}
