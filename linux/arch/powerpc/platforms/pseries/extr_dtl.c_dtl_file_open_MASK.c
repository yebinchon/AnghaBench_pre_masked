
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {struct dtl* i_private; } ;
struct file {struct dtl* private_data; } ;
struct dtl {int dummy; } ;


 int FUNC_0 (struct dtl*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 struct dtl *VAR_2 = VAR_0->i_private;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_1->private_data = VAR_2;
 return 0;
}
