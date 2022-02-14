
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct debugfs_file* files; struct dentry* qm_d; } ;
struct hisi_qm {TYPE_1__ debug; } ;
struct dentry {int dummy; } ;
struct debugfs_file {int index; TYPE_1__* debug; int lock; } ;
typedef enum qm_debug_file { ____Placeholder_qm_debug_file } qm_debug_file ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (int ,int,struct dentry*,struct debugfs_file*,int *) ;
 int FUNC_2 (int *) ;
 int * VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct hisi_qm *VAR_3, enum qm_debug_file VAR_4)
{
 struct dentry *VAR_5 = VAR_3->debug.qm_d, *VAR_6;
 struct debugfs_file *VAR_7 = VAR_3->debug.files + VAR_4;

 VAR_6 = FUNC_1(VAR_1[VAR_4], 0600, VAR_5, VAR_7,
      &VAR_2);
 if (FUNC_0(VAR_6))
  return -VAR_0;

 VAR_7->index = VAR_4;
 FUNC_2(&VAR_7->lock);
 VAR_7->debug = &VAR_3->debug;

 return 0;
}
