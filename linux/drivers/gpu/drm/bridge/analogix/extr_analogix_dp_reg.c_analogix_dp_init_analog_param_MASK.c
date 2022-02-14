
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct analogix_dp_device {scalar_t__ reg_base; TYPE_1__* plat_data; } ;
struct TYPE_2__ {scalar_t__ dev_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

void FUNC_2(struct analogix_dp_device *VAR_26)
{
 u32 VAR_27;

 VAR_27 = VAR_24;
 FUNC_1(VAR_27, VAR_26->reg_base + VAR_0);

 VAR_27 = VAR_20 | VAR_23;
 FUNC_1(VAR_27, VAR_26->reg_base + VAR_1);

 if (VAR_26->plat_data && FUNC_0(VAR_26->plat_data->dev_type)) {
  VAR_27 = VAR_17;
  if (VAR_26->plat_data->dev_type == VAR_19)
   VAR_27 ^= VAR_18;

  FUNC_1(VAR_27, VAR_26->reg_base + VAR_4);
  FUNC_1(0x95, VAR_26->reg_base + VAR_5);
  FUNC_1(0x40, VAR_26->reg_base + VAR_6);
  FUNC_1(0x58, VAR_26->reg_base + VAR_7);
  FUNC_1(0x22, VAR_26->reg_base + VAR_8);
 }

 VAR_27 = VAR_15 | VAR_25;
 FUNC_1(VAR_27, VAR_26->reg_base + VAR_2);

 VAR_27 = VAR_16 | VAR_10 |
  VAR_21 | VAR_22;
 FUNC_1(VAR_27, VAR_26->reg_base + VAR_3);

 VAR_27 = VAR_14 | VAR_13 |
  VAR_12 | VAR_11;
 FUNC_1(VAR_27, VAR_26->reg_base + VAR_9);
}
