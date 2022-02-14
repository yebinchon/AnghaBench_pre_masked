
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_encoder {TYPE_2__* audio; } ;
struct radeon_device {int dummy; } ;
struct r600_audio_pin {int dummy; } ;
struct drm_encoder {TYPE_1__* dev; } ;
struct TYPE_4__ {struct r600_audio_pin* (* get_pin ) (struct radeon_device*) ;} ;
struct TYPE_3__ {struct radeon_device* dev_private; } ;


 struct r600_audio_pin* FUNC_0 (struct radeon_device*) ;
 struct radeon_encoder* FUNC_1 (struct drm_encoder*) ;

struct r600_audio_pin* FUNC_2(struct drm_encoder *VAR_0)
{
 struct radeon_device *VAR_1 = VAR_0->dev->dev_private;
 struct radeon_encoder *VAR_2 = FUNC_1(VAR_0);

 if (VAR_2->audio && VAR_2->audio->get_pin)
  return VAR_2->audio->get_pin(VAR_1);

 return ((void*)0);
}
