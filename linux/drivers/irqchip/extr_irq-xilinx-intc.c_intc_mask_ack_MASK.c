
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_2)
{
 unsigned long VAR_3 = 1 << VAR_2->hwirq;

 FUNC_0("irq-xilinx: disable_and_ack: %ld\n", VAR_2->hwirq);
 FUNC_1(VAR_0, VAR_3);
 FUNC_1(VAR_1, VAR_3);
}
