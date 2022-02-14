
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct komeda_dev {int aclk; } ;
struct TYPE_5__ {int crtc_clock; } ;
struct TYPE_6__ {TYPE_2__ adjusted_mode; struct drm_crtc* crtc; } ;
struct komeda_crtc_state {TYPE_3__ base; } ;
struct drm_crtc {TYPE_1__* dev; } ;
struct TYPE_4__ {struct komeda_dev* dev_private; } ;


 unsigned long FUNC_0 (int ,unsigned long) ;
 unsigned long FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (struct drm_crtc*) ;

unsigned long FUNC_3(struct komeda_crtc_state *VAR_0)
{
 struct drm_crtc *VAR_1 = VAR_0->base.crtc;
 struct komeda_dev *VAR_2 = VAR_1->dev->dev_private;
 unsigned long VAR_3 = VAR_0->base.adjusted_mode.crtc_clock * 1000;
 unsigned long VAR_4;

 VAR_4 = FUNC_1(FUNC_2(VAR_1), VAR_3);

 return FUNC_0(VAR_2->aclk, VAR_4);
}
