
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (struct irq_desc*) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static void FUNC_3(struct irq_desc *VAR_1)
{
 unsigned int VAR_2 = *(unsigned char *)VAR_0;

 if (VAR_2 < FUNC_0(0) || VAR_2 >= FUNC_0(16)) {
  FUNC_1(VAR_1);
  return;
 }

 FUNC_2(VAR_2);
}
