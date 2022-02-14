
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {TYPE_1__* funcs; } ;
struct gpio_service {int ctx; TYPE_2__ translate; } ;
struct gpio_ddc_hw_info {int dummy; } ;
struct ddc {void* pin_data; int ctx; struct gpio_ddc_hw_info hw_info; void* pin_clock; } ;
typedef enum gpio_id { ____Placeholder_gpio_id } gpio_id ;
struct TYPE_3__ {int (* offset_to_id ) (int ,int ,int*,int *) ;} ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (struct gpio_service*,int ,int ,int ) ;
 int FUNC_2 (void**) ;
 int FUNC_3 (struct ddc*) ;
 struct ddc* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ,int*,int *) ;

struct ddc *FUNC_6(
 struct gpio_service *VAR_4,
 uint32_t VAR_5,
 uint32_t VAR_6,
 struct gpio_ddc_hw_info *VAR_7)
{
 enum gpio_id VAR_8;
 uint32_t VAR_9;
 struct ddc *VAR_10;

 if (!VAR_4->translate.funcs->offset_to_id(VAR_5, VAR_6, &VAR_8, &VAR_9))
  return ((void*)0);

 VAR_10 = FUNC_4(sizeof(struct ddc), VAR_0);

 if (!VAR_10) {
  FUNC_0();
  return ((void*)0);
 }

 VAR_10->pin_data = FUNC_1(
  VAR_4, VAR_2, VAR_9, VAR_3);

 if (!VAR_10->pin_data) {
  FUNC_0();
  goto failure_1;
 }

 VAR_10->pin_clock = FUNC_1(
  VAR_4, VAR_1, VAR_9, VAR_3);

 if (!VAR_10->pin_clock) {
  FUNC_0();
  goto failure_2;
 }

 VAR_10->hw_info = *VAR_7;

 VAR_10->ctx = VAR_4->ctx;

 return VAR_10;

failure_2:
 FUNC_2(&VAR_10->pin_data);

failure_1:
 FUNC_3(VAR_10);

 return ((void*)0);
}
