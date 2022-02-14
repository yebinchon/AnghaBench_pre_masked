
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct malidp_hw_device {TYPE_2__* hw; } ;
struct TYPE_3__ {scalar_t__ dc_base; } ;
struct TYPE_4__ {TYPE_1__ map; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct malidp_hw_device*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (struct malidp_hw_device*,scalar_t__) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct malidp_hw_device *VAR_5)
{
 u32 VAR_6, VAR_7 = 100;

 FUNC_1(VAR_5, VAR_3, VAR_0);
 FUNC_1(VAR_5, VAR_1, VAR_2);
 while (VAR_7) {
  VAR_6 = FUNC_2(VAR_5, VAR_5->hw->map.dc_base + VAR_4);
  if ((VAR_6 & VAR_1) == 0)
   break;
  FUNC_3(100, 1000);
  VAR_7--;
 }
 FUNC_0(VAR_7 == 0, "timeout while leaving config mode");
}
