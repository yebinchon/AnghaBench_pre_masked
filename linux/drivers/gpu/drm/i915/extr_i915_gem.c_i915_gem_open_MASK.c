
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {int request_list; int lock; } ;
struct drm_i915_file_private {int bsd_engine; int hang_timestamp; TYPE_1__ mm; struct drm_file* file; struct drm_i915_private* dev_priv; } ;
struct drm_file {struct drm_i915_file_private* driver_priv; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_i915_private*,struct drm_file*) ;
 int VAR_2 ;
 int FUNC_3 (struct drm_i915_file_private*) ;
 struct drm_i915_file_private* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct drm_i915_private *VAR_3, struct drm_file *VAR_4)
{
 struct drm_i915_file_private *VAR_5;
 int VAR_6;

 FUNC_0("\n");

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_4->driver_priv = VAR_5;
 VAR_5->dev_priv = VAR_3;
 VAR_5->file = VAR_4;

 FUNC_5(&VAR_5->mm.lock);
 FUNC_1(&VAR_5->mm.request_list);

 VAR_5->bsd_engine = -1;
 VAR_5->hang_timestamp = VAR_2;

 VAR_6 = FUNC_2(VAR_3, VAR_4);
 if (VAR_6)
  FUNC_3(VAR_5);

 return VAR_6;
}
