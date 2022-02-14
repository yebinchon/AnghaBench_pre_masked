
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {scalar_t__ irq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct irq_data *VAR_4, unsigned int VAR_5)
{
 if (VAR_4->irq == VAR_1) {
  if (VAR_5)
   FUNC_1(FUNC_0(VAR_2) | VAR_3, VAR_2);
  else
   FUNC_1(FUNC_0(VAR_2) & ~VAR_3, VAR_2);
  return 0;
 }
 return -VAR_0;
}
