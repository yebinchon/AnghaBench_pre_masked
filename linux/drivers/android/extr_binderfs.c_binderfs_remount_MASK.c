
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {struct binderfs_info* s_fs_info; } ;
struct TYPE_2__ {int stats_mode; } ;
struct binderfs_info {TYPE_1__ mount_opts; } ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct super_block *VAR_1, int *VAR_2, char *VAR_3)
{
 int VAR_4, VAR_5;
 struct binderfs_info *VAR_6 = VAR_1->s_fs_info;

 VAR_4 = VAR_6->mount_opts.stats_mode;
 VAR_5 = FUNC_0(VAR_3, &VAR_6->mount_opts);
 if (VAR_5)
  return VAR_5;

 if (VAR_4 != VAR_6->mount_opts.stats_mode) {
  FUNC_1("Binderfs stats mode cannot be changed during a remount\n");
  VAR_6->mount_opts.stats_mode = VAR_4;
  return -VAR_0;
 }

 return 0;
}
