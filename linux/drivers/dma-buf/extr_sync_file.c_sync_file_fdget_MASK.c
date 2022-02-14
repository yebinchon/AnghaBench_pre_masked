
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sync_file {int dummy; } ;
struct file {struct sync_file* private_data; int * f_op; } ;


 struct file* FUNC_0 (int) ;
 int FUNC_1 (struct file*) ;
 int VAR_0 ;

__attribute__((used)) static struct sync_file *FUNC_2(int VAR_1)
{
 struct file *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_2)
  return ((void*)0);

 if (VAR_2->f_op != &VAR_0)
  goto err;

 return VAR_2->private_data;

err:
 FUNC_1(VAR_2);
 return ((void*)0);
}
