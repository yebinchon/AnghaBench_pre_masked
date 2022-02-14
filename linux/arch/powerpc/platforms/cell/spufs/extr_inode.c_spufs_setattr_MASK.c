
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_size; } ;
struct iattr {int ia_valid; scalar_t__ ia_size; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,struct iattr*) ;

__attribute__((used)) static int
FUNC_3(struct dentry *VAR_2, struct iattr *VAR_3)
{
 struct inode *VAR_4 = FUNC_0(VAR_2);

 if ((VAR_3->ia_valid & VAR_0) &&
     (VAR_3->ia_size != VAR_4->i_size))
  return -VAR_1;
 FUNC_2(VAR_4, VAR_3);
 FUNC_1(VAR_4);
 return 0;
}
