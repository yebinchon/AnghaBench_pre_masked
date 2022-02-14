
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rchan {size_t subbuf_size; } ;
struct TYPE_9__ {struct rchan* channel; int lock; } ;
struct intel_guc_log {TYPE_4__ relay; TYPE_1__* vma; } ;
struct intel_guc {int dummy; } ;
struct TYPE_8__ {TYPE_2__* primary; } ;
struct drm_i915_private {TYPE_3__ drm; } ;
struct TYPE_10__ {struct drm_i915_private* i915; } ;
struct TYPE_7__ {int debugfs_root; } ;
struct TYPE_6__ {size_t size; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 TYPE_5__* FUNC_2 (struct intel_guc*) ;
 int FUNC_3 (int *) ;
 struct intel_guc* FUNC_4 (struct intel_guc_log*) ;
 int VAR_1 ;
 struct rchan* FUNC_5 (char*,int ,size_t,size_t,int *,struct drm_i915_private*) ;

__attribute__((used)) static int FUNC_6(struct intel_guc_log *VAR_2)
{
 struct intel_guc *VAR_3 = FUNC_4(VAR_2);
 struct drm_i915_private *VAR_4 = FUNC_2(VAR_3)->i915;
 struct rchan *VAR_5;
 size_t VAR_6, VAR_7;
 int VAR_8;

 FUNC_3(&VAR_2->relay.lock);
 FUNC_1(!VAR_2->vma);


 VAR_7 = VAR_2->vma->size;







 VAR_6 = 8;

 VAR_5 = FUNC_5("guc_log",
     VAR_4->drm.primary->debugfs_root,
     VAR_7, VAR_6,
     &VAR_1, VAR_4);
 if (!VAR_5) {
  FUNC_0("Couldn't create relay chan for GuC logging\n");

  VAR_8 = -VAR_0;
  return VAR_8;
 }

 FUNC_1(VAR_5->subbuf_size < VAR_7);
 VAR_2->relay.channel = VAR_5;

 return 0;
}
