
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nv04_mode_state {struct nv04_crtc_reg* crtc_reg; } ;
struct nv04_crtc_reg {void* fb_start; int * CR58; void* crtc_cfg; void* cursor_cfg; void* crtc_eng_ctrl; void* crtc_850; void* gpio_ext; void* crtc_834; void* crtc_830; } ;
struct TYPE_4__ {scalar_t__ family; } ;
struct TYPE_5__ {TYPE_1__ info; } ;
struct TYPE_6__ {TYPE_2__ device; } ;
struct nouveau_drm {TYPE_3__ client; } ;
struct drm_device {int dummy; } ;


 void* FUNC_0 (struct drm_device*,int,int ) ;
 int FUNC_1 (struct drm_device*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;
 scalar_t__ FUNC_3 (struct drm_device*) ;
 scalar_t__ FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*,int,struct nv04_crtc_reg*,int) ;

__attribute__((used)) static void
FUNC_6(struct drm_device *VAR_41, int VAR_42,
    struct nv04_mode_state *VAR_43)
{
 struct nouveau_drm *VAR_44 = FUNC_2(VAR_41);
 struct nv04_crtc_reg *VAR_45 = &VAR_43->crtc_reg[VAR_42];
 int VAR_46;

 FUNC_5(VAR_41, VAR_42, VAR_45, VAR_21);
 FUNC_5(VAR_41, VAR_42, VAR_45, VAR_24);
 FUNC_5(VAR_41, VAR_42, VAR_45, VAR_25);
 FUNC_5(VAR_41, VAR_42, VAR_45, VAR_22);
 FUNC_5(VAR_41, VAR_42, VAR_45, VAR_23);
 FUNC_5(VAR_41, VAR_42, VAR_45, VAR_19);
 FUNC_5(VAR_41, VAR_42, VAR_45, VAR_13);

 FUNC_5(VAR_41, VAR_42, VAR_45, VAR_15);
 FUNC_5(VAR_41, VAR_42, VAR_45, VAR_14);
 FUNC_5(VAR_41, VAR_42, VAR_45, VAR_0);

 if (VAR_44->client.device.info.family >= VAR_31)
  FUNC_5(VAR_41, VAR_42, VAR_45, VAR_2);

 if (VAR_44->client.device.info.family >= VAR_32)
  FUNC_5(VAR_41, VAR_42, VAR_45, 0x9f);

 FUNC_5(VAR_41, VAR_42, VAR_45, VAR_3);
 FUNC_5(VAR_41, VAR_42, VAR_45, VAR_16);
 FUNC_5(VAR_41, VAR_42, VAR_45, VAR_17);
 FUNC_5(VAR_41, VAR_42, VAR_45, VAR_18);
 FUNC_5(VAR_41, VAR_42, VAR_45, VAR_20);

 if (VAR_44->client.device.info.family >= VAR_29) {
  VAR_45->crtc_830 = FUNC_0(VAR_41, VAR_42, VAR_33);
  VAR_45->crtc_834 = FUNC_0(VAR_41, VAR_42, VAR_34);

  if (VAR_44->client.device.info.family >= VAR_32)
   VAR_45->gpio_ext = FUNC_0(VAR_41, VAR_42, VAR_39);

  if (VAR_44->client.device.info.family == VAR_30)
   VAR_45->crtc_850 = FUNC_0(VAR_41, VAR_42, VAR_35);

  if (FUNC_4(VAR_41))
   VAR_45->crtc_eng_ctrl = FUNC_0(VAR_41, VAR_42, VAR_38);
  VAR_45->cursor_cfg = FUNC_0(VAR_41, VAR_42, VAR_37);
 }

 VAR_45->crtc_cfg = FUNC_0(VAR_41, VAR_42, VAR_36);

 FUNC_5(VAR_41, VAR_42, VAR_45, VAR_26);
 FUNC_5(VAR_41, VAR_42, VAR_45, VAR_27);
 if (VAR_44->client.device.info.family >= VAR_29) {
  FUNC_5(VAR_41, VAR_42, VAR_45, VAR_12);
  FUNC_5(VAR_41, VAR_42, VAR_45, VAR_11);
  FUNC_5(VAR_41, VAR_42, VAR_45, VAR_4);
  FUNC_5(VAR_41, VAR_42, VAR_45, VAR_28);
 }

 if (FUNC_3(VAR_41)) {
  FUNC_5(VAR_41, VAR_42, VAR_45, VAR_1);
  FUNC_5(VAR_41, VAR_42, VAR_45, VAR_5);
  FUNC_5(VAR_41, VAR_42, VAR_45, VAR_6);

  for (VAR_46 = 0; VAR_46 < 0x10; VAR_46++)
   VAR_45->CR58[VAR_46] = FUNC_1(VAR_41, VAR_42, VAR_46);
  FUNC_5(VAR_41, VAR_42, VAR_45, VAR_7);
  FUNC_5(VAR_41, VAR_42, VAR_45, VAR_8);

  FUNC_5(VAR_41, VAR_42, VAR_45, VAR_9);
  FUNC_5(VAR_41, VAR_42, VAR_45, VAR_10);
 }

 VAR_45->fb_start = FUNC_0(VAR_41, VAR_42, VAR_40);
}
