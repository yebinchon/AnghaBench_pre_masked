
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nv04_crtc_reg {int ramdac_634; } ;
struct nouveau_crtc {size_t index; int sharpness; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct TYPE_3__ {struct nv04_crtc_reg* crtc_reg; } ;
struct TYPE_4__ {TYPE_1__ mode_reg; } ;


 int FUNC_0 (struct drm_device*,size_t,int ,int) ;
 int VAR_0 ;
 struct nouveau_crtc* FUNC_1 (struct drm_crtc*) ;
 TYPE_2__* FUNC_2 (struct drm_device*) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_1, int VAR_2)
{
 struct nouveau_crtc *VAR_3 = FUNC_1(VAR_1);
 struct drm_device *VAR_4 = VAR_1->dev;
 struct nv04_crtc_reg *VAR_5 = &FUNC_2(VAR_4)->mode_reg.crtc_reg[VAR_3->index];

 VAR_3->sharpness = VAR_2;
 if (VAR_2 < 0)
  VAR_2 += 0x40;
 VAR_5->ramdac_634 = VAR_2;
 FUNC_0(VAR_1->dev, VAR_3->index, VAR_0, VAR_5->ramdac_634);
}
