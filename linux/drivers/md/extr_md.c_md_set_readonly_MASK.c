
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {int ro; int open_mutex; int sysfs_state; int thread; int recovery; int gendisk; scalar_t__ pers; TYPE_1__* sync_thread; int openers; int sb_flags; int sb_wait; scalar_t__ external; } ;
struct block_device {int dummy; } ;
struct TYPE_2__ {int tsk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mddev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mddev*) ;
 int FUNC_5 (struct mddev*) ;
 int FUNC_6 (struct mddev*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int ) ;
 int VAR_7 ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct mddev *VAR_8, struct block_device *VAR_9)
{
 int VAR_10 = 0;
 int VAR_11 = 0;

 if (!FUNC_13(VAR_2, &VAR_8->recovery)) {
  VAR_11 = 1;
  FUNC_10(VAR_2, &VAR_8->recovery);
  FUNC_3(VAR_8->thread);
 }
 if (FUNC_13(VAR_5, &VAR_8->recovery))
  FUNC_10(VAR_3, &VAR_8->recovery);
 if (VAR_8->sync_thread)


  FUNC_15(VAR_8->sync_thread->tsk);

 if (VAR_8->external && FUNC_13(VAR_6, &VAR_8->sb_flags))
  return -VAR_0;
 FUNC_5(VAR_8);
 FUNC_14(VAR_7, !FUNC_13(VAR_5,
       &VAR_8->recovery));
 FUNC_14(VAR_8->sb_wait,
     !FUNC_13(VAR_6, &VAR_8->sb_flags));
 FUNC_4(VAR_8);

 FUNC_7(&VAR_8->open_mutex);
 if ((VAR_8->pers && FUNC_1(&VAR_8->openers) > !!VAR_9) ||
     VAR_8->sync_thread ||
     FUNC_13(VAR_5, &VAR_8->recovery)) {
  FUNC_9("md: %s still in use.\n",FUNC_6(VAR_8));
  if (VAR_11) {
   FUNC_2(VAR_2, &VAR_8->recovery);
   FUNC_10(VAR_4, &VAR_8->recovery);
   FUNC_3(VAR_8->thread);
  }
  VAR_10 = -VAR_0;
  goto out;
 }
 if (VAR_8->pers) {
  FUNC_0(VAR_8);

  VAR_10 = -VAR_1;
  if (VAR_8->ro==1)
   goto out;
  VAR_8->ro = 1;
  FUNC_11(VAR_8->gendisk, 1);
  FUNC_2(VAR_2, &VAR_8->recovery);
  FUNC_10(VAR_4, &VAR_8->recovery);
  FUNC_3(VAR_8->thread);
  FUNC_12(VAR_8->sysfs_state);
  VAR_10 = 0;
 }
out:
 FUNC_8(&VAR_8->open_mutex);
 return VAR_10;
}
