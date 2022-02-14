
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iram_table_v_2_2 {int flags; int* iir_curve; void** crgb_slope; void** crgb_offset; void** crgb_thresh; int ** dark_pos_gain; int ** bright_pos_gain; int ** max_reduction; int ** min_reduction; int * max_knee; int * min_knee; int * deviation_gain; int * contrast_factor; int * hybrid_factor; } ;
struct dmcu_iram_parameters {unsigned int set; } ;
struct TYPE_2__ {int dark_pos_gain; int bright_pos_gain; int max_reduction; int min_reduction; int max_knee; int min_knee; int deviation_gain; int contrast_factor; int brightness_gain; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__** VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct dmcu_iram_parameters,struct iram_table_v_2_2*) ;

void FUNC_2(struct iram_table_v_2_2 *VAR_3, struct dmcu_iram_parameters VAR_4)
{
 unsigned int VAR_5, VAR_6;
 unsigned int VAR_7 = VAR_4.set;

 VAR_3->flags = 0x0;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_3->hybrid_factor[VAR_5] = VAR_2[VAR_7][VAR_5].brightness_gain;
  VAR_3->contrast_factor[VAR_5] = VAR_2[VAR_7][VAR_5].contrast_factor;
  VAR_3->deviation_gain[VAR_5] = VAR_2[VAR_7][VAR_5].deviation_gain;
  VAR_3->min_knee[VAR_5] = VAR_2[VAR_7][VAR_5].min_knee;
  VAR_3->max_knee[VAR_5] = VAR_2[VAR_7][VAR_5].max_knee;

  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
   VAR_3->min_reduction[VAR_6][VAR_5] = VAR_2[VAR_7][VAR_5].min_reduction;
   VAR_3->max_reduction[VAR_6][VAR_5] = VAR_2[VAR_7][VAR_5].max_reduction;
   VAR_3->bright_pos_gain[VAR_6][VAR_5] = VAR_2[VAR_7][VAR_5].bright_pos_gain;
   VAR_3->dark_pos_gain[VAR_6][VAR_5] = VAR_2[VAR_7][VAR_5].dark_pos_gain;
  }
 }

 VAR_3->iir_curve[0] = 0x65;
 VAR_3->iir_curve[1] = 0x65;
 VAR_3->iir_curve[2] = 0x65;
 VAR_3->iir_curve[3] = 0x65;
 VAR_3->iir_curve[4] = 0x65;


 VAR_3->crgb_thresh[0] = FUNC_0(0x127c);
 VAR_3->crgb_thresh[1] = FUNC_0(0x151b);
 VAR_3->crgb_thresh[2] = FUNC_0(0x17d5);
 VAR_3->crgb_thresh[3] = FUNC_0(0x1a56);
 VAR_3->crgb_thresh[4] = FUNC_0(0x1c83);
 VAR_3->crgb_thresh[5] = FUNC_0(0x1e72);
 VAR_3->crgb_thresh[6] = FUNC_0(0x20f0);
 VAR_3->crgb_thresh[7] = FUNC_0(0x232b);
 VAR_3->crgb_offset[0] = FUNC_0(0x2999);
 VAR_3->crgb_offset[1] = FUNC_0(0x3999);
 VAR_3->crgb_offset[2] = FUNC_0(0x4666);
 VAR_3->crgb_offset[3] = FUNC_0(0x5999);
 VAR_3->crgb_offset[4] = FUNC_0(0x6333);
 VAR_3->crgb_offset[5] = FUNC_0(0x7800);
 VAR_3->crgb_offset[6] = FUNC_0(0x8c00);
 VAR_3->crgb_offset[7] = FUNC_0(0xa000);
 VAR_3->crgb_slope[0] = FUNC_0(0x3609);
 VAR_3->crgb_slope[1] = FUNC_0(0x2dfa);
 VAR_3->crgb_slope[2] = FUNC_0(0x27ea);
 VAR_3->crgb_slope[3] = FUNC_0(0x235d);
 VAR_3->crgb_slope[4] = FUNC_0(0x2042);
 VAR_3->crgb_slope[5] = FUNC_0(0x1dc3);
 VAR_3->crgb_slope[6] = FUNC_0(0x1b1a);
 VAR_3->crgb_slope[7] = FUNC_0(0x1910);

 FUNC_1(
   VAR_4, VAR_3);
}
