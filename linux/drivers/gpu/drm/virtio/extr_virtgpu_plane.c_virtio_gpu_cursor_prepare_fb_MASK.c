
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtio_gpu_object {scalar_t__ dumb; } ;
struct TYPE_3__ {int * obj; } ;
struct virtio_gpu_framebuffer {int fence; TYPE_1__ base; } ;
struct virtio_gpu_device {int dummy; } ;
struct drm_plane_state {scalar_t__ fb; } ;
struct drm_plane {TYPE_2__* state; struct drm_device* dev; } ;
struct drm_device {struct virtio_gpu_device* dev_private; } ;
struct TYPE_4__ {scalar_t__ fb; } ;


 int VAR_0 ;
 struct virtio_gpu_object* FUNC_0 (int ) ;
 struct virtio_gpu_framebuffer* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct virtio_gpu_device*) ;

__attribute__((used)) static int FUNC_3(struct drm_plane *VAR_1,
     struct drm_plane_state *VAR_2)
{
 struct drm_device *VAR_3 = VAR_1->dev;
 struct virtio_gpu_device *VAR_4 = VAR_3->dev_private;
 struct virtio_gpu_framebuffer *VAR_5;
 struct virtio_gpu_object *VAR_6;

 if (!VAR_2->fb)
  return 0;

 VAR_5 = FUNC_1(VAR_2->fb);
 VAR_6 = FUNC_0(VAR_5->base.obj[0]);
 if (VAR_6 && VAR_6->dumb && (VAR_1->state->fb != VAR_2->fb)) {
  VAR_5->fence = FUNC_2(VAR_4);
  if (!VAR_5->fence)
   return -VAR_0;
 }

 return 0;
}
