
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {scalar_t__ chip_data; } ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct irq_data*) ;
 int VAR_0 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct irq_data *VAR_1)
{
 unsigned long VAR_2, VAR_3, VAR_4;
 int VAR_5;

 VAR_2 = (unsigned long)VAR_1->chip_data;
 VAR_5 = FUNC_3(FUNC_4(VAR_1));
 FUNC_5(&VAR_0, VAR_4);
 VAR_3 = FUNC_0(FUNC_2(VAR_5));
 FUNC_1(FUNC_2(VAR_5), (VAR_3 & ~VAR_2));
 FUNC_6(&VAR_0, VAR_4);
}
