
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int irq_hw_number_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 int VAR_1 ;
 unsigned int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (char*,unsigned int) ;
 int* FUNC_3 (int *,int) ;
 int FUNC_4 (unsigned int,int ,char*,int*) ;

int FUNC_5(int VAR_2, irq_hw_number_t VAR_3)
{
 int *VAR_4 = FUNC_3(&VAR_1, VAR_2);
 unsigned int VAR_5 = FUNC_1(((void*)0), VAR_3);

 if (!VAR_5)
  FUNC_2("Cannot find virq for root domain and hwirq=%lu", VAR_3);


 if (!VAR_2) {
  int VAR_6;

  VAR_6 = FUNC_4(VAR_5, VAR_0, "IPI Interrupt", VAR_4);
  if (VAR_6)
   FUNC_2("Percpu IRQ request failed for %u\n", VAR_5);
 }

 FUNC_0(VAR_5, 0);

 return 0;
}
