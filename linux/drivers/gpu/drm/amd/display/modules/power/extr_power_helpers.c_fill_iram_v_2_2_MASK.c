
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iram_table_v_2_2 {int flags; int* deviation_gain; int** bright_pos_gain; int** dark_pos_gain; int* hybrid_factor; int* contrast_factor; int* iir_curve; void** crgb_slope; void** crgb_offset; void** crgb_thresh; void*** max_reduction; void*** min_reduction; } ;
struct dmcu_iram_parameters {unsigned int set; } ;


 size_t** VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct dmcu_iram_parameters,struct iram_table_v_2_2*) ;
 void** VAR_1 ;
 void** VAR_2 ;

void FUNC_2(struct iram_table_v_2_2 *VAR_3, struct dmcu_iram_parameters VAR_4)
{
 unsigned int VAR_5 = VAR_4.set;

 VAR_3->flags = 0x0;

 VAR_3->deviation_gain[0] = 0xb3;
 VAR_3->deviation_gain[1] = 0xa8;
 VAR_3->deviation_gain[2] = 0x98;
 VAR_3->deviation_gain[3] = 0x68;

 VAR_3->min_reduction[0][0] = VAR_2[VAR_0[VAR_5][0]];
 VAR_3->min_reduction[1][0] = VAR_2[VAR_0[VAR_5][0]];
 VAR_3->min_reduction[2][0] = VAR_2[VAR_0[VAR_5][0]];
 VAR_3->min_reduction[3][0] = VAR_2[VAR_0[VAR_5][0]];
 VAR_3->min_reduction[4][0] = VAR_2[VAR_0[VAR_5][0]];
 VAR_3->max_reduction[0][0] = VAR_1[VAR_0[VAR_5][0]];
 VAR_3->max_reduction[1][0] = VAR_1[VAR_0[VAR_5][0]];
 VAR_3->max_reduction[2][0] = VAR_1[VAR_0[VAR_5][0]];
 VAR_3->max_reduction[3][0] = VAR_1[VAR_0[VAR_5][0]];
 VAR_3->max_reduction[4][0] = VAR_1[VAR_0[VAR_5][0]];

 VAR_3->min_reduction[0][1] = VAR_2[VAR_0[VAR_5][1]];
 VAR_3->min_reduction[1][1] = VAR_2[VAR_0[VAR_5][1]];
 VAR_3->min_reduction[2][1] = VAR_2[VAR_0[VAR_5][1]];
 VAR_3->min_reduction[3][1] = VAR_2[VAR_0[VAR_5][1]];
 VAR_3->min_reduction[4][1] = VAR_2[VAR_0[VAR_5][1]];
 VAR_3->max_reduction[0][1] = VAR_1[VAR_0[VAR_5][1]];
 VAR_3->max_reduction[1][1] = VAR_1[VAR_0[VAR_5][1]];
 VAR_3->max_reduction[2][1] = VAR_1[VAR_0[VAR_5][1]];
 VAR_3->max_reduction[3][1] = VAR_1[VAR_0[VAR_5][1]];
 VAR_3->max_reduction[4][1] = VAR_1[VAR_0[VAR_5][1]];

 VAR_3->min_reduction[0][2] = VAR_2[VAR_0[VAR_5][2]];
 VAR_3->min_reduction[1][2] = VAR_2[VAR_0[VAR_5][2]];
 VAR_3->min_reduction[2][2] = VAR_2[VAR_0[VAR_5][2]];
 VAR_3->min_reduction[3][2] = VAR_2[VAR_0[VAR_5][2]];
 VAR_3->min_reduction[4][2] = VAR_2[VAR_0[VAR_5][2]];
 VAR_3->max_reduction[0][2] = VAR_1[VAR_0[VAR_5][2]];
 VAR_3->max_reduction[1][2] = VAR_1[VAR_0[VAR_5][2]];
 VAR_3->max_reduction[2][2] = VAR_1[VAR_0[VAR_5][2]];
 VAR_3->max_reduction[3][2] = VAR_1[VAR_0[VAR_5][2]];
 VAR_3->max_reduction[4][2] = VAR_1[VAR_0[VAR_5][2]];

 VAR_3->min_reduction[0][3] = VAR_2[VAR_0[VAR_5][3]];
 VAR_3->min_reduction[1][3] = VAR_2[VAR_0[VAR_5][3]];
 VAR_3->min_reduction[2][3] = VAR_2[VAR_0[VAR_5][3]];
 VAR_3->min_reduction[3][3] = VAR_2[VAR_0[VAR_5][3]];
 VAR_3->min_reduction[4][3] = VAR_2[VAR_0[VAR_5][3]];
 VAR_3->max_reduction[0][3] = VAR_1[VAR_0[VAR_5][3]];
 VAR_3->max_reduction[1][3] = VAR_1[VAR_0[VAR_5][3]];
 VAR_3->max_reduction[2][3] = VAR_1[VAR_0[VAR_5][3]];
 VAR_3->max_reduction[3][3] = VAR_1[VAR_0[VAR_5][3]];
 VAR_3->max_reduction[4][3] = VAR_1[VAR_0[VAR_5][3]];

 VAR_3->bright_pos_gain[0][0] = 0x20;
 VAR_3->bright_pos_gain[0][1] = 0x20;
 VAR_3->bright_pos_gain[0][2] = 0x20;
 VAR_3->bright_pos_gain[0][3] = 0x20;
 VAR_3->bright_pos_gain[1][0] = 0x20;
 VAR_3->bright_pos_gain[1][1] = 0x20;
 VAR_3->bright_pos_gain[1][2] = 0x20;
 VAR_3->bright_pos_gain[1][3] = 0x20;
 VAR_3->bright_pos_gain[2][0] = 0x20;
 VAR_3->bright_pos_gain[2][1] = 0x20;
 VAR_3->bright_pos_gain[2][2] = 0x20;
 VAR_3->bright_pos_gain[2][3] = 0x20;
 VAR_3->bright_pos_gain[3][0] = 0x20;
 VAR_3->bright_pos_gain[3][1] = 0x20;
 VAR_3->bright_pos_gain[3][2] = 0x20;
 VAR_3->bright_pos_gain[3][3] = 0x20;
 VAR_3->bright_pos_gain[4][0] = 0x20;
 VAR_3->bright_pos_gain[4][1] = 0x20;
 VAR_3->bright_pos_gain[4][2] = 0x20;
 VAR_3->bright_pos_gain[4][3] = 0x20;

 VAR_3->dark_pos_gain[0][0] = 0x00;
 VAR_3->dark_pos_gain[0][1] = 0x00;
 VAR_3->dark_pos_gain[0][2] = 0x00;
 VAR_3->dark_pos_gain[0][3] = 0x00;
 VAR_3->dark_pos_gain[1][0] = 0x00;
 VAR_3->dark_pos_gain[1][1] = 0x00;
 VAR_3->dark_pos_gain[1][2] = 0x00;
 VAR_3->dark_pos_gain[1][3] = 0x00;
 VAR_3->dark_pos_gain[2][0] = 0x00;
 VAR_3->dark_pos_gain[2][1] = 0x00;
 VAR_3->dark_pos_gain[2][2] = 0x00;
 VAR_3->dark_pos_gain[2][3] = 0x00;
 VAR_3->dark_pos_gain[3][0] = 0x00;
 VAR_3->dark_pos_gain[3][1] = 0x00;
 VAR_3->dark_pos_gain[3][2] = 0x00;
 VAR_3->dark_pos_gain[3][3] = 0x00;
 VAR_3->dark_pos_gain[4][0] = 0x00;
 VAR_3->dark_pos_gain[4][1] = 0x00;
 VAR_3->dark_pos_gain[4][2] = 0x00;
 VAR_3->dark_pos_gain[4][3] = 0x00;

 VAR_3->hybrid_factor[0] = 0xff;
 VAR_3->hybrid_factor[1] = 0xff;
 VAR_3->hybrid_factor[2] = 0xff;
 VAR_3->hybrid_factor[3] = 0xc0;

 VAR_3->contrast_factor[0] = 0x99;
 VAR_3->contrast_factor[1] = 0x99;
 VAR_3->contrast_factor[2] = 0x90;
 VAR_3->contrast_factor[3] = 0x80;

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
