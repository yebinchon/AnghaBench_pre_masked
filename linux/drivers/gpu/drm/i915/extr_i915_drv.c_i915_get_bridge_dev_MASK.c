
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* pdev; } ;
struct drm_i915_private {int bridge_dev; TYPE_2__ drm; } ;
struct TYPE_3__ {int bus; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct drm_i915_private *VAR_0)
{
 int VAR_1 = FUNC_2(VAR_0->drm.pdev->bus);

 VAR_0->bridge_dev =
  FUNC_3(VAR_1, 0, FUNC_1(0, 0));
 if (!VAR_0->bridge_dev) {
  FUNC_0("bridge device not found\n");
  return -1;
 }
 return 0;
}
