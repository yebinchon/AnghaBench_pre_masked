
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long reserved; } ;
struct i915_ggtt {TYPE_1__ vm; } ;
struct drm_mm_node {int dummy; } ;


 int FUNC_0 (char*,unsigned long,unsigned long,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,struct drm_mm_node*,unsigned long,unsigned long,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct i915_ggtt *VAR_2,
        struct drm_mm_node *VAR_3,
        unsigned long VAR_4, unsigned long VAR_5)
{
 unsigned long VAR_6 = VAR_5 - VAR_4;
 int VAR_7;

 if (VAR_4 >= VAR_5)
  return -VAR_0;

 FUNC_0("balloon space: range [ 0x%lx - 0x%lx ] %lu KiB.\n",
   VAR_4, VAR_5, VAR_6 / 1024);
 VAR_7 = FUNC_1(&VAR_2->vm, VAR_3,
       VAR_6, VAR_4, VAR_1,
       0);
 if (!VAR_7)
  VAR_2->vm.reserved += VAR_6;

 return VAR_7;
}
