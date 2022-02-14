
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ be_alloc; } ;
struct xen_drm_front_info {int xb_dev; TYPE_1__ cfg; } ;
struct xen_drm_front_drm_info {struct xen_drm_front_info* front_info; struct xen_drm_front_drm_info* dev_private; } ;
struct drm_device {struct xen_drm_front_info* front_info; struct drm_device* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct xen_drm_front_drm_info*) ;
 int FUNC_1 (struct xen_drm_front_drm_info*) ;
 int FUNC_2 (struct xen_drm_front_drm_info*) ;
 int FUNC_3 (struct xen_drm_front_drm_info*) ;
 int FUNC_4 (struct xen_drm_front_drm_info*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct drm_device *VAR_1)
{
 struct xen_drm_front_drm_info *VAR_2 = VAR_1->dev_private;
 struct xen_drm_front_info *VAR_3 = VAR_2->front_info;

 FUNC_4(VAR_2);

 FUNC_0(VAR_1);
 FUNC_2(VAR_1);

 FUNC_1(VAR_1);
 FUNC_3(VAR_1);

 if (VAR_3->cfg.be_alloc)
  FUNC_5(VAR_3->xb_dev,
        VAR_0);

 FUNC_3(VAR_2);
}
