
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ CENTER_SPREAD; } ;
struct spread_spectrum_data {scalar_t__ percentage; int percentage_divider; int modulation_freq_hz; TYPE_1__ flags; } ;
struct pll_settings {int fract_feedback_divider; int reference_freq; int reference_divider; int feedback_divider; } ;
struct fixed31_32 {int dummy; } ;
struct delta_sigma_data {void* ds_frac_size; void* ds_frac_amount; void* nfrac_amount; void* feedback_amount; } ;


 struct fixed31_32 FUNC_0 (struct fixed31_32,int ) ;
 struct fixed31_32 FUNC_1 (struct fixed31_32,struct fixed31_32) ;
 struct fixed31_32 FUNC_2 (struct fixed31_32,int) ;
 void* FUNC_3 (struct fixed31_32) ;
 struct fixed31_32 FUNC_4 (int,int) ;
 int FUNC_5 (void*) ;
 struct fixed31_32 FUNC_6 (struct fixed31_32,struct fixed31_32) ;
 struct fixed31_32 FUNC_7 (struct fixed31_32,int) ;
 struct fixed31_32 FUNC_8 (struct fixed31_32,int ) ;
 int FUNC_9 (struct delta_sigma_data*,int ,int) ;

__attribute__((used)) static bool FUNC_10(
  const struct pll_settings *VAR_0,
  const struct spread_spectrum_data *VAR_1,
  struct delta_sigma_data *VAR_2)
{
 struct fixed31_32 VAR_3;
 struct fixed31_32 VAR_4;
 struct fixed31_32 VAR_5;
 struct fixed31_32 VAR_6;
 struct fixed31_32 VAR_7;
 struct fixed31_32 VAR_8;

 if (VAR_2 == ((void*)0))
  return 0;
 if (VAR_1 == ((void*)0))
  return 0;
 if (VAR_1->percentage == 0)
  return 0;
 if (VAR_0 == ((void*)0))
  return 0;

 FUNC_9(VAR_2, 0, sizeof(struct delta_sigma_data));



 VAR_3 = FUNC_4(
  VAR_0->fract_feedback_divider, 1000000);
 VAR_3 = FUNC_0(VAR_3, VAR_0->feedback_divider);

 VAR_2->ds_frac_amount = 0;


 VAR_4 = FUNC_6(
  VAR_3, FUNC_4(VAR_1->percentage,
     100 * VAR_1->percentage_divider));
 VAR_2->feedback_amount = FUNC_3(VAR_4);

 VAR_5 = FUNC_8(VAR_4,
  FUNC_5(VAR_2->feedback_amount));
 VAR_5 = FUNC_7(VAR_5, 10);
 VAR_2->nfrac_amount = FUNC_3(VAR_5);

 VAR_6 = FUNC_8(VAR_5,
  FUNC_5(VAR_2->nfrac_amount));
 VAR_6 = FUNC_7(VAR_6, 65536);
 VAR_2->ds_frac_amount = FUNC_3(VAR_6);


 VAR_8 = FUNC_4(
  VAR_0->reference_freq * 1000,
  VAR_0->reference_divider * VAR_1->modulation_freq_hz);

 if (VAR_1->flags.CENTER_SPREAD)
  VAR_8 = FUNC_2(VAR_8, 4);
 else
  VAR_8 = FUNC_2(VAR_8, 2);

 VAR_7 = FUNC_1(VAR_4, VAR_8);

 VAR_7 = FUNC_7(VAR_7, 65536 * 10);
 VAR_2->ds_frac_size = FUNC_3(VAR_7);

 return 1;
}
