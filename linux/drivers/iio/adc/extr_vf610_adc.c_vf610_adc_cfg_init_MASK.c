
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vf610_adc_feature {int calibration; int ovwren; int res_mode; int sample_rate; int conv_mode; int vol_ref; int clk_sel; } ;
struct vf610_adc {struct vf610_adc_feature adc_feature; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vf610_adc*) ;

__attribute__((used)) static inline void FUNC_1(struct vf610_adc *VAR_3)
{
 struct vf610_adc_feature *VAR_4 = &VAR_3->adc_feature;


 VAR_4->clk_sel = VAR_0;
 VAR_4->vol_ref = VAR_1;

 VAR_4->calibration = 1;
 VAR_4->ovwren = 1;

 VAR_4->res_mode = 12;
 VAR_4->sample_rate = 1;

 VAR_4->conv_mode = VAR_2;

 FUNC_0(VAR_3);
}
