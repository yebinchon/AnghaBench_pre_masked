
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
struct file {struct apm_user* private_data; } ;
struct apm_user {int suspend_wait; int suspend_result; int suspends_pending; int suspends_read; int standbys_pending; int standbys_read; int writer; int suser; } ;




 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct apm_user*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct apm_user*) ;
 int FUNC_4 () ;
 int VAR_7 ;
 int FUNC_5 (int) ;
 int VAR_8 ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static long FUNC_7(struct file *VAR_9, u_int VAR_10, u_long VAR_11)
{
 struct apm_user *VAR_12;
 int VAR_13;

 VAR_12 = VAR_9->private_data;
 if (FUNC_0(VAR_12, "ioctl"))
  return -VAR_2;
 if (!VAR_12->suser || !VAR_12->writer)
  return -VAR_4;
 switch (VAR_10) {
 case 129:
  FUNC_1(&VAR_5);
  if (VAR_12->standbys_read > 0) {
   VAR_12->standbys_read--;
   VAR_12->standbys_pending--;
   VAR_7--;
  } else
   FUNC_3(VAR_0, VAR_12);
  if (VAR_7 <= 0)
   FUNC_4();
  FUNC_2(&VAR_5);
  break;
 case 128:
  FUNC_1(&VAR_5);
  if (VAR_12->suspends_read > 0) {
   VAR_12->suspends_read--;
   VAR_12->suspends_pending--;
   VAR_8--;
  } else
   FUNC_3(VAR_1, VAR_12);
  if (VAR_8 <= 0) {
   VAR_13 = FUNC_5(1);
   FUNC_2(&VAR_5);
  } else {
   VAR_12->suspend_wait = 1;
   FUNC_2(&VAR_5);
   FUNC_6(VAR_6,
     VAR_12->suspend_wait == 0);
   VAR_13 = VAR_12->suspend_result;
  }
  return VAR_13;
 default:
  return -VAR_3;
 }
 return 0;
}
