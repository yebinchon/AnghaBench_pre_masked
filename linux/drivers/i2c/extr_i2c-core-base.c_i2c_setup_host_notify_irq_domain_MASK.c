
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_domain {int dummy; } ;
struct TYPE_2__ {int fwnode; } ;
struct i2c_adapter {struct irq_domain* host_notify_domain; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_adapter*,int ) ;
 int VAR_3 ;
 struct irq_domain* FUNC_1 (int ,int ,int *,struct i2c_adapter*) ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_4)
{
 struct irq_domain *VAR_5;

 if (!FUNC_0(VAR_4, VAR_2))
  return 0;

 VAR_5 = FUNC_1(VAR_4->dev.fwnode,
       VAR_1,
       &VAR_3, VAR_4);
 if (!VAR_5)
  return -VAR_0;

 VAR_4->host_notify_domain = VAR_5;

 return 0;
}
