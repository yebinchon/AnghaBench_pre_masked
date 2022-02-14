
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct spu_gang {int dummy; } ;
struct inode {int i_mode; int * i_fop; int * i_op; int i_gid; int i_sb; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {struct spu_gang* i_gang; int * i_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct spu_gang* FUNC_1 () ;
 struct inode* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct inode* FUNC_6 (int ,int) ;

__attribute__((used)) static int
FUNC_7(struct inode *VAR_6, struct dentry *VAR_7, umode_t VAR_8)
{
 int VAR_9;
 struct inode *VAR_10;
 struct spu_gang *VAR_11;

 VAR_9 = -VAR_1;
 VAR_10 = FUNC_6(VAR_6->i_sb, VAR_8 | VAR_2);
 if (!VAR_10)
  goto out;

 VAR_9 = 0;
 if (VAR_6->i_mode & VAR_3) {
  VAR_10->i_gid = VAR_6->i_gid;
  VAR_10->i_mode &= VAR_3;
 }
 VAR_11 = FUNC_1();
 FUNC_0(VAR_10)->i_ctx = ((void*)0);
 FUNC_0(VAR_10)->i_gang = VAR_11;
 if (!VAR_11) {
  VAR_9 = -VAR_0;
  goto out_iput;
 }

 VAR_10->i_op = &VAR_4;
 VAR_10->i_fop = &VAR_5;

 FUNC_3(VAR_7, VAR_10);
 FUNC_4(VAR_6);
 FUNC_4(FUNC_2(VAR_7));
 return VAR_9;

out_iput:
 FUNC_5(VAR_10);
out:
 return VAR_9;
}
