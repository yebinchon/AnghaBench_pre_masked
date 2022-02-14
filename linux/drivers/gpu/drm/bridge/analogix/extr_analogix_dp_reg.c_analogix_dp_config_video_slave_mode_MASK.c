
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int interlaced; int v_sync_polarity; int h_sync_polarity; } ;
struct analogix_dp_device {scalar_t__ reg_base; TYPE_2__ video_info; TYPE_1__* plat_data; } ;
struct TYPE_3__ {int dev_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

void FUNC_3(struct analogix_dp_device *VAR_12)
{
 u32 VAR_13;

 VAR_13 = FUNC_1(VAR_12->reg_base + VAR_0);
 if (VAR_12->plat_data && FUNC_0(VAR_12->plat_data->dev_type)) {
  VAR_13 &= ~(VAR_7 | VAR_8);
 } else {
  VAR_13 &= ~(VAR_6 | VAR_9);
  VAR_13 |= VAR_6;
 }
 FUNC_2(VAR_13, VAR_12->reg_base + VAR_0);

 VAR_13 = FUNC_1(VAR_12->reg_base + VAR_2);
 VAR_13 &= ~VAR_5;
 VAR_13 |= (VAR_12->video_info.interlaced << 2);
 FUNC_2(VAR_13, VAR_12->reg_base + VAR_2);

 VAR_13 = FUNC_1(VAR_12->reg_base + VAR_2);
 VAR_13 &= ~VAR_11;
 VAR_13 |= (VAR_12->video_info.v_sync_polarity << 1);
 FUNC_2(VAR_13, VAR_12->reg_base + VAR_2);

 VAR_13 = FUNC_1(VAR_12->reg_base + VAR_2);
 VAR_13 &= ~VAR_4;
 VAR_13 |= (VAR_12->video_info.h_sync_polarity << 0);
 FUNC_2(VAR_13, VAR_12->reg_base + VAR_2);

 VAR_13 = VAR_3 | VAR_10;
 FUNC_2(VAR_13, VAR_12->reg_base + VAR_1);
}
