
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct spufs_tree_descr {int mode; int size; int ops; scalar_t__* name; } ;
struct spu_context {int dummy; } ;
struct dentry {int d_sb; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (struct dentry*,scalar_t__*) ;
 int FUNC_1 (int ,struct dentry*,int ,int,int ,struct spu_context*) ;

__attribute__((used)) static int FUNC_2(struct dentry *VAR_1,
  const struct spufs_tree_descr *VAR_2, umode_t VAR_3,
  struct spu_context *VAR_4)
{
 while (VAR_2->name && VAR_2->name[0]) {
  int VAR_5;
  struct dentry *VAR_6 = FUNC_0(VAR_1, VAR_2->name);
  if (!VAR_6)
   return -VAR_0;
  VAR_5 = FUNC_1(VAR_1->d_sb, VAR_6, VAR_2->ops,
     VAR_2->mode & VAR_3, VAR_2->size, VAR_4);
  if (VAR_5)
   return VAR_5;
  VAR_2++;
 }
 return 0;
}
