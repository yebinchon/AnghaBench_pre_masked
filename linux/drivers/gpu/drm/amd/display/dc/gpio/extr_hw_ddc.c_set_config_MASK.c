
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct hw_gpio_pin {int dummy; } ;
struct TYPE_9__ {int en; } ;
struct hw_gpio {TYPE_4__ base; } ;
struct hw_ddc {TYPE_3__* regs; struct hw_gpio base; } ;
struct TYPE_6__ {int type; int clock_en_bit_present; int data_en_bit_present; } ;
struct TYPE_7__ {TYPE_1__ ddc; } ;
struct gpio_config_data {TYPE_2__ config; int type; } ;
typedef enum gpio_result { ____Placeholder_gpio_result } gpio_result ;
struct TYPE_10__ {int MASK_reg; } ;
struct TYPE_8__ {int dc_gpio_aux_ctrl_5; int phy_aux_cntl; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;





 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 struct hw_ddc* FUNC_2 (struct hw_gpio_pin*) ;
 int FUNC_3 (int ,int ,int *,int ,int *) ;
 int FUNC_4 (int ,int ,int *,int ,int *,int ,int *) ;
 int FUNC_5 (int ,int ,int ,int) ;
 int FUNC_6 (int ,int ,int ,int,int ,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int ,int ,int ) ;
 int FUNC_9 (int ,int ,int,int ,int,int ,int) ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_5__ VAR_19 ;
 int FUNC_10 (int) ;
 int VAR_20 ;

__attribute__((used)) static enum gpio_result FUNC_11(
 struct hw_gpio_pin *VAR_21,
 const struct gpio_config_data *VAR_22)
{
 struct hw_ddc *VAR_23 = FUNC_2(VAR_21);
 struct hw_gpio *VAR_24 = ((void*)0);
 uint32_t VAR_25;
 uint32_t VAR_26 = 0;
 uint32_t VAR_27 = 0;
 uint32_t VAR_28 = 0;

 VAR_24 = &VAR_23->base;

 if (VAR_24 == ((void*)0)) {
  FUNC_0(0);
  return VAR_15;
 }

 VAR_25 = FUNC_4(VAR_19.MASK_reg,
   VAR_3, &VAR_26,
   VAR_2, &VAR_27,
   VAR_0, &VAR_28);

 switch (VAR_22->config.ddc.type) {
 case 130:




  if (VAR_24->base.en != VAR_13) {
   if (!VAR_26 || !VAR_27) {

    FUNC_6(VAR_19.MASK_reg, VAR_25,
      VAR_3, 1,
      VAR_2, 1);

    if (VAR_22->type ==
      VAR_10)
     FUNC_10(3);
   }
  } else {
   uint32_t VAR_29;
   uint32_t VAR_30 = 0;
   uint32_t VAR_31 = 0;

   VAR_29 = FUNC_3(VAR_19.MASK_reg,
     VAR_5, &VAR_30,
     VAR_4, &VAR_31);

   if (VAR_30) {
    FUNC_5(VAR_19.MASK_reg, VAR_25,
      VAR_5, 0);

    if (VAR_22->type ==
      VAR_10)
     FUNC_10(3);
   }

   if (!VAR_31) {
    FUNC_5(VAR_19.MASK_reg, VAR_25,
      VAR_4, 1);

    if (VAR_22->type ==
      VAR_10)
     FUNC_10(3);
   }
  }

  if (VAR_28) {


   if (VAR_22->config.ddc.data_en_bit_present ||
    VAR_22->config.ddc.clock_en_bit_present)


    FUNC_10(2);




   FUNC_7(VAR_19.MASK_reg,
     VAR_0, 0);
  }
  return VAR_16;
 case 131:

  if (!VAR_28) {
   FUNC_5(VAR_19.MASK_reg, VAR_25,
     VAR_0, 1);
  }







  return VAR_16;
 case 129:
  if ((VAR_24->base.en >= VAR_11) &&
   (VAR_24->base.en <= VAR_12)) {
   FUNC_9(VAR_18,
    VAR_8, 1,
    VAR_6, 1,
    VAR_7, 0);
   return VAR_16;
  }
 break;
 case 128:
  if ((VAR_24->base.en >= VAR_11) &&
   (VAR_24->base.en <= VAR_12)) {
   FUNC_9(VAR_18,
    VAR_8, 1,
    VAR_6, 1,
    VAR_7, 1);
   return VAR_16;
  }
 break;
 case 132:
  if ((VAR_24->base.en >= VAR_11) &&
   (VAR_24->base.en <= VAR_12)) {
   FUNC_8(VAR_18,
    VAR_8, 0,
    VAR_6, 0);
   return VAR_16;
  }
 break;
 }

 FUNC_1();

 return VAR_14;
}
