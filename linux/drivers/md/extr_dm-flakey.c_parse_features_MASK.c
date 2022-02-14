
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flakey_c {scalar_t__ corrupt_bio_rw; int flags; int corrupt_bio_flags; int corrupt_bio_value; int corrupt_bio_byte; } ;
struct dm_target {char* error; } ;
struct dm_arg_set {int argc; } ;
struct dm_arg {int member_0; int member_1; char* member_2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

 scalar_t__ VAR_4 ;
 int FUNC_0 (struct dm_arg const*,struct dm_arg_set*,int *,char**) ;
 int FUNC_1 (struct dm_arg const*,struct dm_arg_set*,unsigned int*,char**) ;
 char* FUNC_2 (struct dm_arg_set*) ;
 int FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct dm_arg_set *VAR_5, struct flakey_c *VAR_6,
     struct dm_target *VAR_7)
{
 int VAR_8;
 unsigned VAR_9;
 const char *VAR_10;

 static const struct dm_arg VAR_11[] = {
  {0, 6, "Invalid number of feature args"},
  {1, 128, "Invalid corrupt bio byte"},
  {0, 255, "Invalid corrupt value to write into bio byte (0-255)"},
  {0, 128, "Invalid corrupt bio flags mask"},
 };


 if (!VAR_5->argc)
  return 0;

 VAR_8 = FUNC_1(VAR_11, VAR_5, &VAR_9, &VAR_7->error);
 if (VAR_8)
  return VAR_8;

 while (VAR_9) {
  VAR_10 = FUNC_2(VAR_5);
  VAR_9--;

  if (!VAR_10) {
   VAR_7->error = "Insufficient feature arguments";
   return -VAR_1;
  }




  if (!FUNC_3(VAR_10, "drop_writes")) {
   if (FUNC_4(VAR_0, &VAR_6->flags)) {
    VAR_7->error = "Feature drop_writes duplicated";
    return -VAR_1;
   } else if (FUNC_5(VAR_2, &VAR_6->flags)) {
    VAR_7->error = "Feature drop_writes conflicts with feature error_writes";
    return -VAR_1;
   }

   continue;
  }




  if (!FUNC_3(VAR_10, "error_writes")) {
   if (FUNC_4(VAR_2, &VAR_6->flags)) {
    VAR_7->error = "Feature error_writes duplicated";
    return -VAR_1;

   } else if (FUNC_5(VAR_0, &VAR_6->flags)) {
    VAR_7->error = "Feature error_writes conflicts with feature drop_writes";
    return -VAR_1;
   }

   continue;
  }




  if (!FUNC_3(VAR_10, "corrupt_bio_byte")) {
   if (!VAR_9) {
    VAR_7->error = "Feature corrupt_bio_byte requires parameters";
    return -VAR_1;
   }

   VAR_8 = FUNC_0(VAR_11 + 1, VAR_5, &VAR_6->corrupt_bio_byte, &VAR_7->error);
   if (VAR_8)
    return VAR_8;
   VAR_9--;




   VAR_10 = FUNC_2(VAR_5);
   if (!FUNC_3(VAR_10, "w"))
    VAR_6->corrupt_bio_rw = VAR_4;
   else if (!FUNC_3(VAR_10, "r"))
    VAR_6->corrupt_bio_rw = VAR_3;
   else {
    VAR_7->error = "Invalid corrupt bio direction (r or w)";
    return -VAR_1;
   }
   VAR_9--;




   VAR_8 = FUNC_0(VAR_11 + 2, VAR_5, &VAR_6->corrupt_bio_value, &VAR_7->error);
   if (VAR_8)
    return VAR_8;
   VAR_9--;




   VAR_8 = FUNC_0(VAR_11 + 3, VAR_5, &VAR_6->corrupt_bio_flags, &VAR_7->error);
   if (VAR_8)
    return VAR_8;
   VAR_9--;

   continue;
  }

  VAR_7->error = "Unrecognised flakey feature requested";
  return -VAR_1;
 }

 if (FUNC_5(VAR_0, &VAR_6->flags) && (VAR_6->corrupt_bio_rw == VAR_4)) {
  VAR_7->error = "drop_writes is incompatible with corrupt_bio_byte with the WRITE flag set";
  return -VAR_1;

 } else if (FUNC_5(VAR_2, &VAR_6->flags) && (VAR_6->corrupt_bio_rw == VAR_4)) {
  VAR_7->error = "error_writes is incompatible with corrupt_bio_byte with the WRITE flag set";
  return -VAR_1;
 }

 return 0;
}
