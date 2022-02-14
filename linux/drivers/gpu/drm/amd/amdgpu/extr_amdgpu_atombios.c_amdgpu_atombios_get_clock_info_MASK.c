
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int susAccess; } ;
struct TYPE_15__ {TYPE_2__ usFirmwareCapability; int usMaxPixelClock; int ulDefaultMemoryClock; int ulDefaultEngineClock; int usMaxMemoryClockPLL_Input; int usMinMemoryClockPLL_Input; int ulMaxMemoryClockPLL_Output; int usMinMemoryClockPLL_Output; int usMaxEngineClockPLL_Input; int usMinEngineClockPLL_Input; int ulMaxEngineClockPLL_Output; int usMinEngineClockPLL_Output; int usMaxPixelClockPLL_Input; int usMinPixelClockPLL_Input; int ulMaxPixelClockPLL_Output; int usReferenceClock; } ;
struct TYPE_9__ {int usUniphyDPModeExtClkFreq; int ulDefaultDispEngineClkFreq; int usMemoryReferenceClock; int usCoreReferenceClock; } ;
struct TYPE_14__ {int usLcdMaxPixelClockPLL_Output; int usLcdMinPixelClockPLL_Output; } ;
struct TYPE_13__ {int ulMinPixelClockPLL_Output; } ;
union firmware_info {TYPE_7__ info; TYPE_1__ info_21; TYPE_6__ info_14; TYPE_5__ info_12; } ;
typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct amdgpu_pll {int reference_freq; int pll_out_min; int pll_out_max; int lcd_pll_out_min; int lcd_pll_out_max; int pll_in_min; int pll_in_max; int min_post_div; int max_post_div; int max_frac_feedback_div; int min_ref_div; int max_ref_div; int min_feedback_div; int max_feedback_div; scalar_t__ best_vco; scalar_t__ reference_div; scalar_t__ min_frac_feedback_div; } ;
struct amdgpu_mode_info {int firmware_flags; TYPE_8__* atom_context; } ;
struct TYPE_12__ {int default_dispclk; int dp_extclk; int current_dispclk; int max_pixel_clock; void* default_mclk; void* default_sclk; struct amdgpu_pll* ppll; struct amdgpu_pll mpll; struct amdgpu_pll spll; } ;
struct TYPE_11__ {void* current_mclk; void* current_sclk; } ;
struct amdgpu_device {TYPE_4__ clock; TYPE_3__ pm; struct amdgpu_mode_info mode_info; } ;
struct TYPE_16__ {scalar_t__ bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_8__*,int,int *,int *,int *,scalar_t__*) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;

int FUNC_5(struct amdgpu_device *VAR_4)
{
 struct amdgpu_mode_info *VAR_5 = &VAR_4->mode_info;
 int VAR_6 = FUNC_1(VAR_1, VAR_3);
 uint8_t VAR_7, VAR_8;
 uint16_t VAR_9;
 int VAR_10 = -VAR_2;

 if (FUNC_2(VAR_5->atom_context, VAR_6, ((void*)0),
       &VAR_7, &VAR_8, &VAR_9)) {
  int VAR_11;
  struct amdgpu_pll *VAR_12 = &VAR_4->clock.ppll[0];
  struct amdgpu_pll *VAR_13 = &VAR_4->clock.spll;
  struct amdgpu_pll *VAR_14 = &VAR_4->clock.mpll;
  union firmware_info *VAR_15 =
   (union firmware_info *)(VAR_5->atom_context->bios +
      VAR_9);

  VAR_12->reference_freq =
      FUNC_3(VAR_15->info.usReferenceClock);
  VAR_12->reference_div = 0;

  VAR_12->pll_out_min =
   FUNC_4(VAR_15->info_12.ulMinPixelClockPLL_Output);
  VAR_12->pll_out_max =
      FUNC_4(VAR_15->info.ulMaxPixelClockPLL_Output);

  VAR_12->lcd_pll_out_min =
   FUNC_3(VAR_15->info_14.usLcdMinPixelClockPLL_Output) * 100;
  if (VAR_12->lcd_pll_out_min == 0)
   VAR_12->lcd_pll_out_min = VAR_12->pll_out_min;
  VAR_12->lcd_pll_out_max =
   FUNC_3(VAR_15->info_14.usLcdMaxPixelClockPLL_Output) * 100;
  if (VAR_12->lcd_pll_out_max == 0)
   VAR_12->lcd_pll_out_max = VAR_12->pll_out_max;

  if (VAR_12->pll_out_min == 0)
   VAR_12->pll_out_min = 64800;

  VAR_12->pll_in_min =
      FUNC_3(VAR_15->info.usMinPixelClockPLL_Input);
  VAR_12->pll_in_max =
      FUNC_3(VAR_15->info.usMaxPixelClockPLL_Input);

  VAR_12->min_post_div = 2;
  VAR_12->max_post_div = 0x7f;
  VAR_12->min_frac_feedback_div = 0;
  VAR_12->max_frac_feedback_div = 9;
  VAR_12->min_ref_div = 2;
  VAR_12->max_ref_div = 0x3ff;
  VAR_12->min_feedback_div = 4;
  VAR_12->max_feedback_div = 0xfff;
  VAR_12->best_vco = 0;

  for (VAR_11 = 1; VAR_11 < VAR_0; VAR_11++)
   VAR_4->clock.ppll[VAR_11] = *VAR_12;


  VAR_13->reference_freq =
   FUNC_3(VAR_15->info_21.usCoreReferenceClock);
  VAR_13->reference_div = 0;

  VAR_13->pll_out_min =
      FUNC_3(VAR_15->info.usMinEngineClockPLL_Output);
  VAR_13->pll_out_max =
      FUNC_4(VAR_15->info.ulMaxEngineClockPLL_Output);


  if (VAR_13->pll_out_min == 0)
   VAR_13->pll_out_min = 64800;

  VAR_13->pll_in_min =
      FUNC_3(VAR_15->info.usMinEngineClockPLL_Input);
  VAR_13->pll_in_max =
      FUNC_3(VAR_15->info.usMaxEngineClockPLL_Input);

  VAR_13->min_post_div = 1;
  VAR_13->max_post_div = 1;
  VAR_13->min_ref_div = 2;
  VAR_13->max_ref_div = 0xff;
  VAR_13->min_feedback_div = 4;
  VAR_13->max_feedback_div = 0xff;
  VAR_13->best_vco = 0;


  VAR_14->reference_freq =
   FUNC_3(VAR_15->info_21.usMemoryReferenceClock);
  VAR_14->reference_div = 0;

  VAR_14->pll_out_min =
      FUNC_3(VAR_15->info.usMinMemoryClockPLL_Output);
  VAR_14->pll_out_max =
      FUNC_4(VAR_15->info.ulMaxMemoryClockPLL_Output);


  if (VAR_14->pll_out_min == 0)
   VAR_14->pll_out_min = 64800;

  VAR_14->pll_in_min =
      FUNC_3(VAR_15->info.usMinMemoryClockPLL_Input);
  VAR_14->pll_in_max =
      FUNC_3(VAR_15->info.usMaxMemoryClockPLL_Input);

  VAR_4->clock.default_sclk =
      FUNC_4(VAR_15->info.ulDefaultEngineClock);
  VAR_4->clock.default_mclk =
      FUNC_4(VAR_15->info.ulDefaultMemoryClock);

  VAR_14->min_post_div = 1;
  VAR_14->max_post_div = 1;
  VAR_14->min_ref_div = 2;
  VAR_14->max_ref_div = 0xff;
  VAR_14->min_feedback_div = 4;
  VAR_14->max_feedback_div = 0xff;
  VAR_14->best_vco = 0;


  VAR_4->clock.default_dispclk =
   FUNC_4(VAR_15->info_21.ulDefaultDispEngineClkFreq);

  if (VAR_4->clock.default_dispclk < 53900) {
   FUNC_0("Changing default dispclk from %dMhz to 600Mhz\n",
      VAR_4->clock.default_dispclk / 100);
   VAR_4->clock.default_dispclk = 60000;
  } else if (VAR_4->clock.default_dispclk <= 60000) {
   FUNC_0("Changing default dispclk from %dMhz to 625Mhz\n",
      VAR_4->clock.default_dispclk / 100);
   VAR_4->clock.default_dispclk = 62500;
  }
  VAR_4->clock.dp_extclk =
   FUNC_3(VAR_15->info_21.usUniphyDPModeExtClkFreq);
  VAR_4->clock.current_dispclk = VAR_4->clock.default_dispclk;

  VAR_4->clock.max_pixel_clock = FUNC_3(VAR_15->info.usMaxPixelClock);
  if (VAR_4->clock.max_pixel_clock == 0)
   VAR_4->clock.max_pixel_clock = 40000;


  VAR_4->mode_info.firmware_flags =
   FUNC_3(VAR_15->info.usFirmwareCapability.susAccess);

  VAR_10 = 0;
 }

 VAR_4->pm.current_sclk = VAR_4->clock.default_sclk;
 VAR_4->pm.current_mclk = VAR_4->clock.default_mclk;

 return VAR_10;
}
