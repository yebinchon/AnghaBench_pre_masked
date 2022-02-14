
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_domain {int dummy; } ;
struct irq_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;
 struct irq_domain* FUNC_3 (struct irq_desc*) ;
 unsigned int FUNC_4 (struct irq_domain*,unsigned int) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct irq_desc *VAR_4)
{
 u32 VAR_5 = FUNC_1(VAR_1) &
        FUNC_1(VAR_0);
 unsigned VAR_6, VAR_7 = 0;

 if (VAR_5) {
  struct irq_domain *VAR_8 = FUNC_3(VAR_4);

  VAR_6 = FUNC_0(VAR_5);
  VAR_7 = FUNC_4(VAR_8, VAR_6);
 }

 if (VAR_7) {
  FUNC_2(VAR_7);
  if (VAR_6 == VAR_2)
   FUNC_1(VAR_3);
 } else {
  FUNC_5();
 }
}
