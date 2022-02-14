
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int (* i_private ) (struct seq_file*,void*) ;} ;
struct file {int dummy; } ;


 int FUNC_0 (struct file*,int (*) (struct seq_file*,void*),int *) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 int (*VAR_2)(struct seq_file *, void *) = VAR_0->i_private;

 return FUNC_0(VAR_1, VAR_2, ((void*)0));
}
