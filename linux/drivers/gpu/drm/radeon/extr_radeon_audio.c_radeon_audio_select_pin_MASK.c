
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_encoder {TYPE_1__* audio; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_2__ {int (* select_pin ) (struct drm_encoder*) ;} ;


 int FUNC_0 (struct drm_encoder*) ;
 struct radeon_encoder* FUNC_1 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_2(struct drm_encoder *VAR_0)
{
 struct radeon_encoder *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->audio && VAR_1->audio->select_pin)
  VAR_1->audio->select_pin(VAR_0);
}
