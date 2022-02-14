
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spu_context {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_3__ {struct dentry* dentry; } ;
struct file {TYPE_1__ f_path; } ;
struct dentry {struct dentry* d_parent; } ;
struct TYPE_4__ {struct spu_context* i_ctx; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int) ;
 struct inode* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*,struct file*) ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,struct dentry*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1, struct file *VAR_2)
{
 struct spu_context *VAR_3;
 struct inode *VAR_4;
 struct dentry *VAR_5;
 int VAR_6;

 VAR_5 = VAR_2->f_path.dentry;
 VAR_4 = FUNC_2(VAR_5->d_parent);
 VAR_3 = FUNC_0(FUNC_2(VAR_5))->i_ctx;

 FUNC_4(VAR_4, VAR_0);
 VAR_6 = FUNC_6(VAR_4, VAR_5);
 FUNC_5(VAR_4);
 FUNC_1(VAR_6);

 return FUNC_3(VAR_1, VAR_2);
}
