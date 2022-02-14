
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_struct {int irqc; int irq_wait; } ;
struct file {struct pp_struct* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_2(struct file *VAR_2, poll_table *VAR_3)
{
 struct pp_struct *VAR_4 = VAR_2->private_data;
 __poll_t VAR_5 = 0;

 FUNC_1(VAR_2, &VAR_4->irq_wait, VAR_3);
 if (FUNC_0(&VAR_4->irqc))
  VAR_5 |= VAR_0 | VAR_1;

 return VAR_5;
}
