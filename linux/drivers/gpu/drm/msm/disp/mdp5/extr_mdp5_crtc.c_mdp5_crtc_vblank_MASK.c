
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int irqmask; } ;
struct mdp5_crtc {TYPE_1__ vblank; } ;
struct drm_crtc {int dummy; } ;


 struct mdp5_crtc* FUNC_0 (struct drm_crtc*) ;

uint32_t FUNC_1(struct drm_crtc *VAR_0)
{
 struct mdp5_crtc *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->vblank.irqmask;
}
