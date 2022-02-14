
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_3 (unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_4 (struct irq_data*,unsigned int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 unsigned int FUNC_7 (int ) ;

int FUNC_8(struct irq_data *VAR_6, unsigned int VAR_7)
{
 unsigned int VAR_8 = FUNC_7(VAR_6->irq);
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned long VAR_14;

 if (VAR_7 == VAR_2)
  VAR_7 = VAR_1;

 FUNC_4(VAR_6, VAR_7);

 VAR_9 = FUNC_1(VAR_7);

 FUNC_5(&VAR_5, VAR_14);
 FUNC_2(VAR_8, &VAR_10, &VAR_12, &VAR_13);
 VAR_11 = VAR_10 & ~(FUNC_0(VAR_3) |
   FUNC_0(VAR_4));
 VAR_11 |= VAR_9;







 VAR_12 = 8;

 FUNC_3(VAR_8, VAR_9, VAR_12, VAR_13);

 FUNC_6(&VAR_5, VAR_14);
 return VAR_0;
}
