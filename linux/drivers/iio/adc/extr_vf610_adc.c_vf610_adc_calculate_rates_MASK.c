
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vf610_adc_feature {size_t conv_mode; int clk_div; int default_sample_time; int lst_adder_index; } ;
struct vf610_adc {unsigned long* max_adck_rate; unsigned long* sample_freq_avail; int clk; struct vf610_adc_feature adc_feature; } ;


 int FUNC_0 (int*) ;
 unsigned long VAR_0 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int* VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static inline void FUNC_3(struct vf610_adc *VAR_3)
{
 struct vf610_adc_feature *VAR_4 = &VAR_3->adc_feature;
 unsigned long VAR_5, VAR_6 = FUNC_1(VAR_3->clk);
 u32 VAR_7, VAR_8;
 int VAR_9, VAR_10;

 VAR_5 = VAR_3->max_adck_rate[VAR_4->conv_mode];

 if (VAR_5) {

  VAR_9 = VAR_6 / VAR_5;
  VAR_4->clk_div = 1 << FUNC_2(VAR_9 + 1);
 } else {

  VAR_4->clk_div = 8;
 }

 VAR_5 = VAR_6 / VAR_4->clk_div;





 VAR_7 = VAR_0 / VAR_5;
 VAR_8 = VAR_4->default_sample_time / VAR_7;
 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_2); VAR_10++) {
  if (VAR_2[VAR_10] > VAR_8) {
   VAR_4->lst_adder_index = VAR_10;
   break;
  }
 }
 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_1); VAR_10++)
  VAR_3->sample_freq_avail[VAR_10] =
   VAR_5 / (6 + VAR_1[VAR_10] *
    (25 + VAR_2[VAR_4->lst_adder_index]));
}
