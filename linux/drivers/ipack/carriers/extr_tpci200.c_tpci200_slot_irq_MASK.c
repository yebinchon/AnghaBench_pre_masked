
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slot_irq {int arg; int (* handler ) (int ) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_1(struct slot_irq *VAR_1)
{
 irqreturn_t VAR_2;

 if (!VAR_1)
  return -VAR_0;
 VAR_2 = VAR_1->handler(VAR_1->arg);

 return VAR_2;
}
