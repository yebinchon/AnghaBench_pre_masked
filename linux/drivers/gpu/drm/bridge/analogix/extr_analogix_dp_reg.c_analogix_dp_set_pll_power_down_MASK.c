
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct analogix_dp_device {scalar_t__ reg_base; TYPE_1__* plat_data; } ;
struct TYPE_2__ {int dev_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

void FUNC_3(struct analogix_dp_device *VAR_4, bool VAR_5)
{
 u32 VAR_6;
 u32 VAR_7 = VAR_2;
 u32 VAR_8 = VAR_1;

 if (VAR_4->plat_data && FUNC_0(VAR_4->plat_data->dev_type)) {
  VAR_8 = VAR_0;
  VAR_7 = VAR_3;
 }

 VAR_6 = FUNC_1(VAR_4->reg_base + VAR_8);
 if (VAR_5)
  VAR_6 |= VAR_7;
 else
  VAR_6 &= ~VAR_7;
 FUNC_2(VAR_6, VAR_4->reg_base + VAR_8);
}
