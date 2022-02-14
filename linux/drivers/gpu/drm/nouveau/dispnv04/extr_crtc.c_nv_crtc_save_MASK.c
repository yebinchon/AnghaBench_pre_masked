
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nv04_mode_state {int sel_clk; int pllsel; struct nv04_crtc_reg* crtc_reg; } ;
struct nv04_crtc_reg {int gpio_ext; int * CRTC; } ;
struct nouveau_crtc {size_t index; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct TYPE_2__ {struct nv04_mode_state saved_reg; struct nv04_mode_state mode_reg; } ;


 int FUNC_0 (struct drm_device*,size_t) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nouveau_crtc* FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (struct drm_device*,size_t,struct nv04_mode_state*) ;
 TYPE_1__* FUNC_3 (struct drm_device*) ;
 scalar_t__ FUNC_4 (struct drm_device*) ;

__attribute__((used)) static void FUNC_5(struct drm_crtc *VAR_4)
{
 struct nouveau_crtc *VAR_5 = FUNC_1(VAR_4);
 struct drm_device *VAR_6 = VAR_4->dev;
 struct nv04_mode_state *VAR_7 = &FUNC_3(VAR_6)->mode_reg;
 struct nv04_crtc_reg *VAR_8 = &VAR_7->crtc_reg[VAR_5->index];
 struct nv04_mode_state *VAR_9 = &FUNC_3(VAR_6)->saved_reg;
 struct nv04_crtc_reg *VAR_10 = &VAR_9->crtc_reg[VAR_5->index];

 if (FUNC_4(VAR_4->dev))
  FUNC_0(VAR_4->dev, VAR_5->index);

 FUNC_2(VAR_4->dev, VAR_5->index, VAR_9);


 VAR_7->sel_clk = VAR_9->sel_clk & ~(0x5 << 16);
 VAR_8->CRTC[VAR_0] = VAR_10->CRTC[VAR_0];
 VAR_7->pllsel = VAR_9->pllsel & ~(VAR_2 | VAR_3 | VAR_1);
 VAR_8->gpio_ext = VAR_10->gpio_ext;
}
