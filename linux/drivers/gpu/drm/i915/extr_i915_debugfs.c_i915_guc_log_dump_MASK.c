
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct seq_file {struct drm_info_node* private; } ;
struct drm_info_node {TYPE_1__* info_ent; } ;
struct TYPE_10__ {TYPE_2__* vma; } ;
struct TYPE_11__ {TYPE_3__ log; } ;
struct TYPE_12__ {TYPE_4__ guc; struct drm_i915_gem_object* load_err_log; } ;
struct TYPE_13__ {TYPE_5__ uc; } ;
struct drm_i915_private {TYPE_6__ gt; } ;
struct TYPE_14__ {int size; } ;
struct drm_i915_gem_object {TYPE_7__ base; } ;
struct TYPE_9__ {struct drm_i915_gem_object* obj; } ;
struct TYPE_8__ {int data; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (struct drm_i915_gem_object*,int ) ;
 int FUNC_5 (struct drm_i915_gem_object*) ;
 struct drm_i915_private* FUNC_6 (struct drm_info_node*) ;
 int FUNC_7 (struct seq_file*,char*,int ,int ,int ,int ) ;
 int FUNC_8 (struct seq_file*,char) ;
 int FUNC_9 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_10(struct seq_file *VAR_2, void *VAR_3)
{
 struct drm_info_node *VAR_4 = VAR_2->private;
 struct drm_i915_private *VAR_5 = FUNC_6(VAR_4);
 bool VAR_6 = !!VAR_4->info_ent->data;
 struct drm_i915_gem_object *VAR_7 = ((void*)0);
 u32 *VAR_8;
 int VAR_9 = 0;

 if (!FUNC_1(VAR_5))
  return -VAR_0;

 if (VAR_6)
  VAR_7 = VAR_5->gt.uc.load_err_log;
 else if (VAR_5->gt.uc.guc.log.vma)
  VAR_7 = VAR_5->gt.uc.guc.log.vma->obj;

 if (!VAR_7)
  return 0;

 VAR_8 = FUNC_4(VAR_7, VAR_1);
 if (FUNC_2(VAR_8)) {
  FUNC_0("Failed to pin object\n");
  FUNC_9(VAR_2, "(log data unaccessible)\n");
  return FUNC_3(VAR_8);
 }

 for (VAR_9 = 0; VAR_9 < VAR_7->base.size / sizeof(u32); VAR_9 += 4)
  FUNC_7(VAR_2, "0x%08x 0x%08x 0x%08x 0x%08x\n",
      *(VAR_8 + VAR_9), *(VAR_8 + VAR_9 + 1),
      *(VAR_8 + VAR_9 + 2), *(VAR_8 + VAR_9 + 3));

 FUNC_8(VAR_2, '\n');

 FUNC_5(VAR_7);

 return 0;
}
