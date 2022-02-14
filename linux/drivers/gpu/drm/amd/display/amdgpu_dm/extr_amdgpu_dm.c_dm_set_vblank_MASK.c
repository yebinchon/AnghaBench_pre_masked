
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_crtc {int state; TYPE_2__* dev; } ;
struct dm_crtc_state {int dummy; } ;
struct TYPE_3__ {int dc; } ;
struct amdgpu_device {TYPE_1__ dm; } ;
struct amdgpu_crtc {int otg_inst; } ;
typedef enum dc_irq_source { ____Placeholder_dc_irq_source } dc_irq_source ;
struct TYPE_4__ {struct amdgpu_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dm_crtc_state*) ;
 scalar_t__ FUNC_1 (int ,int,int) ;
 int FUNC_2 (struct drm_crtc*,int) ;
 struct amdgpu_crtc* FUNC_3 (struct drm_crtc*) ;
 struct dm_crtc_state* FUNC_4 (int ) ;

__attribute__((used)) static inline int FUNC_5(struct drm_crtc *VAR_2, bool VAR_3)
{
 enum dc_irq_source VAR_4;
 struct amdgpu_crtc *VAR_5 = FUNC_3(VAR_2);
 struct amdgpu_device *VAR_6 = VAR_2->dev->dev_private;
 struct dm_crtc_state *VAR_7 = FUNC_4(VAR_2->state);
 int VAR_8 = 0;

 if (VAR_3) {

  if (FUNC_0(VAR_7))
   VAR_8 = FUNC_2(VAR_2, 1);
 } else {

  VAR_8 = FUNC_2(VAR_2, 0);
 }

 if (VAR_8)
  return VAR_8;

 VAR_4 = VAR_1 + VAR_5->otg_inst;
 return FUNC_1(VAR_6->dm.dc, VAR_4, VAR_3) ? 0 : -VAR_0;
}
