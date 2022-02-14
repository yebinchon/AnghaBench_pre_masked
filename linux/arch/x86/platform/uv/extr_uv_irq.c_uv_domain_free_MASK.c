
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_data {int chip_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (struct irq_domain*,unsigned int,unsigned int) ;
 struct irq_data* FUNC_3 (struct irq_domain*,unsigned int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct irq_domain *VAR_2, unsigned int VAR_3,
      unsigned int VAR_4)
{
 struct irq_data *VAR_5 = FUNC_3(VAR_2, VAR_3);

 FUNC_0(VAR_4 != 1);
 FUNC_4(VAR_5->chip_data);
 FUNC_1(VAR_3, VAR_0);
 FUNC_1(VAR_3, VAR_1);
 FUNC_2(VAR_2, VAR_3, VAR_4);
}
