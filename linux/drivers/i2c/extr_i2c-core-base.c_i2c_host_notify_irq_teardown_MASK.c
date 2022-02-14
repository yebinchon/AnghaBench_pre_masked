
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct i2c_adapter {struct irq_domain* host_notify_domain; } ;
typedef scalar_t__ irq_hw_number_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct irq_domain*) ;
 int FUNC_2 (struct irq_domain*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct i2c_adapter *VAR_1)
{
 struct irq_domain *VAR_2 = VAR_1->host_notify_domain;
 irq_hw_number_t VAR_3;

 if (!VAR_2)
  return;

 for (VAR_3 = 0 ; VAR_3 < VAR_0 ; VAR_3++)
  FUNC_0(FUNC_2(VAR_2, VAR_3));

 FUNC_1(VAR_2);
 VAR_1->host_notify_domain = ((void*)0);
}
