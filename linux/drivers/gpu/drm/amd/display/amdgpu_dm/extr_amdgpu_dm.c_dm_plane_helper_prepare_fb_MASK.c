
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct ww_acquire_ctx {int dummy; } ;
struct ttm_validate_buffer {int num_shared; int head; TYPE_2__* bo; } ;
struct list_head {int dummy; } ;
struct drm_plane_state {TYPE_1__* fb; } ;
struct drm_plane {scalar_t__ type; struct drm_plane_state* state; } ;
struct drm_gem_object {int dummy; } ;
struct dm_plane_state {struct dc_plane_state* dc_state; } ;
struct dc_plane_state {int address; int dcc; int plane_size; int tiling_info; int rotation; int format; } ;
struct amdgpu_framebuffer {int address; } ;
struct amdgpu_device {int dev; } ;
struct TYPE_4__ {int bdev; } ;
struct amdgpu_bo {TYPE_2__ tbo; int flags; } ;
struct TYPE_3__ {struct drm_gem_object** obj; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct list_head*) ;
 int FUNC_3 (struct amdgpu_bo*,int *) ;
 int FUNC_4 (struct amdgpu_bo*) ;
 int FUNC_5 (struct amdgpu_bo*,int ) ;
 int FUNC_6 (struct amdgpu_bo*) ;
 int FUNC_7 (struct amdgpu_bo*) ;
 int FUNC_8 (struct amdgpu_device*,int ) ;
 struct amdgpu_device* FUNC_9 (int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int ,char*,int) ;
 int FUNC_12 (struct amdgpu_device*,struct amdgpu_framebuffer*,int ,int ,int ,int *,int *,int *,int *) ;
 struct amdgpu_bo* FUNC_13 (struct drm_gem_object*) ;
 int FUNC_14 (int *,struct list_head*) ;
 struct amdgpu_framebuffer* FUNC_15 (TYPE_1__*) ;
 struct dm_plane_state* FUNC_16 (struct drm_plane_state*) ;
 int FUNC_17 (struct ww_acquire_ctx*,struct list_head*) ;
 int FUNC_18 (struct ww_acquire_ctx*,struct list_head*,int,int *,int) ;
 scalar_t__ FUNC_19 (int) ;

__attribute__((used)) static int FUNC_20(struct drm_plane *VAR_3,
          struct drm_plane_state *VAR_4)
{
 struct amdgpu_framebuffer *VAR_5;
 struct drm_gem_object *VAR_6;
 struct amdgpu_device *VAR_7;
 struct amdgpu_bo *VAR_8;
 struct dm_plane_state *VAR_9, *VAR_10;
 struct list_head VAR_11;
 struct ttm_validate_buffer VAR_12;
 struct ww_acquire_ctx VAR_13;
 uint64_t VAR_14;
 uint32_t VAR_15;
 int VAR_16;

 VAR_10 = FUNC_16(VAR_3->state);
 VAR_9 = FUNC_16(VAR_4);

 if (!VAR_4->fb) {
  FUNC_0("No FB bound\n");
  return 0;
 }

 VAR_5 = FUNC_15(VAR_4->fb);
 VAR_6 = VAR_4->fb->obj[0];
 VAR_8 = FUNC_13(VAR_6);
 VAR_7 = FUNC_9(VAR_8->tbo.bdev);
 FUNC_2(&VAR_11);

 VAR_12.bo = &VAR_8->tbo;
 VAR_12.num_shared = 1;
 FUNC_14(&VAR_12.head, &VAR_11);

 VAR_16 = FUNC_18(&VAR_13, &VAR_11, 0, ((void*)0), 1);
 if (VAR_16) {
  FUNC_11(VAR_7->dev, "fail to reserve bo (%d)\n", VAR_16);
  return VAR_16;
 }

 if (VAR_3->type != VAR_1)
  VAR_15 = FUNC_8(VAR_7, VAR_8->flags);
 else
  VAR_15 = VAR_0;

 VAR_16 = FUNC_5(VAR_8, VAR_15);
 if (FUNC_19(VAR_16 != 0)) {
  if (VAR_16 != -VAR_2)
   FUNC_1("Failed to pin framebuffer with error %d\n", VAR_16);
  FUNC_17(&VAR_13, &VAR_11);
  return VAR_16;
 }

 VAR_16 = FUNC_10(&VAR_8->tbo);
 if (FUNC_19(VAR_16 != 0)) {
  FUNC_7(VAR_8);
  FUNC_17(&VAR_13, &VAR_11);
  FUNC_1("%p bind failed\n", VAR_8);
  return VAR_16;
 }

 FUNC_3(VAR_8, &VAR_14);

 FUNC_17(&VAR_13, &VAR_11);

 VAR_5->address = FUNC_4(VAR_8);

 FUNC_6(VAR_8);

 if (VAR_9->dc_state &&
   VAR_10->dc_state != VAR_9->dc_state) {
  struct dc_plane_state *VAR_17 = VAR_9->dc_state;

  FUNC_12(
   VAR_7, VAR_5, VAR_17->format, VAR_17->rotation,
   VAR_14, &VAR_17->tiling_info,
   &VAR_17->plane_size, &VAR_17->dcc,
   &VAR_17->address);
 }

 return 0;
}
