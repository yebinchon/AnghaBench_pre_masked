
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct analogix_dp_device {scalar_t__ reg_base; scalar_t__ hpd_gpiod; } ;
typedef enum dp_irq_type { ____Placeholder_dp_irq_type } dp_irq_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

enum dp_irq_type FUNC_2(struct analogix_dp_device *VAR_8)
{
 u32 VAR_9;

 if (VAR_8->hpd_gpiod) {
  VAR_9 = FUNC_0(VAR_8->hpd_gpiod);
  if (VAR_9)
   return VAR_1;
  else
   return VAR_2;
 } else {

  VAR_9 = FUNC_1(VAR_8->reg_base + VAR_0);

  if (VAR_9 & VAR_7)
   return VAR_1;

  if (VAR_9 & VAR_6)
   return VAR_2;

  if (VAR_9 & VAR_5)
   return VAR_3;

  return VAR_4;
 }
}
