
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct max77693_led_device {int iout_joint; } ;
struct max77693_led_config_data {scalar_t__ boost_mode; int num_leds; scalar_t__ low_vsys; scalar_t__ boost_vout; scalar_t__* flash_timeout_max; int iout_flash_max; int iout_torch_max; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
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
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (scalar_t__*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct max77693_led_device*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct max77693_led_device*,int ) ;

__attribute__((used)) static void FUNC_5(struct max77693_led_device *VAR_20,
     struct max77693_led_config_data *VAR_21)
{
 u32 VAR_22 = VAR_21->boost_mode ? VAR_1 :
            VAR_0;
 int VAR_23;

 if (VAR_21->num_leds == 1 &&
     FUNC_4(VAR_20, VAR_10) && FUNC_4(VAR_20, VAR_11))
  VAR_20->iout_joint = 1;

 VAR_21->boost_mode = FUNC_2(VAR_21->boost_mode, VAR_13,
       VAR_12);


 if ((VAR_21->boost_mode == VAR_13) && VAR_20->iout_joint)
  VAR_21->boost_mode = VAR_12;

 FUNC_3(VAR_20, VAR_21->iout_torch_max,
   VAR_18, VAR_17, VAR_19);

 FUNC_3(VAR_20, VAR_21->iout_flash_max,
   VAR_2, VAR_22, VAR_3);

 for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_21->flash_timeout_max); ++VAR_23)
  FUNC_1(&VAR_21->flash_timeout_max[VAR_23], VAR_5,
    VAR_4, VAR_6);

 FUNC_1(&VAR_21->boost_vout, VAR_8, VAR_7,
       VAR_9);

 if (VAR_21->low_vsys)
  FUNC_1(&VAR_21->low_vsys, VAR_15,
    VAR_14, VAR_16);
}
