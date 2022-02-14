
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spufs_sb_info {int debug; } ;
struct spufs_fs_context {int mode; int gid; int uid; } ;
struct fs_parse_result {int uint_32; } ;
struct fs_parameter {int dummy; } ;
struct fs_context {struct spufs_sb_info* s_fs_info; struct spufs_fs_context* fs_private; } ;
typedef int kuid_t ;
typedef int kgid_t ;






 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct fs_context*,int *,struct fs_parameter*,struct fs_parse_result*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct fs_context*,char*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct fs_context *VAR_2, struct fs_parameter *VAR_3)
{
 struct spufs_fs_context *VAR_4 = VAR_2->fs_private;
 struct spufs_sb_info *VAR_5 = VAR_2->s_fs_info;
 struct fs_parse_result VAR_6;
 kuid_t VAR_7;
 kgid_t VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_2, &VAR_1, VAR_3, &VAR_6);
 if (VAR_9 < 0)
  return VAR_9;

 switch (VAR_9) {
 case 128:
  VAR_7 = FUNC_5(FUNC_0(), VAR_6.uint_32);
  if (!FUNC_6(VAR_7))
   return FUNC_3(VAR_2, "Unknown uid");
  VAR_4->uid = VAR_7;
  break;
 case 130:
  VAR_8 = FUNC_4(FUNC_0(), VAR_6.uint_32);
  if (!FUNC_2(VAR_8))
   return FUNC_3(VAR_2, "Unknown gid");
  VAR_4->gid = VAR_8;
  break;
 case 129:
  VAR_4->mode = VAR_6.uint_32 & VAR_0;
  break;
 case 131:
  VAR_5->debug = 1;
  break;
 }

 return 0;
}
