
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct analogix_dp_device {scalar_t__ reg_base; TYPE_1__* plat_data; } ;
struct TYPE_2__ {int dev_type; } ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_0 (struct analogix_dp_device*,int ) ;
 int FUNC_1 (struct analogix_dp_device*,int ) ;
 int FUNC_2 (struct analogix_dp_device*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,scalar_t__) ;

void FUNC_6(struct analogix_dp_device *VAR_29)
{
 u32 VAR_30;

 FUNC_2(VAR_29);
 FUNC_0(VAR_29, 0);

 if (VAR_29->plat_data && FUNC_3(VAR_29->plat_data->dev_type))
  VAR_30 = VAR_23 | VAR_24 |
   VAR_28;
 else
  VAR_30 = VAR_22 | VAR_26 |
   VAR_17 | VAR_18 |
   VAR_20 | VAR_28;

 FUNC_5(VAR_30, VAR_29->reg_base + VAR_1);

 VAR_30 = VAR_27 | VAR_19 |
  VAR_25 |
  VAR_21;
 FUNC_5(VAR_30, VAR_29->reg_base + VAR_2);

 FUNC_4(20, 30);

 FUNC_1(VAR_29, 0);

 FUNC_5(0x0, VAR_29->reg_base + VAR_12);
 FUNC_5(0x40, VAR_29->reg_base + VAR_13);
 FUNC_5(0x0, VAR_29->reg_base + VAR_14);
 FUNC_5(0x0, VAR_29->reg_base + VAR_15);

 FUNC_5(0x0, VAR_29->reg_base + VAR_10);
 FUNC_5(0x0, VAR_29->reg_base + VAR_3);

 FUNC_5(0x5e, VAR_29->reg_base + VAR_5);
 FUNC_5(0x1a, VAR_29->reg_base + VAR_4);

 FUNC_5(0x10, VAR_29->reg_base + VAR_6);

 FUNC_5(0x0, VAR_29->reg_base + VAR_9);

 FUNC_5(0x0, VAR_29->reg_base + VAR_16);
 FUNC_5(0x20, VAR_29->reg_base + VAR_0);

 FUNC_5(0x4, VAR_29->reg_base + VAR_8);
 FUNC_5(0x2, VAR_29->reg_base + VAR_7);

 FUNC_5(0x00000101, VAR_29->reg_base + VAR_11);
}
