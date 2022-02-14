
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunxi_engine {TYPE_1__* ops; } ;
struct sun4i_tcon {int regs; struct sun4i_crtc* crtc; struct drm_device* drm; } ;
struct sun4i_crtc {int crtc; struct sunxi_engine* engine; } ;
struct drm_device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* vblank_quirk ) (struct sunxi_engine*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (int ,int ,unsigned int,int ) ;
 int FUNC_4 (struct sunxi_engine*) ;
 int FUNC_5 (struct drm_device*,struct sun4i_crtc*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_4, void *VAR_5)
{
 struct sun4i_tcon *VAR_6 = VAR_5;
 struct drm_device *VAR_7 = VAR_6->drm;
 struct sun4i_crtc *VAR_8 = VAR_6->crtc;
 struct sunxi_engine *VAR_9 = VAR_8->engine;
 unsigned int VAR_10;

 FUNC_2(VAR_6->regs, VAR_2, &VAR_10);

 if (!(VAR_10 & (FUNC_0(0) |
   FUNC_0(1) |
   VAR_3)))
  return VAR_1;

 FUNC_1(&VAR_8->crtc);
 FUNC_5(VAR_7, VAR_8);


 FUNC_3(VAR_6->regs, VAR_2,
      FUNC_0(0) |
      FUNC_0(1) |
      VAR_3,
      0);

 if (VAR_9->ops->vblank_quirk)
  VAR_9->ops->vblank_quirk(VAR_9);

 return VAR_0;
}
