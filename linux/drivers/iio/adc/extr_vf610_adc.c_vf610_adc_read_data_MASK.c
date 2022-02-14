
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int res_mode; } ;
struct vf610_adc {TYPE_1__ adc_feature; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct vf610_adc *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1->regs + VAR_0);

 switch (VAR_1->adc_feature.res_mode) {
 case 8:
  VAR_2 &= 0xFF;
  break;
 case 10:
  VAR_2 &= 0x3FF;
  break;
 case 12:
  VAR_2 &= 0xFFF;
  break;
 default:
  break;
 }

 return VAR_2;
}
