
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_resource {int dummy; } ;
struct vmw_private {struct vmw_overlay* overlay_priv; } ;
struct vmw_overlay {int mutex; } ;
struct vmw_buffer_object {int dummy; } ;
struct ttm_object_file {int dummy; } ;
struct drm_vmw_control_stream_arg {int handle; int stream_id; int enabled; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {struct ttm_object_file* tfile; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vmw_buffer_object**) ;
 TYPE_1__* FUNC_3 (struct drm_file*) ;
 int FUNC_4 (struct vmw_private*) ;
 int FUNC_5 (struct vmw_private*,int ,int,int) ;
 int FUNC_6 (struct vmw_private*,struct vmw_buffer_object*,struct drm_vmw_control_stream_arg*,int) ;
 struct vmw_private* FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct vmw_resource**) ;
 int FUNC_9 (struct ttm_object_file*,int ,struct vmw_buffer_object**,int *) ;
 int FUNC_10 (struct vmw_private*,struct ttm_object_file*,int *,struct vmw_resource**) ;

int FUNC_11(struct drm_device *VAR_1, void *VAR_2,
        struct drm_file *VAR_3)
{
 struct ttm_object_file *VAR_4 = FUNC_3(VAR_3)->tfile;
 struct vmw_private *VAR_5 = FUNC_7(VAR_1);
 struct vmw_overlay *VAR_6 = VAR_5->overlay_priv;
 struct drm_vmw_control_stream_arg *VAR_7 =
     (struct drm_vmw_control_stream_arg *)VAR_2;
 struct vmw_buffer_object *VAR_8;
 struct vmw_resource *VAR_9;
 int VAR_10;

 if (!FUNC_4(VAR_5))
  return -VAR_0;

 VAR_10 = FUNC_10(VAR_5, VAR_4, &VAR_7->stream_id, &VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_0(&VAR_6->mutex);

 if (!VAR_7->enabled) {
  VAR_10 = FUNC_5(VAR_5, VAR_7->stream_id, 0, 1);
  goto out_unlock;
 }

 VAR_10 = FUNC_9(VAR_4, VAR_7->handle, &VAR_8, ((void*)0));
 if (VAR_10)
  goto out_unlock;

 VAR_10 = FUNC_6(VAR_5, VAR_8, VAR_7, 1);

 FUNC_2(&VAR_8);

out_unlock:
 FUNC_1(&VAR_6->mutex);
 FUNC_8(&VAR_9);

 return VAR_10;
}
