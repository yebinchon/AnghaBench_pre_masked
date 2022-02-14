
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cryp_init_vector_value {int init_value_right; int init_value_left; } ;
struct cryp_device_data {TYPE_1__* base; } ;
typedef enum cryp_init_vector_index { ____Placeholder_cryp_init_vector_index } cryp_init_vector_index ;
struct TYPE_2__ {int init_vect_1_r; int init_vect_1_l; int init_vect_0_r; int init_vect_0_l; } ;




 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct cryp_device_data*) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct cryp_device_data *VAR_1,
          enum cryp_init_vector_index
          VAR_2,
          struct cryp_init_vector_value
          VAR_3)
{
 while (FUNC_1(VAR_1))
  FUNC_0();

 switch (VAR_2) {
 case 129:
  FUNC_2(VAR_3.init_value_left,
         &VAR_1->base->init_vect_0_l);
  FUNC_2(VAR_3.init_value_right,
         &VAR_1->base->init_vect_0_r);
  break;
 case 128:
  FUNC_2(VAR_3.init_value_left,
         &VAR_1->base->init_vect_1_l);
  FUNC_2(VAR_3.init_value_right,
         &VAR_1->base->init_vect_1_r);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
