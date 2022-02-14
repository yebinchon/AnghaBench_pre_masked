
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct irq_domain {int dummy; } ;
struct irq_desc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 struct irq_domain* FUNC_2 (struct irq_desc*) ;
 int FUNC_3 (struct irq_domain*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct irq_desc *VAR_1)
{
 u32 VAR_2 = FUNC_4(VAR_0);

 if (VAR_2) {
  struct irq_domain *VAR_3 = FUNC_2(VAR_1);
  FUNC_1(FUNC_3(VAR_3, FUNC_0(VAR_2)));
 } else {
  FUNC_5();
 }
}
