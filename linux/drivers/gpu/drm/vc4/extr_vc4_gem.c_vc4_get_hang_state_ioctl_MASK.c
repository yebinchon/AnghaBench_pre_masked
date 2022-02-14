
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct drm_vc4_get_hang_state {size_t bo_count; int bo; } ;
struct vc4_hang_state {int * bo; struct drm_vc4_get_hang_state user_state; } ;
struct vc4_dev {int job_lock; struct vc4_hang_state* hang_state; int v3d; } ;
struct TYPE_3__ {int size; } ;
struct TYPE_4__ {TYPE_1__ base; int paddr; } ;
struct vc4_bo {TYPE_2__ base; } ;
struct drm_vc4_get_hang_state_bo {size_t handle; int size; int paddr; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,struct drm_vc4_get_hang_state_bo*,int) ;
 int FUNC_2 (struct drm_file*,int ,size_t*) ;
 int FUNC_3 (struct drm_file*,size_t) ;
 struct drm_vc4_get_hang_state_bo* FUNC_4 (size_t,int,int ) ;
 int FUNC_5 (struct drm_vc4_get_hang_state_bo*) ;
 int FUNC_6 (struct drm_vc4_get_hang_state*,struct drm_vc4_get_hang_state*,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct vc4_bo* FUNC_9 (int ) ;
 struct vc4_dev* FUNC_10 (struct drm_device*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct drm_device*,struct vc4_hang_state*) ;

int
FUNC_13(struct drm_device *VAR_5, void *VAR_6,
    struct drm_file *VAR_7)
{
 struct drm_vc4_get_hang_state *VAR_8 = VAR_6;
 struct drm_vc4_get_hang_state_bo *VAR_9;
 struct vc4_hang_state *VAR_10;
 struct drm_vc4_get_hang_state *VAR_11;
 struct vc4_dev *VAR_12 = FUNC_10(VAR_5);
 unsigned long VAR_13;
 u32 VAR_14;
 int VAR_15 = 0;

 if (!VAR_12->v3d) {
  FUNC_0("VC4_GET_HANG_STATE with no VC4 V3D probed\n");
  return -VAR_1;
 }

 FUNC_7(&VAR_12->job_lock, VAR_13);
 VAR_10 = VAR_12->hang_state;
 if (!VAR_10) {
  FUNC_8(&VAR_12->job_lock, VAR_13);
  return -VAR_2;
 }
 VAR_11 = &VAR_10->user_state;




 if (VAR_8->bo_count < VAR_11->bo_count) {
  VAR_8->bo_count = VAR_11->bo_count;
  FUNC_8(&VAR_12->job_lock, VAR_13);
  return 0;
 }

 VAR_12->hang_state = ((void*)0);
 FUNC_8(&VAR_12->job_lock, VAR_13);


 VAR_11->bo = VAR_8->bo;
 FUNC_6(VAR_8, VAR_11, sizeof(*VAR_11));

 VAR_9 = FUNC_4(VAR_11->bo_count, sizeof(*VAR_9), VAR_4);
 if (!VAR_9) {
  VAR_15 = -VAR_3;
  goto err_free;
 }

 for (VAR_14 = 0; VAR_14 < VAR_11->bo_count; VAR_14++) {
  struct vc4_bo *VAR_16 = FUNC_9(VAR_10->bo[VAR_14]);
  u32 VAR_17;

  VAR_15 = FUNC_2(VAR_7, VAR_10->bo[VAR_14],
         &VAR_17);

  if (VAR_15) {
   VAR_11->bo_count = VAR_14;
   goto err_delete_handle;
  }
  VAR_9[VAR_14].handle = VAR_17;
  VAR_9[VAR_14].paddr = VAR_16->base.paddr;
  VAR_9[VAR_14].size = VAR_16->base.base.size;
 }

 if (FUNC_1(FUNC_11(VAR_8->bo),
    VAR_9,
    VAR_11->bo_count * sizeof(*VAR_9)))
  VAR_15 = -VAR_0;

err_delete_handle:
 if (VAR_15) {
  for (VAR_14 = 0; VAR_14 < VAR_11->bo_count; VAR_14++)
   FUNC_3(VAR_7, VAR_9[VAR_14].handle);
 }

err_free:
 FUNC_12(VAR_5, VAR_10);
 FUNC_5(VAR_9);

 return VAR_15;
}
