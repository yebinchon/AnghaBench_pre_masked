
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;
typedef int loff_t ;


 struct inode* FUNC_0 (struct file*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, loff_t VAR_2, loff_t VAR_3, int VAR_4)
{
 struct inode *VAR_5 = FUNC_0(VAR_1);
 int VAR_6;
 FUNC_1(VAR_5);
 VAR_6 = FUNC_3(VAR_0);
 FUNC_2(VAR_5);
 return VAR_6;
}
