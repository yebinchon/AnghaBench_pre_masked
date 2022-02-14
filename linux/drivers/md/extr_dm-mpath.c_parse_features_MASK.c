
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multipath {int queue_mode; int pg_init_delay_msecs; int pg_init_retries; int flags; struct dm_target* ti; } ;
struct dm_target {char* error; } ;
struct dm_arg_set {int dummy; } ;
struct dm_arg {int member_0; int member_1; char* member_2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dm_arg const*,struct dm_arg_set*,int *,char**) ;
 int FUNC_1 (struct dm_arg const*,struct dm_arg_set*,unsigned int*,char**) ;
 char* FUNC_2 (struct dm_arg_set*) ;
 int FUNC_3 (struct multipath*,int,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (char const*,char*) ;

__attribute__((used)) static int FUNC_6(struct dm_arg_set *VAR_4, struct multipath *VAR_5)
{
 int VAR_6;
 unsigned VAR_7;
 struct dm_target *VAR_8 = VAR_5->ti;
 const char *VAR_9;

 static const struct dm_arg VAR_10[] = {
  {0, 8, "invalid number of feature args"},
  {1, 50, "pg_init_retries must be between 1 and 50"},
  {0, 60000, "pg_init_delay_msecs must be between 0 and 60000"},
 };

 VAR_6 = FUNC_1(VAR_10, VAR_4, &VAR_7, &VAR_8->error);
 if (VAR_6)
  return -VAR_2;

 if (!VAR_7)
  return 0;

 do {
  VAR_9 = FUNC_2(VAR_4);
  VAR_7--;

  if (!FUNC_5(VAR_9, "queue_if_no_path")) {
   VAR_6 = FUNC_3(VAR_5, 1, 0);
   continue;
  }

  if (!FUNC_5(VAR_9, "retain_attached_hw_handler")) {
   FUNC_4(VAR_3, &VAR_5->flags);
   continue;
  }

  if (!FUNC_5(VAR_9, "pg_init_retries") &&
      (VAR_7 >= 1)) {
   VAR_6 = FUNC_0(VAR_10 + 1, VAR_4, &VAR_5->pg_init_retries, &VAR_8->error);
   VAR_7--;
   continue;
  }

  if (!FUNC_5(VAR_9, "pg_init_delay_msecs") &&
      (VAR_7 >= 1)) {
   VAR_6 = FUNC_0(VAR_10 + 2, VAR_4, &VAR_5->pg_init_delay_msecs, &VAR_8->error);
   VAR_7--;
   continue;
  }

  if (!FUNC_5(VAR_9, "queue_mode") &&
      (VAR_7 >= 1)) {
   const char *VAR_11 = FUNC_2(VAR_4);

   if (!FUNC_5(VAR_11, "bio"))
    VAR_5->queue_mode = VAR_0;
   else if (!FUNC_5(VAR_11, "rq") ||
     !FUNC_5(VAR_11, "mq"))
    VAR_5->queue_mode = VAR_1;
   else {
    VAR_8->error = "Unknown 'queue_mode' requested";
    VAR_6 = -VAR_2;
   }
   VAR_7--;
   continue;
  }

  VAR_8->error = "Unrecognised multipath feature request";
  VAR_6 = -VAR_2;
 } while (VAR_7 && !VAR_6);

 return VAR_6;
}
