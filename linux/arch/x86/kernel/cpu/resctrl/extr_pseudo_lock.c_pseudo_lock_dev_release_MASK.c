
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdtgroup {int waitcount; } ;
struct inode {int dummy; } ;
struct file {struct rdtgroup* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_2, struct file *VAR_3)
{
 struct rdtgroup *VAR_4;

 FUNC_2(&VAR_1);
 VAR_4 = VAR_3->private_data;
 FUNC_0(!VAR_4);
 if (!VAR_4) {
  FUNC_3(&VAR_1);
  return -VAR_0;
 }
 VAR_3->private_data = ((void*)0);
 FUNC_1(&VAR_4->waitcount);
 FUNC_3(&VAR_1);
 return 0;
}
