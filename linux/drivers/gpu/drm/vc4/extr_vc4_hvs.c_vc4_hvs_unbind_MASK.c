
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc4_dev {TYPE_1__* hvs; } ;
struct drm_device {struct vc4_dev* dev_private; } ;
struct device {int dummy; } ;
struct TYPE_4__ {scalar_t__ allocated; } ;
struct TYPE_3__ {int lbm_mm; int dlist_mm; TYPE_2__ mitchell_netravali_filter; } ;


 struct drm_device* FUNC_0 (struct device*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0, struct device *VAR_1,
      void *VAR_2)
{
 struct drm_device *VAR_3 = FUNC_0(VAR_1);
 struct vc4_dev *VAR_4 = VAR_3->dev_private;

 if (VAR_4->hvs->mitchell_netravali_filter.allocated)
  FUNC_1(&VAR_4->hvs->mitchell_netravali_filter);

 FUNC_2(&VAR_4->hvs->dlist_mm);
 FUNC_2(&VAR_4->hvs->lbm_mm);

 VAR_4->hvs = ((void*)0);
}
