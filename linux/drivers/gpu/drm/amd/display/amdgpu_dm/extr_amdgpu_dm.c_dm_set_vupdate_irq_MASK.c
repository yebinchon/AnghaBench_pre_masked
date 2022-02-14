
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_crtc {TYPE_1__* dev; } ;
struct TYPE_4__ {int dc; } ;
struct amdgpu_device {TYPE_2__ dm; } ;
struct amdgpu_crtc {int otg_inst; int crtc_id; } ;
typedef enum dc_irq_source { ____Placeholder_dc_irq_source } dc_irq_source ;
struct TYPE_3__ {struct amdgpu_device* dev_private; } ;


 int FUNC_0 (char*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int,int) ;
 struct amdgpu_crtc* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static inline int FUNC_3(struct drm_crtc *VAR_2, bool VAR_3)
{
 enum dc_irq_source VAR_4;
 struct amdgpu_crtc *VAR_5 = FUNC_2(VAR_2);
 struct amdgpu_device *VAR_6 = VAR_2->dev->dev_private;
 int VAR_7;

 VAR_4 = VAR_1 + VAR_5->otg_inst;

 VAR_7 = FUNC_1(VAR_6->dm.dc, VAR_4, VAR_3) ? 0 : -VAR_0;

 FUNC_0("crtc %d - vupdate irq %sabling: r=%d\n",
    VAR_5->crtc_id, VAR_3 ? "en" : "dis", VAR_7);
 return VAR_7;
}
