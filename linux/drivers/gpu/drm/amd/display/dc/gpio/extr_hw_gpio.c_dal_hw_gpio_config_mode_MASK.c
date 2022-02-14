
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; } ;
struct hw_gpio {TYPE_1__ base; } ;
typedef enum gpio_result { ____Placeholder_gpio_result } gpio_result ;
typedef enum gpio_mode { ____Placeholder_gpio_mode } gpio_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int) ;

enum gpio_result FUNC_1(
 struct hw_gpio *VAR_8,
 enum gpio_mode VAR_9)
{
 VAR_8->base.mode = VAR_9;

 switch (VAR_9) {
 case 130:


  FUNC_0(VAR_3, VAR_2, 0);
  FUNC_0(VAR_7, VAR_6, 1);
  return VAR_5;
 case 128:


  FUNC_0(VAR_1, VAR_0, 0);
  FUNC_0(VAR_7, VAR_6, 1);
  return VAR_5;
 case 132:


  FUNC_0(VAR_1, VAR_0, 0);
  FUNC_0(VAR_7, VAR_6, 1);
  return VAR_5;
 case 131:

  FUNC_0(VAR_7, VAR_6, 0);
  return VAR_5;
 case 129:

  FUNC_0(VAR_7, VAR_6, 0);
  return VAR_5;
 default:
  return VAR_4;
 }
}
