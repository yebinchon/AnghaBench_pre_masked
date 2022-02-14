
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_8__ {int CENTER_SPREAD; int EXTERNAL_SS; } ;
struct TYPE_7__ {int STEP_AND_DELAY_INFO; scalar_t__ EXTERNAL; scalar_t__ CENTER_MODE; } ;
struct spread_spectrum_info {int spread_spectrum_percentage; int spread_percentage_divider; int percentage; int percentage_divider; TYPE_3__ flags; TYPE_2__ type; int spread_spectrum_range; int modulation_freq_hz; int target_clock_range; int freq_range_khz; } ;
struct spread_spectrum_data {int spread_spectrum_percentage; int spread_percentage_divider; int percentage; int percentage_divider; TYPE_3__ flags; TYPE_2__ type; int spread_spectrum_range; int modulation_freq_hz; int target_clock_range; int freq_range_khz; } ;
struct dce110_clk_src {TYPE_4__* bios; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
typedef enum as_signal_type { ____Placeholder_as_signal_type } as_signal_type ;
struct TYPE_9__ {TYPE_1__* funcs; } ;
struct TYPE_6__ {scalar_t__ (* get_ss_entry_number ) (TYPE_4__*,int) ;int (* get_spread_spectrum_info ) (TYPE_4__*,int,scalar_t__,struct spread_spectrum_info*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 struct spread_spectrum_info* FUNC_2 (scalar_t__,int,int ) ;
 int FUNC_3 (struct spread_spectrum_info*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (TYPE_4__*,int,scalar_t__,struct spread_spectrum_info*) ;

__attribute__((used)) static void FUNC_6(
  struct dce110_clk_src *VAR_4,
  enum as_signal_type VAR_5,
  struct spread_spectrum_data *VAR_6[],
  uint32_t *VAR_7)
{
 enum bp_result VAR_8 = VAR_1;
 struct spread_spectrum_info *VAR_9;
 struct spread_spectrum_data *VAR_10;
 struct spread_spectrum_info *VAR_11;
 struct spread_spectrum_data *VAR_12;
 uint32_t VAR_13;
 FUNC_0();
 if (VAR_7 == ((void*)0)) {
  FUNC_1(
   "Invalid entry !!!\n");
  return;
 }
 if (VAR_6 == ((void*)0)) {
  FUNC_1(
   "Invalid array pointer!!!\n");
  return;
 }

 VAR_6[0] = ((void*)0);
 *VAR_7 = 0;

 *VAR_7 = VAR_4->bios->funcs->get_ss_entry_number(
   VAR_4->bios,
   VAR_5);

 if (*VAR_7 == 0)
  return;

 VAR_9 = FUNC_2(*VAR_7,
     sizeof(struct spread_spectrum_info),
     VAR_3);
 VAR_11 = VAR_9;
 if (VAR_9 == ((void*)0))
  return;

 VAR_10 = FUNC_2(*VAR_7,
     sizeof(struct spread_spectrum_data),
     VAR_3);
 if (VAR_10 == ((void*)0))
  goto out_free_info;

 for (VAR_13 = 0, VAR_11 = VAR_9;
  VAR_13 < (*VAR_7);
  ++VAR_13, ++VAR_11) {

  VAR_8 = VAR_4->bios->funcs->get_spread_spectrum_info(
    VAR_4->bios,
    VAR_5,
    VAR_13,
    VAR_11);

  if (VAR_8 != VAR_2)
   goto out_free_data;
 }

 for (VAR_13 = 0, VAR_11 = VAR_9, VAR_12 = VAR_10;
  VAR_13 < (*VAR_7);
  ++VAR_13, ++VAR_11, ++VAR_12) {

  if (VAR_11->type.STEP_AND_DELAY_INFO != 0) {
   FUNC_1(
    "Invalid ATOMBIOS SS Table!!!\n");
   goto out_free_data;
  }



  if (VAR_5 == VAR_0
    && VAR_11->spread_spectrum_percentage > 6){

   FUNC_1(
    "Invalid SS percentage ");
   FUNC_1(
    "for HDMI in ATOMBIOS info Table!!!\n");
   continue;
  }
  if (VAR_11->spread_percentage_divider == 1000) {







   VAR_11->spread_spectrum_percentage /= 10;
   VAR_11->spread_percentage_divider = 100;
  }

  VAR_12->freq_range_khz = VAR_11->target_clock_range;
  VAR_12->percentage =
    VAR_11->spread_spectrum_percentage;
  VAR_12->percentage_divider =
    VAR_11->spread_percentage_divider;
  VAR_12->modulation_freq_hz =
    VAR_11->spread_spectrum_range;

  if (VAR_11->type.CENTER_MODE)
   VAR_12->flags.CENTER_SPREAD = 1;

  if (VAR_11->type.EXTERNAL)
   VAR_12->flags.EXTERNAL_SS = 1;

 }

 *VAR_6 = VAR_10;
 FUNC_3(VAR_9);
 return;

out_free_data:
 FUNC_3(VAR_10);
 *VAR_7 = 0;
out_free_info:
 FUNC_3(VAR_9);
}
