
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_uart {int init_speed; int oper_speed; TYPE_1__* proto; } ;
typedef enum qca_speed_type { ____Placeholder_qca_speed_type } qca_speed_type ;
struct TYPE_2__ {int init_speed; int oper_speed; } ;


 int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(struct hci_uart *VAR_1,
      enum qca_speed_type VAR_2)
{
 unsigned int VAR_3 = 0;

 if (VAR_2 == VAR_0) {
  if (VAR_1->init_speed)
   VAR_3 = VAR_1->init_speed;
  else if (VAR_1->proto->init_speed)
   VAR_3 = VAR_1->proto->init_speed;
 } else {
  if (VAR_1->oper_speed)
   VAR_3 = VAR_1->oper_speed;
  else if (VAR_1->proto->oper_speed)
   VAR_3 = VAR_1->proto->oper_speed;
 }

 return VAR_3;
}
