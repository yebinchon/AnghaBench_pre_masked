
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct virtio_gpu_object_params {scalar_t__ size; int virgl; int target; int depth; int array_size; int last_level; int nr_samples; int flags; int bind; int height; int width; int format; int member_0; } ;
struct drm_gem_object {int dummy; } ;
struct virtio_gpu_object {int hw_res_handle; struct drm_gem_object gem_base; } ;
struct virtio_gpu_fence {int f; } ;
struct virtio_gpu_device {int has_virgl_3d; } ;
struct drm_virtgpu_resource_create {int depth; int nr_samples; int last_level; int target; int array_size; scalar_t__ size; int bo_handle; int res_handle; int flags; int bind; int height; int width; int format; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct virtio_gpu_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct virtio_gpu_object*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct virtio_gpu_object*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_file*,struct drm_gem_object*,int *) ;
 int FUNC_4 (struct drm_gem_object*) ;
 int FUNC_5 (struct drm_gem_object*) ;
 struct virtio_gpu_object* FUNC_6 (struct drm_device*,struct virtio_gpu_object_params*,struct virtio_gpu_fence*) ;
 struct virtio_gpu_fence* FUNC_7 (struct virtio_gpu_device*) ;

__attribute__((used)) static int FUNC_8(struct drm_device *VAR_3, void *VAR_4,
         struct drm_file *VAR_5)
{
 struct virtio_gpu_device *VAR_6 = VAR_3->dev_private;
 struct drm_virtgpu_resource_create *VAR_7 = VAR_4;
 struct virtio_gpu_fence *VAR_8;
 int VAR_9;
 struct virtio_gpu_object *VAR_10;
 struct drm_gem_object *VAR_11;
 uint32_t VAR_12 = 0;
 struct virtio_gpu_object_params VAR_13 = { 0 };

 if (VAR_6->has_virgl_3d == 0) {
  if (VAR_7->depth > 1)
   return -VAR_0;
  if (VAR_7->nr_samples > 1)
   return -VAR_0;
  if (VAR_7->last_level > 1)
   return -VAR_0;
  if (VAR_7->target != 2)
   return -VAR_0;
  if (VAR_7->array_size > 1)
   return -VAR_0;
 }

 VAR_13.format = VAR_7->format;
 VAR_13.width = VAR_7->width;
 VAR_13.height = VAR_7->height;
 VAR_13.size = VAR_7->size;
 if (VAR_6->has_virgl_3d) {
  VAR_13.virgl = 1;
  VAR_13.target = VAR_7->target;
  VAR_13.bind = VAR_7->bind;
  VAR_13.depth = VAR_7->depth;
  VAR_13.array_size = VAR_7->array_size;
  VAR_13.last_level = VAR_7->last_level;
  VAR_13.nr_samples = VAR_7->nr_samples;
  VAR_13.flags = VAR_7->flags;
 }

 if (VAR_13.size == 0)
  VAR_13.size = VAR_2;

 VAR_8 = FUNC_7(VAR_6);
 if (!VAR_8)
  return -VAR_1;
 VAR_10 = FUNC_6(VAR_3, &VAR_13, VAR_8);
 FUNC_2(&VAR_8->f);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);
 VAR_11 = &VAR_10->gem_base;

 VAR_9 = FUNC_3(VAR_5, VAR_11, &VAR_12);
 if (VAR_9) {
  FUNC_5(VAR_11);
  return VAR_9;
 }
 FUNC_4(VAR_11);

 VAR_7->res_handle = VAR_10->hw_res_handle;
 VAR_7->bo_handle = VAR_12;
 return 0;
}
