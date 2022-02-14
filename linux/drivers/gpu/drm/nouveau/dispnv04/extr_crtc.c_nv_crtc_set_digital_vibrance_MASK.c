
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nv04_crtc_reg {int* CRTC; } ;
struct nouveau_crtc {size_t index; int saturation; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct TYPE_3__ {struct nv04_crtc_reg* crtc_reg; } ;
struct TYPE_4__ {TYPE_1__ mode_reg; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct drm_crtc*,struct nv04_crtc_reg*,size_t) ;
 struct nouveau_crtc* FUNC_1 (struct drm_crtc*) ;
 TYPE_2__* FUNC_2 (struct drm_device*) ;
 scalar_t__ FUNC_3 (struct drm_device*) ;

__attribute__((used)) static void FUNC_4(struct drm_crtc *VAR_2, int VAR_3)
{
 struct nouveau_crtc *VAR_4 = FUNC_1(VAR_2);
 struct drm_device *VAR_5 = VAR_2->dev;
 struct nv04_crtc_reg *VAR_6 = &FUNC_2(VAR_5)->mode_reg.crtc_reg[VAR_4->index];

 VAR_6->CRTC[VAR_1] = VAR_4->saturation = VAR_3;
 if (VAR_4->saturation && FUNC_3(VAR_2->dev)) {
  VAR_6->CRTC[VAR_1] = 0x80;
  VAR_6->CRTC[VAR_0] = VAR_4->saturation << 2;
  FUNC_0(VAR_2, VAR_6, VAR_0);
 }
 FUNC_0(VAR_2, VAR_6, VAR_1);
}
