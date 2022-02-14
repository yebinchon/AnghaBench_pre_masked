
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct file*,unsigned int,unsigned long) ;
 long FUNC_2 (struct file*,unsigned int,unsigned long) ;

long FUNC_3(struct file *VAR_1, unsigned int VAR_2, unsigned long VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_2);
 int VAR_5;

 if (VAR_4 < VAR_0)
  return FUNC_2(VAR_1, VAR_2, VAR_3);

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3);

 return VAR_5;
}
