
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {scalar_t__ chip_data; } ;


 int FUNC_0 (int ,unsigned long) ;
 unsigned long VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct irq_data *VAR_2)
{
 unsigned long VAR_3 = (unsigned long)VAR_2->chip_data;

 if (VAR_3 & VAR_0)
  FUNC_0(VAR_1, VAR_3 & ~VAR_0);
}
