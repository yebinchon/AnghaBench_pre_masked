
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xen_drm_front_drm_info {TYPE_1__* front_info; } ;
struct drm_gem_object {TYPE_2__* dev; } ;
struct TYPE_4__ {struct xen_drm_front_drm_info* dev_private; } ;
struct TYPE_3__ {int dbuf_list; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (struct drm_gem_object*) ;
 int FUNC_5 (struct drm_gem_object*) ;

__attribute__((used)) static void FUNC_6(struct drm_gem_object *VAR_0)
{
 struct xen_drm_front_drm_info *VAR_1 = VAR_0->dev->dev_private;
 int VAR_2;

 if (FUNC_1(VAR_0->dev, &VAR_2)) {
  FUNC_3(VAR_1->front_info,
        FUNC_4(VAR_0));
  FUNC_2(VAR_2);
 } else {
  FUNC_0(&VAR_1->front_info->dbuf_list,
     FUNC_4(VAR_0));
 }

 FUNC_5(VAR_0);
}
