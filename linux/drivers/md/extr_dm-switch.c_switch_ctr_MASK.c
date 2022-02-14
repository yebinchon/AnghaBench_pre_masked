
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_path {int dummy; } ;
struct switch_ctx {int dummy; } ;
struct dm_target {char* error; int num_discard_bios; } ;
struct dm_arg_set {unsigned int argc; char** argv; } ;
struct dm_arg {int member_0; int member_1; char* member_2; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct dm_target*,unsigned int) ;
 struct switch_ctx* FUNC_1 (struct dm_target*,unsigned int,unsigned int) ;
 int FUNC_2 (struct dm_arg const*,struct dm_arg_set*,unsigned int*,char**) ;
 int FUNC_3 (struct dm_arg const*,struct dm_arg_set*,unsigned int*,char**) ;
 int FUNC_4 (struct dm_target*,unsigned int) ;
 int FUNC_5 (struct switch_ctx*) ;
 int FUNC_6 (struct dm_arg_set*,struct dm_target*) ;
 int FUNC_7 (struct dm_target*) ;

__attribute__((used)) static int FUNC_8(struct dm_target *VAR_2, unsigned VAR_3, char **VAR_4)
{
 static const struct dm_arg VAR_5[] = {
  {1, (129 - sizeof(struct switch_ctx)) / sizeof(struct switch_path), "Invalid number of paths"},
  {1, 128, "Invalid region size"},
  {0, 0, "Invalid number of optional args"},
 };

 struct switch_ctx *VAR_6;
 struct dm_arg_set VAR_7;
 unsigned VAR_8, VAR_9, VAR_10;
 int VAR_11;

 VAR_7.argc = VAR_3;
 VAR_7.argv = VAR_4;

 VAR_11 = FUNC_2(VAR_5, &VAR_7, &VAR_8, &VAR_2->error);
 if (VAR_11)
  return -VAR_0;

 VAR_11 = FUNC_2(VAR_5 + 1, &VAR_7, &VAR_9, &VAR_2->error);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_3(VAR_5 + 2, &VAR_7, &VAR_10, &VAR_2->error);
 if (VAR_11)
  return VAR_11;


 if (VAR_7.argc != VAR_8 * 2) {
  VAR_2->error = "Incorrect number of path arguments";
  return -VAR_0;
 }

 VAR_6 = FUNC_1(VAR_2, VAR_8, VAR_9);
 if (!VAR_6) {
  VAR_2->error = "Cannot allocate redirection context";
  return -VAR_1;
 }

 VAR_11 = FUNC_4(VAR_2, VAR_9);
 if (VAR_11)
  goto error;

 while (VAR_7.argc) {
  VAR_11 = FUNC_6(&VAR_7, VAR_2);
  if (VAR_11)
   goto error;
 }

 VAR_11 = FUNC_0(VAR_2, VAR_8);
 if (VAR_11)
  goto error;

 FUNC_5(VAR_6);


 VAR_2->num_discard_bios = 1;

 return 0;

error:
 FUNC_7(VAR_2);

 return VAR_11;
}
