
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq; } ;
struct octeon_i2c {int ara; TYPE_1__ alert_data; int adap; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (struct device_node*,int ) ;

__attribute__((used)) static int FUNC_2(struct octeon_i2c *VAR_2,
          struct device_node *VAR_3)
{
 if (!VAR_3)
  return -VAR_0;

 VAR_2->alert_data.irq = FUNC_1(VAR_3, 0);
 if (!VAR_2->alert_data.irq)
  return -VAR_0;

 VAR_2->ara = FUNC_0(&VAR_2->adap, &VAR_2->alert_data);
 if (!VAR_2->ara)
  return -VAR_1;
 return 0;
}
