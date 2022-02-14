
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct arizona_extcon_info {TYPE_1__* micd_modes; } ;
struct TYPE_2__ {int bias; } ;



__attribute__((used)) static const char *FUNC_0(struct arizona_extcon_info *VAR_0)
{
 switch (VAR_0->micd_modes[0].bias) {
 case 1:
  return "MICBIAS1";
 case 2:
  return "MICBIAS2";
 case 3:
  return "MICBIAS3";
 default:
  return "MICVDD";
 }
}
