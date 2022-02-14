
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vm; } ;
struct its_device {TYPE_1__ event_map; } ;
struct its_cmd_info {scalar_t__ cmd_type; int config; } ;
struct irq_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct its_device* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_data*,int) ;
 int FUNC_3 (struct irq_data*,int,int) ;
 int FUNC_4 (struct irq_data*,int,int) ;

__attribute__((used)) static int FUNC_5(struct irq_data *VAR_3, struct its_cmd_info *VAR_4)
{
 struct its_device *VAR_5 = FUNC_0(VAR_3);

 if (!VAR_5->event_map.vm || !FUNC_1(VAR_3))
  return -VAR_0;

 if (VAR_4->cmd_type == VAR_2)
  FUNC_3(VAR_3, 0xff, VAR_4->config);
 else
  FUNC_4(VAR_3, 0xff, VAR_4->config);
 FUNC_2(VAR_3, !!(VAR_4->config & VAR_1));

 return 0;
}
