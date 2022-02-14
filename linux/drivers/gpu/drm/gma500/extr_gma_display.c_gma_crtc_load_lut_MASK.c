
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct psb_offset {int palette; } ;
struct gma_crtc {size_t pipe; int* lut_adj; } ;
struct TYPE_4__ {TYPE_1__* pipe; } ;
struct drm_psb_private {TYPE_2__ regs; struct psb_offset* regmap; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;
struct drm_crtc {int gamma_size; int * gamma_store; int enabled; struct drm_device* dev; } ;
struct TYPE_3__ {int* palette; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct drm_device*,int) ;
 int FUNC_2 (struct drm_device*) ;
 struct gma_crtc* FUNC_3 (struct drm_crtc*) ;

void FUNC_4(struct drm_crtc *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct drm_psb_private *VAR_2 = VAR_1->dev_private;
 struct gma_crtc *VAR_3 = FUNC_3(VAR_0);
 const struct psb_offset *VAR_4 = &VAR_2->regmap[VAR_3->pipe];
 int VAR_5 = VAR_4->palette;
 u16 *VAR_6, *VAR_7, *VAR_8;
 int VAR_9;


 if (!VAR_0->enabled)
  return;

 VAR_6 = VAR_0->gamma_store;
 VAR_7 = VAR_6 + VAR_0->gamma_size;
 VAR_8 = VAR_7 + VAR_0->gamma_size;

 if (FUNC_1(VAR_1, 0)) {
  for (VAR_9 = 0; VAR_9 < 256; VAR_9++) {
   FUNC_0(VAR_5 + 4 * VAR_9,
      (((*VAR_6++ >> 8) + VAR_3->lut_adj[VAR_9]) << 16) |
      (((*VAR_7++ >> 8) + VAR_3->lut_adj[VAR_9]) << 8) |
      ((*VAR_8++ >> 8) + VAR_3->lut_adj[VAR_9]));
  }
  FUNC_2(VAR_1);
 } else {
  for (VAR_9 = 0; VAR_9 < 256; VAR_9++) {

   VAR_2->regs.pipe[0].palette[VAR_9] =
    (((*VAR_6++ >> 8) + VAR_3->lut_adj[VAR_9]) << 16) |
    (((*VAR_7++ >> 8) + VAR_3->lut_adj[VAR_9]) << 8) |
    ((*VAR_8++ >> 8) + VAR_3->lut_adj[VAR_9]);
  }

 }
}
