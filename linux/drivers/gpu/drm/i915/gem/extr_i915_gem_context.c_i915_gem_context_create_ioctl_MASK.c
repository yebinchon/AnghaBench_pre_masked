
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_i915_private {int gt; } ;
struct drm_i915_gem_context_create_ext {int flags; int ctx_id; int extensions; } ;
struct drm_file {int driver_priv; } ;
struct drm_device {int struct_mutex; } ;
struct create_ext {int ctx; int fpriv; } ;
struct TYPE_5__ {int has_logical_contexts; } ;
struct TYPE_4__ {int comm; } ;


 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (struct drm_i915_private*,int) ;
 int FUNC_10 (struct drm_device*) ;
 int FUNC_11 (int ,int ,int ,struct create_ext*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 struct drm_i915_private* FUNC_15 (struct drm_device*) ;
 int FUNC_16 (int ) ;

int FUNC_17(struct drm_device *VAR_8, void *VAR_9,
      struct drm_file *VAR_10)
{
 struct drm_i915_private *VAR_11 = FUNC_15(VAR_8);
 struct drm_i915_gem_context_create_ext *VAR_12 = VAR_9;
 struct create_ext VAR_13;
 int VAR_14;

 if (!FUNC_1(VAR_11)->has_logical_contexts)
  return -VAR_2;

 if (VAR_12->flags & VAR_3)
  return -VAR_0;

 VAR_14 = FUNC_12(&VAR_11->gt);
 if (VAR_14)
  return VAR_14;

 VAR_13.fpriv = VAR_10->driver_priv;
 if (FUNC_5(VAR_13.fpriv)) {
  FUNC_2("client %s[%d] banned from creating ctx\n",
     VAR_7->comm,
     FUNC_14(FUNC_8(VAR_7, VAR_5)));
  return -VAR_1;
 }

 VAR_14 = FUNC_10(VAR_8);
 if (VAR_14)
  return VAR_14;

 VAR_13.ctx = FUNC_9(VAR_11, VAR_12->flags);
 FUNC_13(&VAR_8->struct_mutex);
 if (FUNC_3(VAR_13.ctx))
  return FUNC_4(VAR_13.ctx);

 if (VAR_12->flags & VAR_4) {
  VAR_14 = FUNC_11(FUNC_16(VAR_12->extensions),
        VAR_6,
        FUNC_0(VAR_6),
        &VAR_13);
  if (VAR_14)
   goto err_ctx;
 }

 VAR_14 = FUNC_7(VAR_13.ctx, VAR_13.fpriv);
 if (VAR_14 < 0)
  goto err_ctx;

 VAR_12->ctx_id = VAR_14;
 FUNC_2("HW context %d created\n", VAR_12->ctx_id);

 return 0;

err_ctx:
 FUNC_6(VAR_13.ctx);
 return VAR_14;
}
