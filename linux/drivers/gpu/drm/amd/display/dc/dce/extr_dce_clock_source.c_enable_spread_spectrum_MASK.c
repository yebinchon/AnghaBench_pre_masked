
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ EXTERNAL_SS; scalar_t__ CENTER_SPREAD; } ;
struct spread_spectrum_data {TYPE_3__ flags; int percentage; } ;
struct pll_settings {int calculated_pix_clk_100hz; scalar_t__ ss_percentage; } ;
struct delta_sigma_data {int ds_frac_amount; int ds_frac_size; int nfrac_amount; int feedback_amount; } ;
struct TYPE_8__ {int id; } ;
struct dce110_clk_src {TYPE_6__* bios; TYPE_2__ base; } ;
struct TYPE_10__ {int DS_TYPE; int CENTER_SPREAD; int EXTERNAL_SS; } ;
struct TYPE_7__ {int ds_frac_size; int nfrac_amount; int feedback_amount; } ;
struct bp_spread_spectrum_parameters {TYPE_4__ flags; int percentage; int pll_id; int ds_frac_amount; TYPE_1__ ds; int member_0; } ;
typedef enum signal_type { ____Placeholder_signal_type } signal_type ;
struct TYPE_12__ {TYPE_5__* funcs; } ;
struct TYPE_11__ {scalar_t__ (* enable_spread_spectrum_on_ppll ) (TYPE_6__*,struct bp_spread_spectrum_parameters*,int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct pll_settings*,struct spread_spectrum_data const*,struct delta_sigma_data*) ;
 struct spread_spectrum_data* FUNC_1 (struct dce110_clk_src*,int,int) ;
 scalar_t__ FUNC_2 (TYPE_6__*,struct bp_spread_spectrum_parameters*,int) ;

__attribute__((used)) static bool FUNC_3(
  struct dce110_clk_src *VAR_1,
  enum signal_type VAR_2, struct pll_settings *VAR_3)
{
 struct bp_spread_spectrum_parameters VAR_4 = {0};
 struct delta_sigma_data VAR_5;
 const struct spread_spectrum_data *VAR_6 = ((void*)0);

 VAR_6 = FUNC_1(
   VAR_1,
   VAR_2,
   VAR_3->calculated_pix_clk_100hz / 10);




 if (VAR_6 != ((void*)0) && VAR_3->ss_percentage != 0) {
  if (FUNC_0(VAR_3, VAR_6, &VAR_5)) {
   VAR_4.ds.feedback_amount =
     VAR_5.feedback_amount;
   VAR_4.ds.nfrac_amount =
     VAR_5.nfrac_amount;
   VAR_4.ds.ds_frac_size = VAR_5.ds_frac_size;
   VAR_4.ds_frac_amount =
     VAR_5.ds_frac_amount;
   VAR_4.flags.DS_TYPE = 1;
   VAR_4.pll_id = VAR_1->base.id;
   VAR_4.percentage = VAR_6->percentage;
   if (VAR_6->flags.CENTER_SPREAD)
    VAR_4.flags.CENTER_SPREAD = 1;
   if (VAR_6->flags.EXTERNAL_SS)
    VAR_4.flags.EXTERNAL_SS = 1;

   if (VAR_0 !=
    VAR_1->bios->funcs->
     enable_spread_spectrum_on_ppll(
       VAR_1->bios,
       &VAR_4,
       1))
    return 0;
  } else
   return 0;
 }
 return 1;
}
