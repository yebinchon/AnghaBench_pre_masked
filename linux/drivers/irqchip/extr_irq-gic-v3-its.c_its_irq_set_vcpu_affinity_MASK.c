
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct its_device {TYPE_1__* its; } ;
struct its_cmd_info {int cmd_type; } ;
struct irq_data {int dummy; } ;
struct TYPE_2__ {int is_v4; } ;


 int VAR_0 ;




 struct its_device* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct irq_data*,struct its_cmd_info*) ;
 int FUNC_2 (struct irq_data*,struct its_cmd_info*) ;
 int FUNC_3 (struct irq_data*,struct its_cmd_info*) ;
 int FUNC_4 (struct irq_data*) ;

__attribute__((used)) static int FUNC_5(struct irq_data *VAR_1, void *VAR_2)
{
 struct its_device *VAR_3 = FUNC_0(VAR_1);
 struct its_cmd_info *VAR_4 = VAR_2;


 if (!VAR_3->its->is_v4)
  return -VAR_0;


 if (!VAR_4)
  return FUNC_4(VAR_1);

 switch (VAR_4->cmd_type) {
 case 130:
  return FUNC_2(VAR_1, VAR_4);

 case 131:
  return FUNC_1(VAR_1, VAR_4);

 case 128:
 case 129:
  return FUNC_3(VAR_1, VAR_4);

 default:
  return -VAR_0;
 }
}
