
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_2, struct file *VAR_3)
{
 int VAR_4, *VAR_5;

 if (VAR_1)
  return -VAR_0;

 VAR_5 = (int *)&VAR_3->private_data;

 VAR_4 = FUNC_0(VAR_5);
 if (VAR_4)
  return VAR_4;

 return FUNC_1(VAR_2, VAR_3);
}
