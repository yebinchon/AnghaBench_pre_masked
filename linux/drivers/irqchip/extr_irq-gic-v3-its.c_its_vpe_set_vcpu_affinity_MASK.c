
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct its_vpe {int dummy; } ;
struct its_cmd_info {int cmd_type; } ;
struct irq_data {int dummy; } ;



 int VAR_0 ;


 struct its_vpe* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct its_vpe*) ;
 int FUNC_2 (struct its_vpe*) ;
 int FUNC_3 (struct its_vpe*) ;

__attribute__((used)) static int FUNC_4(struct irq_data *VAR_1, void *VAR_2)
{
 struct its_vpe *VAR_3 = FUNC_0(VAR_1);
 struct its_cmd_info *VAR_4 = VAR_2;

 switch (VAR_4->cmd_type) {
 case 128:
  FUNC_3(VAR_3);
  return 0;

 case 130:
  FUNC_1(VAR_3);
  return 0;

 case 129:
  FUNC_2(VAR_3);
  return 0;

 default:
  return -VAR_0;
 }
}
