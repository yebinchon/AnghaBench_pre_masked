
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vf610_adc_feature {scalar_t__ conv_mode; } ;
struct vf610_adc {scalar_t__ regs; struct vf610_adc_feature adc_feature; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct vf610_adc *VAR_5)
{
 struct vf610_adc_feature *VAR_6 = &(VAR_5->adc_feature);
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5->regs + VAR_4);

 VAR_7 &= ~VAR_1;
 if (VAR_6->conv_mode == VAR_3)
  VAR_7 |= VAR_1;

 VAR_7 &= ~VAR_0;
 if (VAR_6->conv_mode == VAR_2)
  VAR_7 |= VAR_0;

 FUNC_1(VAR_7, VAR_5->regs + VAR_4);
}
