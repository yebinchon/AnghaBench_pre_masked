
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ww_acquire_ctx {int dummy; } ;
struct virtio_gpu_object_params {int size; scalar_t__ virgl; int dumb; } ;
struct virtio_gpu_object {int tbo; int gem_base; int placement; int dumb; int hw_res_handle; } ;
struct virtio_gpu_fence_driver {int lock; } ;
struct virtio_gpu_fence {int f; } ;
struct TYPE_2__ {int bdev; } ;
struct virtio_gpu_device {struct virtio_gpu_fence_driver fence_drv; TYPE_1__ mman; int ddev; } ;
struct ttm_validate_buffer {int head; int * bo; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct list_head*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (struct virtio_gpu_object*) ;
 struct virtio_gpu_object* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,struct list_head*) ;
 int FUNC_6 (struct ttm_validate_buffer*,int ,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 size_t FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int *,int *,int ,int ,int *,int ,int,size_t,int *,int *,int *) ;
 int VAR_3 ;
 int FUNC_12 (struct ww_acquire_ctx*,struct list_head*) ;
 int FUNC_13 (struct ww_acquire_ctx*,struct list_head*,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct virtio_gpu_device*,struct virtio_gpu_object*,struct virtio_gpu_object_params*,struct virtio_gpu_fence*) ;
 int FUNC_16 (struct virtio_gpu_device*,struct virtio_gpu_object*,struct virtio_gpu_object_params*,struct virtio_gpu_fence*) ;
 int FUNC_17 (struct virtio_gpu_object*) ;
 int FUNC_18 (struct ww_acquire_ctx*,struct list_head*) ;
 int FUNC_19 (struct virtio_gpu_device*,int *) ;
 int FUNC_20 (struct virtio_gpu_device*,int ) ;
 int VAR_4 ;
 int FUNC_21 (struct list_head*) ;

int FUNC_22(struct virtio_gpu_device *VAR_5,
        struct virtio_gpu_object_params *VAR_6,
        struct virtio_gpu_object **VAR_7,
        struct virtio_gpu_fence *VAR_8)
{
 struct virtio_gpu_object *VAR_9;
 size_t VAR_10;
 int VAR_11;

 *VAR_7 = ((void*)0);

 VAR_10 = FUNC_10(&VAR_5->mman.bdev, VAR_6->size,
           sizeof(struct virtio_gpu_object));

 VAR_9 = FUNC_4(sizeof(struct virtio_gpu_object), VAR_1);
 if (VAR_9 == ((void*)0))
  return -VAR_0;
 VAR_11 = FUNC_19(VAR_5, &VAR_9->hw_res_handle);
 if (VAR_11 < 0) {
  FUNC_3(VAR_9);
  return VAR_11;
 }
 VAR_6->size = FUNC_7(VAR_6->size, VAR_2);
 VAR_11 = FUNC_2(VAR_5->ddev, &VAR_9->gem_base, VAR_6->size);
 if (VAR_11 != 0) {
  FUNC_20(VAR_5, VAR_9->hw_res_handle);
  FUNC_3(VAR_9);
  return VAR_11;
 }
 VAR_9->dumb = VAR_6->dumb;

 if (VAR_6->virgl) {
  FUNC_16(VAR_5, VAR_9, VAR_6, VAR_8);
 } else {
  FUNC_15(VAR_5, VAR_9, VAR_6, VAR_8);
 }

 FUNC_17(VAR_9);
 VAR_11 = FUNC_11(&VAR_5->mman.bdev, &VAR_9->tbo, VAR_6->size,
     VAR_3, &VAR_9->placement, 0,
     1, VAR_10, ((void*)0), ((void*)0),
     &VAR_4);

 if (VAR_11 != 0)
  return VAR_11;

 if (VAR_8) {
  struct virtio_gpu_fence_driver *VAR_12 = &VAR_5->fence_drv;
  struct list_head VAR_13;
  struct ttm_validate_buffer VAR_14;
  struct ww_acquire_ctx VAR_15;
  unsigned long VAR_16;
  bool VAR_17;

  FUNC_0(&VAR_13);
  FUNC_6(&VAR_14, 0, sizeof(struct ttm_validate_buffer));


  FUNC_1(&VAR_9->gem_base);
  VAR_14.bo = &VAR_9->tbo;
  FUNC_5(&VAR_14.head, &VAR_13);

  VAR_11 = FUNC_18(&VAR_15, &VAR_13);
  if (VAR_11 == 0) {
   FUNC_8(&VAR_12->lock, VAR_16);
   VAR_17 = FUNC_14(&VAR_8->f);
   if (!VAR_17)

    FUNC_13(&VAR_15, &VAR_13,
           &VAR_8->f);
   FUNC_9(&VAR_12->lock, VAR_16);
   if (VAR_17)

    FUNC_12(&VAR_15, &VAR_13);
  }
  FUNC_21(&VAR_13);
 }

 *VAR_7 = VAR_9;
 return 0;
}
