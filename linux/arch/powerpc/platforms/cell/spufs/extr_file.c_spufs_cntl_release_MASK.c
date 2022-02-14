
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spufs_inode_info {int i_openers; struct spu_context* i_ctx; } ;
struct spu_context {int mapping_lock; int * cntl; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 struct spufs_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*,struct file*) ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_0, struct file *VAR_1)
{
 struct spufs_inode_info *VAR_2 = FUNC_0(VAR_0);
 struct spu_context *VAR_3 = VAR_2->i_ctx;

 FUNC_3(VAR_0, VAR_1);

 FUNC_1(&VAR_3->mapping_lock);
 if (!--VAR_2->i_openers)
  VAR_3->cntl = ((void*)0);
 FUNC_2(&VAR_3->mapping_lock);
 return 0;
}
