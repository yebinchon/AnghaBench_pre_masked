
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct nv04_mode_state {void* sel_clk; void* pllsel; struct nv04_crtc_reg* crtc_reg; } ;
struct nv04_crtc_reg {int fp_debug_0; void** ctv_regs; void* ramdac_a34; void* ramdac_a24; void* ramdac_a20; void* ramdac_8c0; void* fp_margin_color; void* fp_debug_2; void* fp_debug_1; void* fp_control; void** dither_regs; void* dither; void** fp_horiz_regs; void** fp_vert_regs; void* tv_hsync_delay2; void* tv_hsync_delay; void* tv_hskew; void* tv_htotal; void* tv_vsync_delay; void* tv_vskew; void* tv_vtotal; void* tv_setup; void* ramdac_634; void* ramdac_630; void* ramdac_gen_ctrl; int pllvals; void* nv10_cursync; } ;
struct TYPE_4__ {scalar_t__ family; int chipset; } ;
struct TYPE_5__ {TYPE_1__ info; } ;
struct TYPE_6__ {TYPE_2__ device; } ;
struct nouveau_drm {TYPE_3__ client; } ;
struct drm_device {int dummy; } ;


 void* FUNC_0 (struct drm_device*,int,scalar_t__) ;
 int FUNC_1 (struct drm_device*,int ,scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*,int ,int *) ;
 scalar_t__ FUNC_4 (struct drm_device*) ;
 scalar_t__ FUNC_5 (struct drm_device*) ;

__attribute__((used)) static void
FUNC_6(struct drm_device *VAR_34, int VAR_35,
       struct nv04_mode_state *VAR_36)
{
 struct nouveau_drm *VAR_37 = FUNC_2(VAR_34);
 struct nv04_crtc_reg *VAR_38 = &VAR_36->crtc_reg[VAR_35];
 int VAR_39;

 if (VAR_37->client.device.info.family >= VAR_0)
  VAR_38->nv10_cursync = FUNC_0(VAR_34, VAR_35, VAR_31);

 FUNC_3(VAR_34, VAR_35 ? VAR_33 : VAR_32, &VAR_38->pllvals);
 VAR_36->pllsel = FUNC_0(VAR_34, 0, VAR_19);
 if (FUNC_5(VAR_34))
  VAR_36->sel_clk = FUNC_0(VAR_34, 0, VAR_20);
 if (VAR_37->client.device.info.chipset == 0x11)
  VAR_38->dither = FUNC_0(VAR_34, VAR_35, VAR_29);

 VAR_38->ramdac_gen_ctrl = FUNC_0(VAR_34, VAR_35, VAR_18);

 if (FUNC_4(VAR_34))
  VAR_38->ramdac_630 = FUNC_0(VAR_34, VAR_35, VAR_2);
 if (VAR_37->client.device.info.chipset >= 0x30)
  VAR_38->ramdac_634 = FUNC_0(VAR_34, VAR_35, VAR_3);

 VAR_38->tv_setup = FUNC_0(VAR_34, VAR_35, VAR_25);
 VAR_38->tv_vtotal = FUNC_0(VAR_34, VAR_35, VAR_28);
 VAR_38->tv_vskew = FUNC_0(VAR_34, VAR_35, VAR_26);
 VAR_38->tv_vsync_delay = FUNC_0(VAR_34, VAR_35, VAR_27);
 VAR_38->tv_htotal = FUNC_0(VAR_34, VAR_35, VAR_24);
 VAR_38->tv_hskew = FUNC_0(VAR_34, VAR_35, VAR_21);
 VAR_38->tv_hsync_delay = FUNC_0(VAR_34, VAR_35, VAR_22);
 VAR_38->tv_hsync_delay2 = FUNC_0(VAR_34, VAR_35, VAR_23);

 for (VAR_39 = 0; VAR_39 < 7; VAR_39++) {
  uint32_t VAR_40 = VAR_17 + (VAR_39 * 4);
  VAR_38->fp_vert_regs[VAR_39] = FUNC_0(VAR_34, VAR_35, VAR_40);
  VAR_38->fp_horiz_regs[VAR_39] = FUNC_0(VAR_34, VAR_35, VAR_40 + 0x20);
 }

 if (FUNC_4(VAR_34)) {
  VAR_38->dither = FUNC_0(VAR_34, VAR_35, VAR_30);
  for (VAR_39 = 0; VAR_39 < 3; VAR_39++) {
   VAR_38->dither_regs[VAR_39] = FUNC_0(VAR_34, VAR_35, VAR_4 + VAR_39 * 4);
   VAR_38->dither_regs[VAR_39 + 3] = FUNC_0(VAR_34, VAR_35, VAR_5 + VAR_39 * 4);
  }
 }

 VAR_38->fp_control = FUNC_0(VAR_34, VAR_35, VAR_16);
 VAR_38->fp_debug_0 = FUNC_0(VAR_34, VAR_35, VAR_11);
 if (!FUNC_4(VAR_34) && VAR_35 == 0) {


  FUNC_1(VAR_34, 0, VAR_11, VAR_38->fp_debug_0 &
         ~VAR_12);
 }
 VAR_38->fp_debug_1 = FUNC_0(VAR_34, VAR_35, VAR_13);
 VAR_38->fp_debug_2 = FUNC_0(VAR_34, VAR_35, VAR_14);

 VAR_38->fp_margin_color = FUNC_0(VAR_34, VAR_35, VAR_15);

 if (FUNC_4(VAR_34))
  VAR_38->ramdac_8c0 = FUNC_0(VAR_34, VAR_35, VAR_6);

 if (VAR_37->client.device.info.family == VAR_1) {
  VAR_38->ramdac_a20 = FUNC_0(VAR_34, VAR_35, VAR_7);
  VAR_38->ramdac_a24 = FUNC_0(VAR_34, VAR_35, VAR_8);
  VAR_38->ramdac_a34 = FUNC_0(VAR_34, VAR_35, VAR_9);

  for (VAR_39 = 0; VAR_39 < 38; VAR_39++)
   VAR_38->ctv_regs[VAR_39] = FUNC_0(VAR_34, VAR_35,
        VAR_10 + 4*VAR_39);
 }
}
