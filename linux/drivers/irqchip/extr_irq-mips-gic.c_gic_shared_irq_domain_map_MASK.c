
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_data {int dummy; } ;
typedef int irq_hw_number_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct irq_data*,int ) ;
 struct irq_data* FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int ) ;

__attribute__((used)) static int FUNC_10(struct irq_domain *VAR_3, unsigned int VAR_4,
         irq_hw_number_t VAR_5, unsigned int VAR_6)
{
 int VAR_7 = FUNC_1(VAR_5);
 struct irq_data *VAR_8;
 unsigned long VAR_9;

 VAR_8 = FUNC_4(VAR_4);

 FUNC_6(&VAR_2, VAR_9);
 FUNC_8(VAR_7, VAR_0 | VAR_1);
 FUNC_9(VAR_7, FUNC_0(FUNC_5(VAR_6)));
 FUNC_3(VAR_8, FUNC_2(VAR_6));
 FUNC_7(&VAR_2, VAR_9);

 return 0;
}
