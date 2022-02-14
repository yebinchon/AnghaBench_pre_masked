
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* machinfo; } ;
struct TYPE_3__ {int gpio_fatal; int gpio_batfull; int gpio_batlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 TYPE_2__ VAR_4 ;
 unsigned long FUNC_1 (int ) ;

unsigned long FUNC_2(int VAR_5)
{
 switch (VAR_5) {
 case 131:
  return !FUNC_0(VAR_3);
 case 128:
  return FUNC_0(VAR_4.machinfo->gpio_batlock);
 case 130:
  return FUNC_0(VAR_4.machinfo->gpio_batfull);
 case 129:
  return FUNC_0(VAR_4.machinfo->gpio_fatal);
 case 134:
  return FUNC_1(VAR_0);
 case 133:
  return FUNC_1(VAR_1);
 case 132:
 default:
  return FUNC_1(VAR_2);
 }
}
