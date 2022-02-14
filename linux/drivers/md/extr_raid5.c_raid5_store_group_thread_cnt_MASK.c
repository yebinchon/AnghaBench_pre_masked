
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5worker_group {struct r5worker_group* workers; } ;
struct r5conf {unsigned int worker_cnt_per_group; int group_cnt; int device_lock; struct r5worker_group* worker_groups; } ;
struct mddev {struct r5conf* private; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct r5conf*,unsigned int,int*,int*,struct r5worker_group**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct r5worker_group*) ;
 scalar_t__ FUNC_3 (char const*,int,unsigned int*) ;
 int FUNC_4 (struct mddev*) ;
 int FUNC_5 (struct mddev*) ;
 int FUNC_6 (struct mddev*) ;
 int FUNC_7 (struct mddev*) ;
 int VAR_3 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static ssize_t
FUNC_10(struct mddev *VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct r5conf *VAR_7;
 unsigned int VAR_8;
 int VAR_9;
 struct r5worker_group *VAR_10, *VAR_11;
 int VAR_12, VAR_13;

 if (VAR_6 >= VAR_2)
  return -VAR_0;
 if (FUNC_3(VAR_5, 10, &VAR_8))
  return -VAR_0;

 if (VAR_8 > 8192)
  return -VAR_0;

 VAR_9 = FUNC_4(VAR_4);
 if (VAR_9)
  return VAR_9;
 VAR_7 = VAR_4->private;
 if (!VAR_7)
  VAR_9 = -VAR_1;
 else if (VAR_8 != VAR_7->worker_cnt_per_group) {
  FUNC_6(VAR_4);

  VAR_11 = VAR_7->worker_groups;
  if (VAR_11)
   FUNC_1(VAR_3);

  VAR_9 = FUNC_0(VAR_7, VAR_8,
       &VAR_12, &VAR_13,
       &VAR_10);
  if (!VAR_9) {
   FUNC_8(&VAR_7->device_lock);
   VAR_7->group_cnt = VAR_12;
   VAR_7->worker_cnt_per_group = VAR_13;
   VAR_7->worker_groups = VAR_10;
   FUNC_9(&VAR_7->device_lock);

   if (VAR_11)
    FUNC_2(VAR_11[0].workers);
   FUNC_2(VAR_11);
  }
  FUNC_5(VAR_4);
 }
 FUNC_7(VAR_4);

 return VAR_9 ?: VAR_6;
}
