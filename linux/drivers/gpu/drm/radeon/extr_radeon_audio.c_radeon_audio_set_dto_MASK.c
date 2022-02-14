
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_encoder {TYPE_2__* audio; } ;
struct radeon_device {int dummy; } ;
struct radeon_crtc {int dummy; } ;
struct drm_encoder {int crtc; TYPE_1__* dev; } ;
struct TYPE_4__ {int (* set_dto ) (struct radeon_device*,struct radeon_crtc*,unsigned int) ;} ;
struct TYPE_3__ {struct radeon_device* dev_private; } ;


 int FUNC_0 (struct radeon_device*,struct radeon_crtc*,unsigned int) ;
 struct radeon_crtc* FUNC_1 (int ) ;
 struct radeon_encoder* FUNC_2 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_3(struct drm_encoder *VAR_0, unsigned int VAR_1)
{
 struct radeon_device *VAR_2 = VAR_0->dev->dev_private;
 struct radeon_encoder *VAR_3 = FUNC_2(VAR_0);
 struct radeon_crtc *VAR_4 = FUNC_1(VAR_0->crtc);

 if (VAR_3->audio && VAR_3->audio->set_dto)
  VAR_3->audio->set_dto(VAR_2, VAR_4, VAR_1);
}
