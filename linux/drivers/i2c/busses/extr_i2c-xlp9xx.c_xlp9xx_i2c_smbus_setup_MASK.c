
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq; } ;
struct xlp9xx_i2c_dev {int ara; TYPE_1__ alert_data; int adapter; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct xlp9xx_i2c_dev *VAR_2,
      struct platform_device *VAR_3)
{
 if (!VAR_2->alert_data.irq)
  return -VAR_0;

 VAR_2->ara = FUNC_0(&VAR_2->adapter, &VAR_2->alert_data);
 if (!VAR_2->ara)
  return -VAR_1;

 return 0;
}
