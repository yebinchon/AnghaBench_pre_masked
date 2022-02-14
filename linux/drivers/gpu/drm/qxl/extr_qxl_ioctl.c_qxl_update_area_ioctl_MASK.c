
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_operation_ctx {int member_0; int member_1; } ;
struct qxl_rect {scalar_t__ left; scalar_t__ top; scalar_t__ right; scalar_t__ bottom; } ;
struct qxl_device {int dummy; } ;
struct qxl_bo {int surface_id; int placement; int tbo; int type; int pin_count; } ;
struct drm_qxl_update_area {scalar_t__ left; scalar_t__ top; scalar_t__ right; scalar_t__ bottom; int handle; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct qxl_device* dev_private; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct drm_gem_object* FUNC_1 (struct drm_file*,int ) ;
 int FUNC_2 (struct drm_gem_object*) ;
 struct qxl_bo* FUNC_3 (struct drm_gem_object*) ;
 int FUNC_4 (struct qxl_device*,struct qxl_bo*) ;
 int FUNC_5 (struct qxl_bo*,int) ;
 int FUNC_6 (struct qxl_bo*) ;
 int FUNC_7 (struct qxl_device*,struct qxl_bo*,struct qxl_rect*) ;
 int FUNC_8 (struct qxl_bo*,int ,int) ;
 int FUNC_9 (int *,int *,struct ttm_operation_ctx*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct drm_device *VAR_2, void *VAR_3,
     struct drm_file *VAR_4)
{
 struct qxl_device *VAR_5 = VAR_2->dev_private;
 struct drm_qxl_update_area *VAR_6 = VAR_3;
 struct qxl_rect VAR_7 = {.left = VAR_6->left,
    .top = VAR_6->top,
    .right = VAR_6->right,
    .bottom = VAR_6->bottom};
 int VAR_8;
 struct drm_gem_object *VAR_9 = ((void*)0);
 struct qxl_bo *VAR_10 = ((void*)0);
 struct ttm_operation_ctx VAR_11 = { 1, 0 };

 if (VAR_6->left >= VAR_6->right ||
     VAR_6->top >= VAR_6->bottom)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_4, VAR_6->handle);
 if (VAR_9 == ((void*)0))
  return -VAR_1;

 VAR_10 = FUNC_3(VAR_9);

 VAR_8 = FUNC_5(VAR_10, 0);
 if (VAR_8)
  goto out;

 if (!VAR_10->pin_count) {
  FUNC_8(VAR_10, VAR_10->type, 0);
  VAR_8 = FUNC_9(&VAR_10->tbo, &VAR_10->placement, &VAR_11);
  if (FUNC_10(VAR_8))
   goto out;
 }

 VAR_8 = FUNC_4(VAR_5, VAR_10);
 if (VAR_8)
  goto out2;
 if (!VAR_10->surface_id)
  FUNC_0("got update area for surface with no id %d\n", VAR_6->handle);
 VAR_8 = FUNC_7(VAR_5, VAR_10, &VAR_7);

out2:
 FUNC_6(VAR_10);

out:
 FUNC_2(VAR_9);
 return VAR_8;
}
