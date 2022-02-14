
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct irq_data*,unsigned int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct irq_data *VAR_4, unsigned int VAR_5)
{
 if ((VAR_5 & VAR_1) != VAR_3) {
  FUNC_1("Only (both) edge triggered interrupts supported.\n");
  return -VAR_0;
 }

 FUNC_0(VAR_4, VAR_5);

 return VAR_2;
}
