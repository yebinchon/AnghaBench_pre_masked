
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vf610_adc_feature {int clk_sel; int vol_ref; scalar_t__ ovwren; } ;
struct vf610_adc {scalar_t__ regs; int dev; struct vf610_adc_feature adc_feature; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct vf610_adc *VAR_9)
{
 struct vf610_adc_feature *VAR_10 = &VAR_9->adc_feature;
 int VAR_11 = 0;
 int VAR_12 = 0;

 switch (VAR_10->clk_sel) {
 case 131:
  VAR_11 |= VAR_3;
  break;
 case 132:
  VAR_11 |= VAR_0;
  break;
 default:
  break;
 }


 VAR_11 |= VAR_2;


 VAR_11 |= VAR_1;


 switch (VAR_10->vol_ref) {
 case 128:
  break;
 case 130:
  VAR_11 |= VAR_5;
  break;
 case 129:
  VAR_11 |= VAR_6;
  break;
 default:
  FUNC_0(VAR_9->dev, "error voltage reference\n");
 }


 if (VAR_10->ovwren)
  VAR_11 |= VAR_4;

 FUNC_1(VAR_11, VAR_9->regs + VAR_7);
 FUNC_1(VAR_12, VAR_9->regs + VAR_8);
}
