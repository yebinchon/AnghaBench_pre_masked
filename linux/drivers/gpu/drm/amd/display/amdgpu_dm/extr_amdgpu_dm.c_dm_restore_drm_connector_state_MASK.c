
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_device {int dummy; } ;
struct drm_connector {TYPE_3__* encoder; int state; } ;
struct dm_crtc_state {TYPE_2__* stream; } ;
struct amdgpu_dm_connector {scalar_t__ dc_sink; int base; } ;
struct TYPE_4__ {int state; } ;
struct amdgpu_crtc {TYPE_1__ base; } ;
struct TYPE_6__ {int crtc; } ;
struct TYPE_5__ {scalar_t__ sink; } ;


 int FUNC_0 (int *) ;
 struct amdgpu_crtc* FUNC_1 (int ) ;
 struct amdgpu_dm_connector* FUNC_2 (struct drm_connector*) ;
 struct dm_crtc_state* FUNC_3 (int ) ;

void FUNC_4(struct drm_device *VAR_0,
        struct drm_connector *VAR_1)
{
 struct amdgpu_dm_connector *VAR_2 = FUNC_2(VAR_1);
 struct amdgpu_crtc *VAR_3;
 struct dm_crtc_state *VAR_4;

 if (!VAR_2->dc_sink || !VAR_1->state || !VAR_1->encoder)
  return;

 VAR_3 = FUNC_1(VAR_1->encoder->crtc);
 if (!VAR_3)
  return;

 VAR_4 = FUNC_3(VAR_3->base.state);
 if (!VAR_4->stream)
  return;






 if (VAR_4->stream->sink != VAR_2->dc_sink)
  FUNC_0(&VAR_2->base);
}
