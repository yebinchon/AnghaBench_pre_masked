
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int list_handle; } ;
struct TYPE_4__ {int list_handle; int operation; int bo_number; } ;
union drm_amdgpu_bo_list {TYPE_1__ out; TYPE_2__ in; } ;
typedef int uint32_t ;
struct drm_file {struct amdgpu_fpriv* driver_priv; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_amdgpu_bo_list_entry {int dummy; } ;
struct amdgpu_fpriv {int bo_list_lock; int bo_list_handles; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_bo_list {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_bo_list*) ;
 int FUNC_1 (struct amdgpu_bo_list*) ;
 int FUNC_2 (TYPE_2__*,struct drm_amdgpu_bo_list_entry**) ;
 int FUNC_3 (struct amdgpu_device*,struct drm_file*,struct drm_amdgpu_bo_list_entry*,int ,struct amdgpu_bo_list**) ;
 int FUNC_4 (struct amdgpu_fpriv*,int) ;
 int FUNC_5 (struct amdgpu_bo_list*) ;
 int FUNC_6 (int *,struct amdgpu_bo_list*,int,int ,int ) ;
 struct amdgpu_bo_list* FUNC_7 (int *,struct amdgpu_bo_list*,int) ;
 int FUNC_8 (struct drm_amdgpu_bo_list_entry*) ;
 int FUNC_9 (union drm_amdgpu_bo_list*,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct drm_device *VAR_2, void *VAR_3,
    struct drm_file *VAR_4)
{
 struct amdgpu_device *VAR_5 = VAR_2->dev_private;
 struct amdgpu_fpriv *VAR_6 = VAR_4->driver_priv;
 union drm_amdgpu_bo_list *VAR_7 = VAR_3;
 uint32_t VAR_8 = VAR_7->in.list_handle;
 struct drm_amdgpu_bo_list_entry *VAR_9 = ((void*)0);
 struct amdgpu_bo_list *VAR_10, *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_2(&VAR_7->in, &VAR_9);
 if (VAR_12)
  return VAR_12;

 switch (VAR_7->in.operation) {
 case 130:
  VAR_12 = FUNC_3(VAR_5, VAR_4, VAR_9, VAR_7->in.bo_number,
       &VAR_10);
  if (VAR_12)
   goto error_free;

  FUNC_10(&VAR_6->bo_list_lock);
  VAR_12 = FUNC_6(&VAR_6->bo_list_handles, VAR_10, 1, 0, VAR_1);
  FUNC_11(&VAR_6->bo_list_lock);
  if (VAR_12 < 0) {
   goto error_put_list;
  }

  VAR_8 = VAR_12;
  break;

 case 129:
  FUNC_4(VAR_6, VAR_8);
  VAR_8 = 0;
  break;

 case 128:
  VAR_12 = FUNC_3(VAR_5, VAR_4, VAR_9, VAR_7->in.bo_number,
       &VAR_10);
  if (VAR_12)
   goto error_free;

  FUNC_10(&VAR_6->bo_list_lock);
  VAR_11 = FUNC_7(&VAR_6->bo_list_handles, VAR_10, VAR_8);
  FUNC_11(&VAR_6->bo_list_lock);

  if (FUNC_0(VAR_11)) {
   VAR_12 = FUNC_1(VAR_11);
   goto error_put_list;
  }

  FUNC_5(VAR_11);
  break;

 default:
  VAR_12 = -VAR_0;
  goto error_free;
 }

 FUNC_9(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->out.list_handle = VAR_8;
 FUNC_8(VAR_9);

 return 0;

error_put_list:
 FUNC_5(VAR_10);

error_free:
 FUNC_8(VAR_9);
 return VAR_12;
}
