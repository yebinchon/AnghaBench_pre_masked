
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int flags; int queue; } ;
struct TYPE_4__ {TYPE_1__ reset; } ;
struct drm_i915_private {TYPE_2__ gt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int ,char*,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int
FUNC_3(void *VAR_2, u64 VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_2;


 FUNC_2(VAR_4->gt.reset.queue,
     !FUNC_1(VAR_1, &VAR_4->gt.reset.flags));

 FUNC_0(&VAR_4->gt, VAR_3, VAR_0,
         "Manually set wedged engine mask = %llx", VAR_3);
 return 0;
}
