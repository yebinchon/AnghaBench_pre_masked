
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct analogix_dp_device {scalar_t__ reg_base; scalar_t__ hpd_gpiod; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,scalar_t__) ;

void FUNC_1(struct analogix_dp_device *VAR_6)
{
 u32 VAR_7;

 if (VAR_6->hpd_gpiod)
  return;

 VAR_7 = VAR_2 | VAR_3 | VAR_5;
 FUNC_0(VAR_7, VAR_6->reg_base + VAR_0);

 VAR_7 = VAR_4;
 FUNC_0(VAR_7, VAR_6->reg_base + VAR_1);
}
