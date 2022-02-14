
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct drm_printer {int dummy; } ;
struct drm_info_node {TYPE_1__* info_ent; } ;
struct debugfs_regset32 {int dummy; } ;
struct TYPE_2__ {struct debugfs_regset32* data; } ;


 int FUNC_0 (struct drm_printer*,struct debugfs_regset32*) ;
 struct drm_printer FUNC_1 (struct seq_file*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct drm_info_node *VAR_2 = (struct drm_info_node *)VAR_0->private;
 struct debugfs_regset32 *VAR_3 = VAR_2->info_ent->data;
 struct drm_printer VAR_4 = FUNC_1(VAR_0);

 FUNC_0(&VAR_4, VAR_3);

 return 0;
}
