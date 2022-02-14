
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mdp5_crtc {int vblank; int pending; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_2__ {int base; } ;


 int FUNC_0 (int ,int *) ;
 TYPE_1__* FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (int *,int *) ;
 struct mdp5_crtc* FUNC_3 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_4(struct drm_crtc *VAR_0, uint32_t VAR_1)
{
 struct mdp5_crtc *VAR_2 = FUNC_3(VAR_0);

 FUNC_0(VAR_1, &VAR_2->pending);
 FUNC_2(&FUNC_1(VAR_0)->base, &VAR_2->vblank);
}
