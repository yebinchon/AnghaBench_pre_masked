
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct drm_display_mode {int flags; scalar_t__ crtc_hdisplay; scalar_t__ clock; scalar_t__ crtc_htotal; } ;
struct dce10_wm_params {int yclk; int sclk; int active_time; int blank_time; int interlaced; int vtaps; int bytes_per_pixel; int lb_size; int num_heads; void* dram_channels; int vsc; scalar_t__ src_width; scalar_t__ disp_clk; } ;
struct TYPE_5__ {int disp_priority; } ;
struct TYPE_6__ {int current_mclk; int current_sclk; scalar_t__ dpm_enabled; } ;
struct amdgpu_device {TYPE_2__ mode_info; TYPE_3__ pm; } ;
struct TYPE_4__ {scalar_t__ enabled; struct drm_display_mode mode; } ;
struct amdgpu_crtc {scalar_t__ rmx_type; int line_time; int wm_high; int wm_low; int lb_vblank_lead_lines; scalar_t__ crtc_offset; int vsc; TYPE_1__ base; } ;


 int FUNC_0 (int,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (int,int ,int ,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (struct amdgpu_device*,int) ;
 int FUNC_6 (struct amdgpu_device*,int) ;
 void* FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (struct dce10_wm_params*) ;
 int FUNC_9 (struct dce10_wm_params*) ;
 int FUNC_10 (struct dce10_wm_params*) ;
 int FUNC_11 (struct dce10_wm_params*) ;
 scalar_t__ FUNC_12 (int,int) ;
 int FUNC_13 (int,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void FUNC_14(struct amdgpu_device *VAR_9,
     struct amdgpu_crtc *VAR_10,
     u32 VAR_11, u32 VAR_12)
{
 struct drm_display_mode *VAR_13 = &VAR_10->base.mode;
 struct dce10_wm_params VAR_14, VAR_15;
 u32 VAR_16;
 u32 VAR_17 = 0;
 u32 VAR_18 = 0, VAR_19 = 0;
 u32 VAR_20, VAR_21, VAR_22 = 0;

 if (VAR_10->base.enabled && VAR_12 && VAR_13) {
  VAR_16 = (u32) FUNC_12((u64)VAR_13->crtc_hdisplay * 1000000,
         (u32)VAR_13->clock);
  VAR_17 = (u32) FUNC_12((u64)VAR_13->crtc_htotal * 1000000,
       (u32)VAR_13->clock);
  VAR_17 = FUNC_13(VAR_17, (u32)65535);


  if (VAR_9->pm.dpm_enabled) {
   VAR_15.yclk =
    FUNC_5(VAR_9, 0) * 10;
   VAR_15.sclk =
    FUNC_6(VAR_9, 0) * 10;
  } else {
   VAR_15.yclk = VAR_9->pm.current_mclk * 10;
   VAR_15.sclk = VAR_9->pm.current_sclk * 10;
  }

  VAR_15.disp_clk = VAR_13->clock;
  VAR_15.src_width = VAR_13->crtc_hdisplay;
  VAR_15.active_time = VAR_16;
  VAR_15.blank_time = VAR_17 - VAR_15.active_time;
  VAR_15.interlaced = 0;
  if (VAR_13->flags & VAR_2)
   VAR_15.interlaced = 1;
  VAR_15.vsc = VAR_10->vsc;
  VAR_15.vtaps = 1;
  if (VAR_10->rmx_type != VAR_3)
   VAR_15.vtaps = 2;
  VAR_15.bytes_per_pixel = 4;
  VAR_15.lb_size = VAR_11;
  VAR_15.dram_channels = FUNC_7(VAR_9);
  VAR_15.num_heads = VAR_12;


  VAR_18 = FUNC_13(FUNC_11(&VAR_15), (u32)65535);



  if (!FUNC_9(&VAR_15) ||
      !FUNC_8(&VAR_15) ||
      !FUNC_10(&VAR_15) ||
      (VAR_9->mode_info.disp_priority == 2)) {
   FUNC_1("force priority to high\n");
  }


  if (VAR_9->pm.dpm_enabled) {
   VAR_14.yclk =
    FUNC_5(VAR_9, 1) * 10;
   VAR_14.sclk =
    FUNC_6(VAR_9, 1) * 10;
  } else {
   VAR_14.yclk = VAR_9->pm.current_mclk * 10;
   VAR_14.sclk = VAR_9->pm.current_sclk * 10;
  }

  VAR_14.disp_clk = VAR_13->clock;
  VAR_14.src_width = VAR_13->crtc_hdisplay;
  VAR_14.active_time = VAR_16;
  VAR_14.blank_time = VAR_17 - VAR_14.active_time;
  VAR_14.interlaced = 0;
  if (VAR_13->flags & VAR_2)
   VAR_14.interlaced = 1;
  VAR_14.vsc = VAR_10->vsc;
  VAR_14.vtaps = 1;
  if (VAR_10->rmx_type != VAR_3)
   VAR_14.vtaps = 2;
  VAR_14.bytes_per_pixel = 4;
  VAR_14.lb_size = VAR_11;
  VAR_14.dram_channels = FUNC_7(VAR_9);
  VAR_14.num_heads = VAR_12;


  VAR_19 = FUNC_13(FUNC_11(&VAR_14), (u32)65535);



  if (!FUNC_9(&VAR_14) ||
      !FUNC_8(&VAR_14) ||
      !FUNC_10(&VAR_14) ||
      (VAR_9->mode_info.disp_priority == 2)) {
   FUNC_1("force priority to high\n");
  }
  VAR_22 = FUNC_0(VAR_11, VAR_13->crtc_hdisplay);
 }


 VAR_21 = FUNC_3(VAR_8 + VAR_10->crtc_offset);
 VAR_20 = FUNC_2(VAR_21, VAR_1, VAR_6, 1);
 FUNC_4(VAR_8 + VAR_10->crtc_offset, VAR_20);
 VAR_20 = FUNC_3(VAR_7 + VAR_10->crtc_offset);
 VAR_20 = FUNC_2(VAR_20, VAR_0, VAR_5, VAR_18);
 VAR_20 = FUNC_2(VAR_20, VAR_0, VAR_4, VAR_17);
 FUNC_4(VAR_7 + VAR_10->crtc_offset, VAR_20);

 VAR_20 = FUNC_2(VAR_21, VAR_1, VAR_6, 2);
 FUNC_4(VAR_8 + VAR_10->crtc_offset, VAR_20);
 VAR_20 = FUNC_3(VAR_7 + VAR_10->crtc_offset);
 VAR_20 = FUNC_2(VAR_20, VAR_0, VAR_5, VAR_19);
 VAR_20 = FUNC_2(VAR_20, VAR_0, VAR_4, VAR_17);
 FUNC_4(VAR_7 + VAR_10->crtc_offset, VAR_20);

 FUNC_4(VAR_8 + VAR_10->crtc_offset, VAR_21);


 VAR_10->line_time = VAR_17;
 VAR_10->wm_high = VAR_18;
 VAR_10->wm_low = VAR_19;

 VAR_10->lb_vblank_lead_lines = VAR_22;
}
