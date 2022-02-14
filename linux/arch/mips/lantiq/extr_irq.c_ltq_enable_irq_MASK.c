
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned long hwirq; } ;


 int FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct irq_data*) ;
 int VAR_3 ;
 int FUNC_3 (int,unsigned long,int ) ;
 int FUNC_4 (int,unsigned long,int,int ) ;
 int VAR_4 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int) ;

void FUNC_9(struct irq_data *VAR_5)
{
 unsigned long VAR_6 = VAR_5->hwirq - VAR_2;
 unsigned long VAR_7 = VAR_6 / VAR_0;
 unsigned long VAR_8;
 int VAR_9;

 VAR_6 %= VAR_0;

 VAR_9 = FUNC_1(FUNC_2(VAR_5));


 if (FUNC_8(VAR_9 >= VAR_4))
  VAR_9 = FUNC_7();

 FUNC_5(&VAR_3, VAR_8);

 FUNC_4(VAR_9, VAR_7, FUNC_3(VAR_9, VAR_7, VAR_1) | FUNC_0(VAR_6),
      VAR_1);

 FUNC_6(&VAR_3, VAR_8);
}
