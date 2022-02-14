
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_encoder {TYPE_1__* audio; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_2__ {int (* dpms ) (struct drm_encoder*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct drm_encoder*,int) ;
 struct radeon_encoder* FUNC_1 (struct drm_encoder*) ;

void FUNC_2(struct drm_encoder *VAR_1, int VAR_2)
{
 struct radeon_encoder *VAR_3 = FUNC_1(VAR_1);

 if (VAR_3->audio && VAR_3->audio->dpms)
  VAR_3->audio->dpms(VAR_1, VAR_2 == VAR_0);
}
