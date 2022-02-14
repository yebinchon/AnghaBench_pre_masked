
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;

int FUNC_1(struct irq_data *VAR_3, unsigned int VAR_4)
{
 unsigned long VAR_5 = 1 << VAR_3->hwirq;

 if (!(VAR_1 & VAR_5))
  return -VAR_0;

 FUNC_0("wake %s for hwirq %lu\n",
  VAR_4 ? "enabled" : "disabled", VAR_3->hwirq);

 if (!VAR_4)
  VAR_2 |= VAR_5;
 else
  VAR_2 &= ~VAR_5;

 return 0;
}
