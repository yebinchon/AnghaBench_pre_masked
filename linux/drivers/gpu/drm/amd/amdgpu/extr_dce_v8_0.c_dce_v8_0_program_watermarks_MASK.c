
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
struct dce8_wm_params {int yclk; int sclk; int active_time; int blank_time; int interlaced; int vtaps; int bytes_per_pixel; int lb_size; int num_heads; void* dram_channels; int vsc; scalar_t__ src_width; scalar_t__ disp_clk; } ;
struct TYPE_6__ {int disp_priority; } ;
struct TYPE_5__ {int current_mclk; int current_sclk; scalar_t__ dpm_enabled; } ;
struct amdgpu_device {TYPE_3__ mode_info; TYPE_2__ pm; } ;
struct TYPE_4__ {scalar_t__ enabled; struct drm_display_mode mode; } ;
struct amdgpu_crtc {scalar_t__ rmx_type; int line_time; int wm_high; int wm_low; int lb_vblank_lead_lines; scalar_t__ crtc_offset; int vsc; TYPE_1__ base; } ;


 int FUNC_0 (int,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (struct amdgpu_device*,int) ;
 int FUNC_5 (struct amdgpu_device*,int) ;
 void* FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct dce8_wm_params*) ;
 int FUNC_8 (struct dce8_wm_params*) ;
 int FUNC_9 (struct dce8_wm_params*) ;
 int FUNC_10 (struct dce8_wm_params*) ;
 scalar_t__ FUNC_11 (int,int) ;
 int FUNC_12 (int,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_13(struct amdgpu_device *VAR_7,
     struct amdgpu_crtc *VAR_8,
     u32 VAR_9, u32 VAR_10)
{
 struct drm_display_mode *VAR_11 = &VAR_8->base.mode;
 struct dce8_wm_params VAR_12, VAR_13;
 u32 VAR_14;
 u32 VAR_15 = 0;
 u32 VAR_16 = 0, VAR_17 = 0;
 u32 VAR_18, VAR_19, VAR_20 = 0;

 if (VAR_8->base.enabled && VAR_10 && VAR_11) {
  VAR_14 = (u32) FUNC_11((u64)VAR_11->crtc_hdisplay * 1000000,
         (u32)VAR_11->clock);
  VAR_15 = (u32) FUNC_11((u64)VAR_11->crtc_htotal * 1000000,
       (u32)VAR_11->clock);
  VAR_15 = FUNC_12(VAR_15, (u32)65535);


  if (VAR_7->pm.dpm_enabled) {
   VAR_13.yclk =
    FUNC_4(VAR_7, 0) * 10;
   VAR_13.sclk =
    FUNC_5(VAR_7, 0) * 10;
  } else {
   VAR_13.yclk = VAR_7->pm.current_mclk * 10;
   VAR_13.sclk = VAR_7->pm.current_sclk * 10;
  }

  VAR_13.disp_clk = VAR_11->clock;
  VAR_13.src_width = VAR_11->crtc_hdisplay;
  VAR_13.active_time = VAR_14;
  VAR_13.blank_time = VAR_15 - VAR_13.active_time;
  VAR_13.interlaced = 0;
  if (VAR_11->flags & VAR_3)
   VAR_13.interlaced = 1;
  VAR_13.vsc = VAR_8->vsc;
  VAR_13.vtaps = 1;
  if (VAR_8->rmx_type != VAR_4)
   VAR_13.vtaps = 2;
  VAR_13.bytes_per_pixel = 4;
  VAR_13.lb_size = VAR_9;
  VAR_13.dram_channels = FUNC_6(VAR_7);
  VAR_13.num_heads = VAR_10;


  VAR_16 = FUNC_12(FUNC_10(&VAR_13), (u32)65535);



  if (!FUNC_8(&VAR_13) ||
      !FUNC_7(&VAR_13) ||
      !FUNC_9(&VAR_13) ||
      (VAR_7->mode_info.disp_priority == 2)) {
   FUNC_1("force priority to high\n");
  }


  if (VAR_7->pm.dpm_enabled) {
   VAR_12.yclk =
    FUNC_4(VAR_7, 1) * 10;
   VAR_12.sclk =
    FUNC_5(VAR_7, 1) * 10;
  } else {
   VAR_12.yclk = VAR_7->pm.current_mclk * 10;
   VAR_12.sclk = VAR_7->pm.current_sclk * 10;
  }

  VAR_12.disp_clk = VAR_11->clock;
  VAR_12.src_width = VAR_11->crtc_hdisplay;
  VAR_12.active_time = VAR_14;
  VAR_12.blank_time = VAR_15 - VAR_12.active_time;
  VAR_12.interlaced = 0;
  if (VAR_11->flags & VAR_3)
   VAR_12.interlaced = 1;
  VAR_12.vsc = VAR_8->vsc;
  VAR_12.vtaps = 1;
  if (VAR_8->rmx_type != VAR_4)
   VAR_12.vtaps = 2;
  VAR_12.bytes_per_pixel = 4;
  VAR_12.lb_size = VAR_9;
  VAR_12.dram_channels = FUNC_6(VAR_7);
  VAR_12.num_heads = VAR_10;


  VAR_17 = FUNC_12(FUNC_10(&VAR_12), (u32)65535);



  if (!FUNC_8(&VAR_12) ||
      !FUNC_7(&VAR_12) ||
      !FUNC_9(&VAR_12) ||
      (VAR_7->mode_info.disp_priority == 2)) {
   FUNC_1("force priority to high\n");
  }
  VAR_20 = FUNC_0(VAR_9, VAR_11->crtc_hdisplay);
 }


 VAR_19 = FUNC_2(VAR_6 + VAR_8->crtc_offset);
 VAR_18 = VAR_19;
 VAR_18 &= ~(3 << VAR_2);
 VAR_18 |= (1 << VAR_2);
 FUNC_3(VAR_6 + VAR_8->crtc_offset, VAR_18);
 FUNC_3(VAR_5 + VAR_8->crtc_offset,
        ((VAR_16 << VAR_1) |
  (VAR_15 << VAR_0)));

 VAR_18 = FUNC_2(VAR_6 + VAR_8->crtc_offset);
 VAR_18 &= ~(3 << VAR_2);
 VAR_18 |= (2 << VAR_2);
 FUNC_3(VAR_6 + VAR_8->crtc_offset, VAR_18);
 FUNC_3(VAR_5 + VAR_8->crtc_offset,
        ((VAR_17 << VAR_1) |
  (VAR_15 << VAR_0)));

 FUNC_3(VAR_6 + VAR_8->crtc_offset, VAR_19);


 VAR_8->line_time = VAR_15;
 VAR_8->wm_high = VAR_16;
 VAR_8->wm_low = VAR_17;

 VAR_8->lb_vblank_lead_lines = VAR_20;
}
