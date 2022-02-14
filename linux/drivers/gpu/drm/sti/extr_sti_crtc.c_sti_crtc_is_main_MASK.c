
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_mixer {scalar_t__ id; } ;
struct drm_crtc {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct sti_mixer* FUNC_0 (struct drm_crtc*) ;

bool FUNC_1(struct drm_crtc *VAR_1)
{
 struct sti_mixer *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->id == VAR_0)
  return 1;

 return 0;
}
