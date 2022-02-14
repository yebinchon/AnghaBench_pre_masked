
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {struct irq_chip* host_data; } ;
struct irq_chip {int dummy; } ;
typedef scalar_t__ irq_hw_number_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,struct irq_chip*,int ,char*) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct irq_domain*,unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct irq_domain *VAR_3, unsigned int VAR_4,
  irq_hw_number_t VAR_5)
{
 if (VAR_5 < VAR_0) {
  struct irq_chip *VAR_6 = VAR_3->host_data;
  FUNC_1(VAR_4, VAR_6,
    VAR_2, "ipi");
  FUNC_2(VAR_4, VAR_1);
  return 0;
 }
 FUNC_4(FUNC_0(FUNC_3(VAR_4)));
 return FUNC_5(VAR_3, VAR_4, VAR_5);
}
