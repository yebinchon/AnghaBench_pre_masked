
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_drm_private {int omaprev; int dispc; TYPE_1__* dispc_ops; } ;
struct drm_device {struct omap_drm_private* dev_private; } ;
struct drm_atomic_state {struct drm_device* dev; } ;
struct TYPE_2__ {int (* runtime_put ) (int ) ;int (* runtime_get ) (int ) ;} ;


 int FUNC_0 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_1 (struct drm_atomic_state*) ;
 int FUNC_2 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_3 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_4 (struct drm_device*,struct drm_atomic_state*,int ) ;
 int FUNC_5 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct drm_atomic_state *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct omap_drm_private *VAR_2 = VAR_1->dev_private;

 VAR_2->dispc_ops->runtime_get(VAR_2->dispc);


 FUNC_2(VAR_1, VAR_0);

 if (VAR_2->omaprev != 0x3430) {
  FUNC_3(VAR_1, VAR_0);
  FUNC_5(VAR_1, VAR_0);

  FUNC_4(VAR_1, VAR_0, 0);

  FUNC_1(VAR_0);
 } else {





  FUNC_4(VAR_1, VAR_0, 0);

  FUNC_3(VAR_1, VAR_0);

  FUNC_1(VAR_0);
 }





 FUNC_5(VAR_1, VAR_0);

 FUNC_0(VAR_1, VAR_0);

 VAR_2->dispc_ops->runtime_put(VAR_2->dispc);
}
