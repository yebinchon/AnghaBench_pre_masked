
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int d_parent; } ;


 int FUNC_0 (struct dentry*) ;
 struct inode* FUNC_1 (int ) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct inode*,struct dentry*) ;

void FUNC_8(struct dentry *VAR_0)
{
 struct inode *VAR_1;

 VAR_1 = FUNC_1(VAR_0->d_parent);
 FUNC_4(VAR_1);
 if (FUNC_6(VAR_0)) {
  FUNC_2(VAR_0);
  FUNC_7(VAR_1, VAR_0);
  FUNC_0(VAR_0);
  FUNC_3(VAR_0);
 }
 FUNC_5(VAR_1);
}
