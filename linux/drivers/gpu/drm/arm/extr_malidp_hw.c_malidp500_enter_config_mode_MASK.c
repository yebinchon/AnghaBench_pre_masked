
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


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (struct malidp_hw_device*,scalar_t__) ;
 int FUNC_2 (struct malidp_hw_device*,scalar_t__,int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct malidp_hw_device *VAR_3)
{
 u32 VAR_4, VAR_5 = 100;

 FUNC_2(VAR_3, VAR_0, VAR_1);
 while (VAR_5) {
  VAR_4 = FUNC_1(VAR_3, VAR_3->hw->map.dc_base + VAR_2);
  if ((VAR_4 & VAR_0) == VAR_0)
   break;




  FUNC_3(1000, 10000);
  VAR_5--;
 }
 FUNC_0(VAR_5 == 0, "timeout while entering config mode");
}
