
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct malidp_hw_device {TYPE_2__* hw; } ;
struct TYPE_3__ {int dc_base; int se_base; } ;
struct TYPE_4__ {TYPE_1__ map; } ;





__attribute__((used)) static inline u32 FUNC_0(struct malidp_hw_device *VAR_0,
     u8 VAR_1)
{
 switch (VAR_1) {
 case 128:
  return VAR_0->hw->map.se_base;
 case 129:
  return VAR_0->hw->map.dc_base;
 }

 return 0;
}
