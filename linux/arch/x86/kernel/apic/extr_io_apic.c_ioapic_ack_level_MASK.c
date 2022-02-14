
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int chip_data; } ;
struct irq_cfg {int vector; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct irq_data*) ;
 int FUNC_5 (struct irq_data*,int) ;
 int FUNC_6 (struct irq_cfg*) ;
 int VAR_1 ;
 struct irq_cfg* FUNC_7 (struct irq_data*) ;

__attribute__((used)) static void FUNC_8(struct irq_data *VAR_2)
{
 struct irq_cfg *VAR_3 = FUNC_7(VAR_2);
 unsigned long VAR_4;
 bool VAR_5;
 int VAR_6;

 FUNC_6(VAR_3);
 VAR_5 = FUNC_4(VAR_2);
 VAR_6 = VAR_3->vector;
 VAR_4 = FUNC_1(VAR_0 + ((VAR_6 & ~0x1f) >> 1));





 FUNC_0();
 if (!(VAR_4 & (1 << (VAR_6 & 0x1f)))) {
  FUNC_2(&VAR_1);
  FUNC_3(VAR_3->vector, VAR_2->chip_data);
 }

 FUNC_5(VAR_2, VAR_5);
}
