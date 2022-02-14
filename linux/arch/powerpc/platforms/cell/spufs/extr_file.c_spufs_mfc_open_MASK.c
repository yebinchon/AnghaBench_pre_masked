
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spufs_inode_info {int i_openers; struct spu_context* i_ctx; } ;
struct spu_context {scalar_t__ owner; int mapping_lock; int mfc; } ;
struct inode {int i_mapping; int i_count; } ;
struct file {struct spu_context* private_data; } ;
struct TYPE_2__ {scalar_t__ mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct spufs_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_3, struct file *VAR_4)
{
 struct spufs_inode_info *VAR_5 = FUNC_0(VAR_3);
 struct spu_context *VAR_6 = VAR_5->i_ctx;


 if (VAR_6->owner != VAR_2->mm)
  return -VAR_1;

 if (FUNC_1(&VAR_3->i_count) != 1)
  return -VAR_0;

 FUNC_2(&VAR_6->mapping_lock);
 VAR_4->private_data = VAR_6;
 if (!VAR_5->i_openers++)
  VAR_6->mfc = VAR_3->i_mapping;
 FUNC_3(&VAR_6->mapping_lock);
 return FUNC_4(VAR_3, VAR_4);
}
