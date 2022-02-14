
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hypfs_sb_info {int gid; int uid; } ;
struct fs_parse_result {int uint_32; } ;
struct fs_parameter {int dummy; } ;
struct fs_context {struct hypfs_sb_info* s_fs_info; } ;
typedef int kuid_t ;
typedef int kgid_t ;




 int FUNC_0 () ;
 int FUNC_1 (struct fs_context*,int *,struct fs_parameter*,struct fs_parse_result*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct fs_context*,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct fs_context *VAR_1, struct fs_parameter *VAR_2)
{
 struct hypfs_sb_info *VAR_3 = VAR_1->s_fs_info;
 struct fs_parse_result VAR_4;
 kuid_t VAR_5;
 kgid_t VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_1, &VAR_0, VAR_2, &VAR_4);
 if (VAR_7 < 0)
  return VAR_7;

 switch (VAR_7) {
 case 128:
  VAR_5 = FUNC_5(FUNC_0(), VAR_4.uint_32);
  if (!FUNC_6(VAR_5))
   return FUNC_3(VAR_1, "Unknown uid");
  VAR_3->uid = VAR_5;
  break;
 case 129:
  VAR_6 = FUNC_4(FUNC_0(), VAR_4.uint_32);
  if (!FUNC_2(VAR_6))
   return FUNC_3(VAR_1, "Unknown gid");
  VAR_3->gid = VAR_6;
  break;
 }
 return 0;
}
