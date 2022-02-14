
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vf610_adc_feature {int res_mode; int clk_div; int lst_adder_index; int sample_rate; int clk_sel; } ;
struct vf610_adc {scalar_t__ regs; int dev; struct vf610_adc_feature adc_feature; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;





 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct vf610_adc *VAR_21)
{
 struct vf610_adc_feature *VAR_22 = &(VAR_21->adc_feature);
 int VAR_23, VAR_24;

 VAR_23 = FUNC_1(VAR_21->regs + VAR_19);
 VAR_24 = FUNC_1(VAR_21->regs + VAR_20);


 VAR_23 &= ~VAR_18;
 switch (VAR_22->res_mode) {
 case 8:
  VAR_23 |= VAR_17;
  break;
 case 10:
  VAR_23 |= VAR_15;
  break;
 case 12:
  VAR_23 |= VAR_16;
  break;
 default:
  FUNC_0(VAR_21->dev, "error resolution mode\n");
  break;
 }


 VAR_23 &= ~(VAR_14 | VAR_0);
 switch (VAR_22->clk_div) {
 case 1:
  break;
 case 2:
  VAR_23 |= VAR_11;
  break;
 case 4:
  VAR_23 |= VAR_12;
  break;
 case 8:
  VAR_23 |= VAR_13;
  break;
 case 16:
  switch (VAR_22->clk_sel) {
  case 141:
   VAR_23 |= VAR_10 | VAR_13;
   break;
  default:
   FUNC_0(VAR_21->dev, "error clk divider\n");
   break;
  }
  break;
 }





 switch (VAR_22->lst_adder_index) {
 case 136:
  break;
 case 135:
  VAR_23 |= VAR_4;
  break;
 case 134:
  VAR_23 |= VAR_3;
  break;
 case 133:
  VAR_23 |= VAR_2;
  break;
 case 140:
  VAR_23 |= VAR_1;
  break;
 case 139:
  VAR_23 |= VAR_1;
  VAR_23 |= VAR_4;
  break;
 case 138:
  VAR_23 |= VAR_1;
  VAR_23 |= VAR_3;
  break;
 case 137:
  VAR_23 |= VAR_1;
  VAR_23 |= VAR_3;
  break;
 default:
  FUNC_0(VAR_21->dev, "error in sample time select\n");
 }


 VAR_23 &= ~VAR_9;
 VAR_24 &= ~VAR_5;
 switch (VAR_22->sample_rate) {
 case 132:
  break;
 case 129:
  VAR_24 |= VAR_5;
  break;
 case 128:
  VAR_24 |= VAR_5;
  VAR_23 |= VAR_8;
  break;
 case 131:
  VAR_24 |= VAR_5;
  VAR_23 |= VAR_6;
  break;
 case 130:
  VAR_24 |= VAR_5;
  VAR_23 |= VAR_7;
  break;
 default:
  FUNC_0(VAR_21->dev,
   "error hardware sample average select\n");
 }

 FUNC_2(VAR_23, VAR_21->regs + VAR_19);
 FUNC_2(VAR_24, VAR_21->regs + VAR_20);
}
