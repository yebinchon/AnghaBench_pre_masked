
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {TYPE_1__* funcs; } ;
struct gpio_service {int ctx; TYPE_2__ factory; } ;
struct TYPE_6__ {int hpd; int generic; int ddc; } ;
struct gpio {int id; int output_state; int * pin; TYPE_3__ hw_container; struct gpio_service* service; int mode; int en; } ;
typedef enum gpio_pin_output_state { ____Placeholder_gpio_pin_output_state } gpio_pin_output_state ;
typedef enum gpio_id { ____Placeholder_gpio_id } gpio_id ;
struct TYPE_4__ {int (* init_hpd ) (int *,int ,int,int ) ;int (* init_generic ) (int *,int ,int,int ) ;int (* init_ddc_data ) (int *,int ,int,int ) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;






 int VAR_1 ;
 struct gpio* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int ,int,int ) ;
 int FUNC_3 (int *,int ,int,int ) ;
 int FUNC_4 (int *,int ,int,int ) ;
 int FUNC_5 (int *,int ,int,int ) ;

struct gpio *FUNC_6(
 struct gpio_service *VAR_2,
 enum gpio_id VAR_3,
 uint32_t VAR_4,
 enum gpio_pin_output_state VAR_5)
{
 struct gpio *VAR_6 = FUNC_1(sizeof(struct gpio), VAR_0);

 if (!VAR_6) {
  FUNC_0(0);
  return ((void*)0);
 }

 VAR_6->service = VAR_2;
 VAR_6->pin = ((void*)0);
 VAR_6->id = VAR_3;
 VAR_6->en = VAR_4;
 VAR_6->mode = VAR_1;
 VAR_6->output_state = VAR_5;


 switch (VAR_6->id) {
 case 132:
  VAR_6->service->factory.funcs->init_ddc_data(&VAR_6->hw_container.ddc, VAR_2->ctx, VAR_3, VAR_4);
  break;
 case 133:
  VAR_6->service->factory.funcs->init_ddc_data(&VAR_6->hw_container.ddc, VAR_2->ctx, VAR_3, VAR_4);
  break;
 case 131:
  VAR_6->service->factory.funcs->init_generic(&VAR_6->hw_container.generic, VAR_2->ctx, VAR_3, VAR_4);
  break;
 case 129:
  VAR_6->service->factory.funcs->init_hpd(&VAR_6->hw_container.hpd, VAR_2->ctx, VAR_3, VAR_4);
  break;

 case 128:
  break;
 case 130:
  break;
 default:
  FUNC_0(0);
  VAR_6->pin = ((void*)0);
 }

 return VAR_6;
}
