
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct malidp_hw_device {TYPE_2__* hw; } ;
struct TYPE_3__ {int features; } ;
struct TYPE_4__ {TYPE_1__ map; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct malidp_hw_device*,int ) ;
 int FUNC_1 (struct malidp_hw_device*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct malidp_hw_device *VAR_3, u8 VAR_4, u32 VAR_5)
{
 u32 VAR_6 = FUNC_0(VAR_3, VAR_4);

 if (VAR_3->hw->map.features & VAR_0)
  FUNC_1(VAR_3, VAR_5, VAR_6 + VAR_1);
 else
  FUNC_1(VAR_3, VAR_5, VAR_6 + VAR_2);
}
