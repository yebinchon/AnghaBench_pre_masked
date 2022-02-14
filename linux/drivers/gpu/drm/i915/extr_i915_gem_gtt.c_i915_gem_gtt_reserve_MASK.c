
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u64 ;
struct i915_address_space {int mm; TYPE_3__* i915; int total; } ;
struct drm_mm_node {unsigned long color; void* start; void* size; } ;
struct TYPE_5__ {TYPE_1__* alias; } ;
struct TYPE_6__ {TYPE_2__ ggtt; } ;
struct TYPE_4__ {struct i915_address_space vm; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*,int ) ;
 unsigned int VAR_3 ;
 int FUNC_2 (struct drm_mm_node*) ;
 int FUNC_3 (int *,struct drm_mm_node*) ;
 int FUNC_4 (struct i915_address_space*,struct drm_mm_node*,unsigned int) ;
 int FUNC_5 (void*,void*,int ) ;

int FUNC_6(struct i915_address_space *VAR_4,
    struct drm_mm_node *VAR_5,
    u64 VAR_6, u64 VAR_7, unsigned long VAR_8,
    unsigned int VAR_9)
{
 int VAR_10;

 FUNC_0(!VAR_6);
 FUNC_0(!FUNC_1(VAR_6, VAR_2));
 FUNC_0(!FUNC_1(VAR_7, VAR_1));
 FUNC_0(FUNC_5(VAR_7, VAR_6, VAR_4->total));
 FUNC_0(VAR_4 == &VAR_4->i915->ggtt.alias->vm);
 FUNC_0(FUNC_2(VAR_5));

 VAR_5->size = VAR_6;
 VAR_5->start = VAR_7;
 VAR_5->color = VAR_8;

 VAR_10 = FUNC_3(&VAR_4->mm, VAR_5);
 if (VAR_10 != -VAR_0)
  return VAR_10;

 if (VAR_9 & VAR_3)
  return -VAR_0;

 VAR_10 = FUNC_4(VAR_4, VAR_5, VAR_9);
 if (VAR_10 == 0)
  VAR_10 = FUNC_3(&VAR_4->mm, VAR_5);

 return VAR_10;
}
