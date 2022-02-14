
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cryp_key_value {int key_value_right; int key_value_left; } ;
struct cryp_device_data {TYPE_1__* base; } ;
typedef enum cryp_key_reg_index { ____Placeholder_cryp_key_reg_index } cryp_key_reg_index ;
struct TYPE_2__ {int key_4_r; int key_4_l; int key_3_r; int key_3_l; int key_2_r; int key_2_l; int key_1_r; int key_1_l; } ;






 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct cryp_device_data*) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct cryp_device_data *VAR_1,
         enum cryp_key_reg_index VAR_2,
         struct cryp_key_value VAR_3)
{
 while (FUNC_1(VAR_1))
  FUNC_0();

 switch (VAR_2) {
 case 131:
  FUNC_2(VAR_3.key_value_left,
    &VAR_1->base->key_1_l);
  FUNC_2(VAR_3.key_value_right,
    &VAR_1->base->key_1_r);
  break;
 case 130:
  FUNC_2(VAR_3.key_value_left,
    &VAR_1->base->key_2_l);
  FUNC_2(VAR_3.key_value_right,
    &VAR_1->base->key_2_r);
  break;
 case 129:
  FUNC_2(VAR_3.key_value_left,
    &VAR_1->base->key_3_l);
  FUNC_2(VAR_3.key_value_right,
    &VAR_1->base->key_3_r);
  break;
 case 128:
  FUNC_2(VAR_3.key_value_left,
    &VAR_1->base->key_4_l);
  FUNC_2(VAR_3.key_value_right,
    &VAR_1->base->key_4_r);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
