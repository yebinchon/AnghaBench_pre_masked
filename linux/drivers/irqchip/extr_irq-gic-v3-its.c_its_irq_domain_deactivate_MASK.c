
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct its_device {int dummy; } ;
struct irq_domain {int dummy; } ;
struct irq_data {int dummy; } ;


 struct its_device* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct its_device*,int ) ;

__attribute__((used)) static void FUNC_3(struct irq_domain *VAR_0,
          struct irq_data *VAR_1)
{
 struct its_device *VAR_2 = FUNC_0(VAR_1);
 u32 VAR_3 = FUNC_1(VAR_1);


 FUNC_2(VAR_2, VAR_3);
}
