
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ras_fs_if {char* sysfs_name; char* debugfs_name; } ;
struct ras_common_if {char* name; int sub_block_index; int type; int block; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,struct ras_fs_if*,struct ras_common_if*) ;

__attribute__((used)) static int FUNC_1(void *VAR_3)
{
 int VAR_4;

 struct ras_fs_if VAR_5 = {
  .sysfs_name = "umc_err_count",
  .debugfs_name = "umc_err_inject",
 };
 struct ras_common_if VAR_6 = {
  .block = VAR_1,
  .type = VAR_2,
  .sub_block_index = 0,
  .name = "umc",
 };
 struct ras_fs_if VAR_7 = {
  .sysfs_name = "mmhub_err_count",
  .debugfs_name = "mmhub_err_inject",
 };
 struct ras_common_if VAR_8 = {
  .block = VAR_0,
  .type = VAR_2,
  .sub_block_index = 0,
  .name = "mmhub",
 };

 VAR_4 = FUNC_0(VAR_3,
   &VAR_5, &VAR_6);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_3,
   &VAR_7, &VAR_8);
 return VAR_4;
}
