
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct analogix_dp_device {scalar_t__ reg_base; scalar_t__ hpd_gpiod; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

int FUNC_2(struct analogix_dp_device *VAR_3)
{
 u32 VAR_4;

 if (VAR_3->hpd_gpiod) {
  if (FUNC_0(VAR_3->hpd_gpiod))
   return 0;
 } else {
  VAR_4 = FUNC_1(VAR_3->reg_base + VAR_0);
  if (VAR_4 & VAR_2)
   return 0;
 }

 return -VAR_1;
}
