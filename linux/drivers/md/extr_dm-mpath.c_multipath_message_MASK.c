
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multipath {int work_mutex; } ;
struct dm_target {int table; struct multipath* private; } ;
struct dm_dev {int dummy; } ;
typedef int action_fn ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct multipath*,struct dm_dev*,int ) ;
 int FUNC_2 (struct multipath*,char*,int) ;
 int FUNC_3 (struct dm_target*,char*,int ,struct dm_dev**) ;
 int FUNC_4 (struct dm_target*,struct dm_dev*) ;
 scalar_t__ FUNC_5 (struct dm_target*) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct multipath*,int,int) ;
 int VAR_3 ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (struct multipath*,char*) ;

__attribute__((used)) static int FUNC_12(struct dm_target *VAR_4, unsigned VAR_5, char **VAR_6,
        char *VAR_7, unsigned VAR_8)
{
 int VAR_9 = -VAR_1;
 struct dm_dev *VAR_10;
 struct multipath *VAR_11 = VAR_4->private;
 action_fn VAR_12;

 FUNC_7(&VAR_11->work_mutex);

 if (FUNC_5(VAR_4)) {
  VAR_9 = -VAR_0;
  goto out;
 }

 if (VAR_5 == 1) {
  if (!FUNC_10(VAR_6[0], "queue_if_no_path")) {
   VAR_9 = FUNC_9(VAR_11, 1, 0);
   goto out;
  } else if (!FUNC_10(VAR_6[0], "fail_if_no_path")) {
   VAR_9 = FUNC_9(VAR_11, 0, 0);
   goto out;
  }
 }

 if (VAR_5 != 2) {
  FUNC_0("Invalid multipath message arguments. Expected 2 arguments, got %d.", VAR_5);
  goto out;
 }

 if (!FUNC_10(VAR_6[0], "disable_group")) {
  VAR_9 = FUNC_2(VAR_11, VAR_6[1], 1);
  goto out;
 } else if (!FUNC_10(VAR_6[0], "enable_group")) {
  VAR_9 = FUNC_2(VAR_11, VAR_6[1], 0);
  goto out;
 } else if (!FUNC_10(VAR_6[0], "switch_group")) {
  VAR_9 = FUNC_11(VAR_11, VAR_6[1]);
  goto out;
 } else if (!FUNC_10(VAR_6[0], "reinstate_path"))
  VAR_12 = VAR_3;
 else if (!FUNC_10(VAR_6[0], "fail_path"))
  VAR_12 = VAR_2;
 else {
  FUNC_0("Unrecognised multipath message received: %s", VAR_6[0]);
  goto out;
 }

 VAR_9 = FUNC_3(VAR_4, VAR_6[1], FUNC_6(VAR_4->table), &VAR_10);
 if (VAR_9) {
  FUNC_0("message: error getting device %s",
         VAR_6[1]);
  goto out;
 }

 VAR_9 = FUNC_1(VAR_11, VAR_10, VAR_12);

 FUNC_4(VAR_4, VAR_10);

out:
 FUNC_8(&VAR_11->work_mutex);
 return VAR_9;
}
