
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {char* error; } ;
struct dm_arg_set {int argc; } ;
struct dm_arg {int max; char* error; int min; } ;
struct clone {int flags; struct dm_target* ti; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct dm_arg const*,struct dm_arg_set*,unsigned int*,char**) ;
 char* FUNC_2 (struct dm_arg_set*) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(struct dm_arg_set *VAR_3, struct clone *VAR_4)
{
 int VAR_5;
 unsigned int VAR_6;
 const char *VAR_7;
 struct dm_target *VAR_8 = VAR_4->ti;

 const struct dm_arg VAR_9 = {
  .min = 0,
  .max = 2,
  .error = "Invalid number of feature arguments"
 };


 if (!VAR_3->argc)
  return 0;

 VAR_5 = FUNC_1(&VAR_9, VAR_3, &VAR_6, &VAR_8->error);
 if (VAR_5)
  return VAR_5;

 while (VAR_6) {
  VAR_7 = FUNC_2(VAR_3);
  VAR_6--;

  if (!FUNC_3(VAR_7, "no_hydration")) {
   FUNC_0(VAR_1, &VAR_4->flags);
  } else if (!FUNC_3(VAR_7, "no_discard_passdown")) {
   FUNC_0(VAR_0, &VAR_4->flags);
  } else {
   VAR_8->error = "Invalid feature argument";
   return -VAR_2;
  }
 }

 return 0;
}
