
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_handler_data {unsigned long imap; unsigned long iclr; } ;
struct irq_data {int irq; } ;
struct cpumask {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned int VAR_5 ;
 unsigned long FUNC_0 (int ,struct cpumask const*) ;
 struct irq_handler_data* FUNC_1 (struct irq_data*) ;
 scalar_t__ FUNC_2 (struct irq_handler_data*) ;
 unsigned int FUNC_3 (unsigned long,unsigned long) ;
 unsigned long FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct irq_data *VAR_6,
          const struct cpumask *VAR_7, bool VAR_8)
{
 struct irq_handler_data *VAR_9;

 VAR_9 = FUNC_1(VAR_6);
 if (FUNC_2(VAR_9)) {
  unsigned long VAR_10, VAR_11, VAR_12;
  unsigned int VAR_13;

  VAR_10 = FUNC_0(VAR_6->irq, VAR_7);
  VAR_11 = VAR_9->imap;

  VAR_13 = FUNC_3(VAR_11, VAR_10);

  VAR_12 = FUNC_4(VAR_11);
  VAR_12 &= ~(VAR_4 | VAR_3 |
    VAR_1 | VAR_2);
  VAR_12 |= VAR_13 | VAR_5;
  FUNC_5(VAR_12, VAR_11);
  FUNC_5(VAR_0, VAR_9->iclr);
 }

 return 0;
}
