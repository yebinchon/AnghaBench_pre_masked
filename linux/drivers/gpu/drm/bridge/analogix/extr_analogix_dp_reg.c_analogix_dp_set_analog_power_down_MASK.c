
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct analogix_dp_device {int reg_base; TYPE_1__* plat_data; } ;
typedef enum analog_power_block { ____Placeholder_analog_power_block } analog_power_block ;
struct TYPE_2__ {int dev_type; } ;


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
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;

void FUNC_4(struct analogix_dp_device *VAR_11,
           enum analog_power_block VAR_12,
           bool VAR_13)
{
 u32 VAR_14;
 u32 VAR_15 = VAR_1;
 u32 VAR_16;

 if (VAR_11->plat_data && FUNC_0(VAR_11->plat_data->dev_type))
  VAR_15 = VAR_0;

 switch (VAR_12) {
 case 133:
  if (VAR_11->plat_data && FUNC_0(VAR_11->plat_data->dev_type))
   VAR_16 = VAR_10;
  else
   VAR_16 = VAR_2;

  VAR_14 = FUNC_1(VAR_11->reg_base + VAR_15);
  if (VAR_13)
   VAR_14 |= VAR_16;
  else
   VAR_14 &= ~VAR_16;
  FUNC_3(VAR_14, VAR_11->reg_base + VAR_15);
  break;
 case 132:
  VAR_16 = VAR_3;
  VAR_14 = FUNC_1(VAR_11->reg_base + VAR_15);

  if (VAR_13)
   VAR_14 |= VAR_16;
  else
   VAR_14 &= ~VAR_16;
  FUNC_3(VAR_14, VAR_11->reg_base + VAR_15);
  break;
 case 131:
  VAR_16 = VAR_4;
  VAR_14 = FUNC_1(VAR_11->reg_base + VAR_15);

  if (VAR_13)
   VAR_14 |= VAR_16;
  else
   VAR_14 &= ~VAR_16;
  FUNC_3(VAR_14, VAR_11->reg_base + VAR_15);
  break;
 case 130:
  VAR_16 = VAR_5;
  VAR_14 = FUNC_1(VAR_11->reg_base + VAR_15);

  if (VAR_13)
   VAR_14 |= VAR_16;
  else
   VAR_14 &= ~VAR_16;
  FUNC_3(VAR_14, VAR_11->reg_base + VAR_15);
  break;
 case 129:
  VAR_16 = VAR_6;
  VAR_14 = FUNC_1(VAR_11->reg_base + VAR_15);

  if (VAR_13)
   VAR_14 |= VAR_16;
  else
   VAR_14 &= ~VAR_16;
  FUNC_3(VAR_14, VAR_11->reg_base + VAR_15);
  break;
 case 134:





  if (VAR_11->plat_data && FUNC_0(VAR_11->plat_data->dev_type))
   VAR_16 = VAR_8;
  else
   VAR_16 = VAR_9;

  VAR_14 = FUNC_1(VAR_11->reg_base + VAR_15);
  if (VAR_13)
   VAR_14 |= VAR_16;
  else
   VAR_14 &= ~VAR_16;

  FUNC_3(VAR_14, VAR_11->reg_base + VAR_15);
  if (VAR_11->plat_data && FUNC_0(VAR_11->plat_data->dev_type))
   FUNC_2(10, 15);
  break;
 case 128:
  if (VAR_13) {
   VAR_14 = VAR_7;
   FUNC_3(VAR_14, VAR_11->reg_base + VAR_15);
  } else {
   VAR_14 = VAR_7;
   FUNC_3(VAR_14, VAR_11->reg_base + VAR_15);
   FUNC_2(10, 15);
   VAR_14 &= ~VAR_8;
   FUNC_3(VAR_14, VAR_11->reg_base + VAR_15);
   FUNC_2(10, 15);

   FUNC_3(0x00, VAR_11->reg_base + VAR_15);
  }
  break;
 default:
  break;
 }
}
