
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_pll {int flags; unsigned int min_feedback_div; unsigned int max_feedback_div; unsigned int reference_div; unsigned int min_ref_div; unsigned int max_ref_div; unsigned int post_div; unsigned int lcd_pll_out_min; unsigned int lcd_pll_out_max; unsigned int pll_out_min; unsigned int pll_out_max; unsigned int min_post_div; unsigned int max_post_div; unsigned int reference_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (char*,int,int,int,int,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int*,unsigned int*) ;
 int FUNC_4 (unsigned int*,unsigned int*,unsigned int,unsigned int) ;
 unsigned int FUNC_5 (unsigned int,int) ;

void FUNC_6(struct amdgpu_pll *VAR_5,
   u32 VAR_6,
   u32 *VAR_7,
   u32 *VAR_8,
   u32 *VAR_9,
   u32 *VAR_10,
   u32 *VAR_11)
{
 unsigned VAR_12 = VAR_5->flags & VAR_2 ?
  VAR_6 : VAR_6 / 10;

 unsigned VAR_13, VAR_14, VAR_15;
 unsigned VAR_16, VAR_17, VAR_18;
 unsigned VAR_19, VAR_20, VAR_21;
 unsigned VAR_22, VAR_23;
 unsigned VAR_24, VAR_25;


 VAR_13 = VAR_5->min_feedback_div;
 VAR_14 = VAR_5->max_feedback_div;

 if (VAR_5->flags & VAR_2) {
  VAR_13 *= 10;
  VAR_14 *= 10;
 }


 if (VAR_5->flags & VAR_4)
  VAR_19 = VAR_5->reference_div;
 else
  VAR_19 = VAR_5->min_ref_div;

 if (VAR_5->flags & VAR_2 &&
     VAR_5->flags & VAR_4)
  VAR_20 = VAR_5->reference_div;
 else
  VAR_20 = VAR_5->max_ref_div;


 if (VAR_5->flags & VAR_3) {
  VAR_16 = VAR_5->post_div;
  VAR_17 = VAR_5->post_div;
 } else {
  unsigned VAR_26, VAR_27;

  if (VAR_5->flags & VAR_0) {
   VAR_26 = VAR_5->lcd_pll_out_min;
   VAR_27 = VAR_5->lcd_pll_out_max;
  } else {
   VAR_26 = VAR_5->pll_out_min;
   VAR_27 = VAR_5->pll_out_max;
  }

  if (VAR_5->flags & VAR_2) {
   VAR_26 *= 10;
   VAR_27 *= 10;
  }

  VAR_16 = VAR_26 / VAR_12;
  if ((VAR_12 * VAR_16) < VAR_26)
   ++VAR_16;
  if (VAR_16 < VAR_5->min_post_div)
   VAR_16 = VAR_5->min_post_div;

  VAR_17 = VAR_27 / VAR_12;
  if ((VAR_12 * VAR_17) > VAR_27)
   --VAR_17;
  if (VAR_17 > VAR_5->max_post_div)
   VAR_17 = VAR_5->max_post_div;
 }


 VAR_24 = VAR_12;
 VAR_25 = VAR_5->reference_freq;


 FUNC_4(&VAR_24, &VAR_25, VAR_13, VAR_16);


 if (VAR_5->flags & VAR_1)
  VAR_22 = VAR_16;
 else
  VAR_22 = VAR_17;
 VAR_23 = ~0;

 for (VAR_18 = VAR_16; VAR_18 <= VAR_17; ++VAR_18) {
  unsigned VAR_28;
  FUNC_3(VAR_24, VAR_25, VAR_18, VAR_14,
       VAR_20, &VAR_15, &VAR_21);
  VAR_28 = FUNC_2(VAR_12 - (VAR_5->reference_freq * VAR_15) /
   (VAR_21 * VAR_18));

  if (VAR_28 < VAR_23 || (VAR_28 == VAR_23 &&
      !(VAR_5->flags & VAR_1))) {

   VAR_22 = VAR_18;
   VAR_23 = VAR_28;
  }
 }
 VAR_18 = VAR_22;


 FUNC_3(VAR_24, VAR_25, VAR_18, VAR_14, VAR_20,
      &VAR_15, &VAR_21);



 FUNC_4(&VAR_15, &VAR_21, VAR_13, VAR_19);


 if (VAR_5->flags & VAR_2 && (VAR_15 % 10)) {
  VAR_13 = FUNC_5(VAR_13, (9 - (VAR_15 % 10)) * 20 + 60);
  if (VAR_15 < VAR_13) {
   unsigned VAR_29 = FUNC_0(VAR_13, VAR_15);
   VAR_15 *= VAR_29;
   VAR_21 *= VAR_29;
  }
 }


 if (VAR_5->flags & VAR_2) {
  *VAR_8 = VAR_15 / 10;
  *VAR_9 = VAR_15 % 10;
 } else {
  *VAR_8 = VAR_15;
  *VAR_9 = 0;
 }

 *VAR_7 = ((VAR_5->reference_freq * *VAR_8 * 10) +
   (VAR_5->reference_freq * *VAR_9)) /
         (VAR_21 * VAR_18 * 10);
 *VAR_10 = VAR_21;
 *VAR_11 = VAR_18;

 FUNC_1("%d - %d, pll dividers - fb: %d.%d ref: %d, post %d\n",
        VAR_6, *VAR_7 * 10, *VAR_8, *VAR_9,
        VAR_21, VAR_18);
}
