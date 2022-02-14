
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int * f_op; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,void*,int*) ;
 int VAR_1 ;

int FUNC_1(struct file *VAR_2, unsigned int VAR_3,
    void *VAR_4, int *VAR_5)
{
 if (!VAR_2 || VAR_2->f_op != &VAR_1)
  return -VAR_0;

 return FUNC_0(VAR_3, VAR_4, VAR_5);
}
