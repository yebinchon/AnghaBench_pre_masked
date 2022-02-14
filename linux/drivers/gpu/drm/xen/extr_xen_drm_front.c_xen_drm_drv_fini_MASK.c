
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int be_alloc; } ;
struct xen_drm_front_info {int xb_dev; TYPE_1__ cfg; int dbuf_list; struct xen_drm_front_drm_info* drm_info; } ;
struct xen_drm_front_drm_info {struct drm_device* drm_dev; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct xen_drm_front_info*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct xen_drm_front_info *VAR_1)
{
 struct xen_drm_front_drm_info *VAR_2 = VAR_1->drm_info;
 struct drm_device *VAR_3;

 if (!VAR_2)
  return;

 VAR_3 = VAR_2->drm_dev;
 if (!VAR_3)
  return;


 if (FUNC_1(VAR_3))
  return;

 FUNC_4(VAR_3);
 FUNC_3(VAR_3);
 FUNC_2(VAR_3);

 VAR_1->drm_info = ((void*)0);

 FUNC_5(VAR_1);
 FUNC_0(&VAR_1->dbuf_list);






 if (!VAR_1->cfg.be_alloc)
  FUNC_6(VAR_1->xb_dev,
        VAR_0);
}
