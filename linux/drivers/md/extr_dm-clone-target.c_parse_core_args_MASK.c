
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {char* error; } ;
struct dm_arg_set {int argc; } ;
struct dm_arg {int max; char* error; int min; } ;
struct clone {unsigned int hydration_batch_size; unsigned int hydration_threshold; struct dm_target* ti; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dm_arg const*,struct dm_arg_set*,unsigned int*,char**) ;
 char* FUNC_1 (struct dm_arg_set*) ;
 scalar_t__ FUNC_2 (char*,int,unsigned int*) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(struct dm_arg_set *VAR_3, struct clone *VAR_4)
{
 int VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;
 const char *VAR_8;
 struct dm_target *VAR_9 = VAR_4->ti;

 const struct dm_arg VAR_10 = {
  .min = 0,
  .max = 4,
  .error = "Invalid number of core arguments"
 };


 VAR_4->hydration_batch_size = VAR_0;
 VAR_4->hydration_threshold = VAR_1;


 if (!VAR_3->argc)
  return 0;

 VAR_5 = FUNC_0(&VAR_10, VAR_3, &VAR_6, &VAR_9->error);
 if (VAR_5)
  return VAR_5;

 if (VAR_6 & 1) {
  VAR_9->error = "Number of core arguments must be even";
  return -VAR_2;
 }

 while (VAR_6) {
  VAR_8 = FUNC_1(VAR_3);
  VAR_6 -= 2;

  if (!FUNC_3(VAR_8, "hydration_threshold")) {
   if (FUNC_2(FUNC_1(VAR_3), 10, &VAR_7)) {
    VAR_9->error = "Invalid value for argument `hydration_threshold'";
    return -VAR_2;
   }
   VAR_4->hydration_threshold = VAR_7;
  } else if (!FUNC_3(VAR_8, "hydration_batch_size")) {
   if (FUNC_2(FUNC_1(VAR_3), 10, &VAR_7)) {
    VAR_9->error = "Invalid value for argument `hydration_batch_size'";
    return -VAR_2;
   }
   VAR_4->hydration_batch_size = VAR_7;
  } else {
   VAR_9->error = "Invalid core argument";
   return -VAR_2;
  }
 }

 return 0;
}
