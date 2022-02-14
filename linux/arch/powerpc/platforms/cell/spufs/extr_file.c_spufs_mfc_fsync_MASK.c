
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;
typedef int loff_t ;


 struct inode* FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*,int ,int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct file*,int *) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_0, loff_t VAR_1, loff_t VAR_2, int VAR_3)
{
 struct inode *VAR_4 = FUNC_0(VAR_0);
 int VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (!VAR_5) {
  FUNC_2(VAR_4);
  VAR_5 = FUNC_4(VAR_0, ((void*)0));
  FUNC_3(VAR_4);
 }
 return VAR_5;
}
