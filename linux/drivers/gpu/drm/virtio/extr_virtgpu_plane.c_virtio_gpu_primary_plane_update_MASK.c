
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct virtio_gpu_output {int index; scalar_t__ enabled; } ;
struct virtio_gpu_object {scalar_t__ dumb; scalar_t__ hw_res_handle; } ;
struct TYPE_3__ {int * obj; } ;
struct virtio_gpu_framebuffer {TYPE_1__ base; } ;
struct virtio_gpu_device {int dummy; } ;
struct drm_plane_state {scalar_t__ crtc; } ;
struct drm_plane {TYPE_2__* state; struct drm_device* dev; } ;
struct drm_device {struct virtio_gpu_device* dev_private; } ;
struct TYPE_4__ {int src_w; int src_h; int src_x; int src_y; int crtc_y; int crtc_x; int crtc_h; int crtc_w; scalar_t__ fb; scalar_t__ crtc; } ;


 int FUNC_0 (char*,scalar_t__,int ,int ,int ,int ,int,int,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct virtio_gpu_output* FUNC_3 (scalar_t__) ;
 struct virtio_gpu_object* FUNC_4 (int ) ;
 struct virtio_gpu_framebuffer* FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct virtio_gpu_device*,scalar_t__,int,int,int,int) ;
 int FUNC_7 (struct virtio_gpu_device*,int ,scalar_t__,int,int,int,int) ;
 int FUNC_8 (struct virtio_gpu_device*,struct virtio_gpu_object*,int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_9(struct drm_plane *VAR_0,
         struct drm_plane_state *VAR_1)
{
 struct drm_device *VAR_2 = VAR_0->dev;
 struct virtio_gpu_device *VAR_3 = VAR_2->dev_private;
 struct virtio_gpu_output *VAR_4 = ((void*)0);
 struct virtio_gpu_framebuffer *VAR_5;
 struct virtio_gpu_object *VAR_6;
 uint32_t VAR_7;

 if (VAR_0->state->crtc)
  VAR_4 = FUNC_3(VAR_0->state->crtc);
 if (VAR_1->crtc)
  VAR_4 = FUNC_3(VAR_1->crtc);
 if (FUNC_1(!VAR_4))
  return;

 if (VAR_0->state->fb && VAR_4->enabled) {
  VAR_5 = FUNC_5(VAR_0->state->fb);
  VAR_6 = FUNC_4(VAR_5->base.obj[0]);
  VAR_7 = VAR_6->hw_res_handle;
  if (VAR_6->dumb) {
   FUNC_8
    (VAR_3, VAR_6, 0,
     FUNC_2(VAR_0->state->src_w >> 16),
     FUNC_2(VAR_0->state->src_h >> 16),
     FUNC_2(VAR_0->state->src_x >> 16),
     FUNC_2(VAR_0->state->src_y >> 16), ((void*)0));
  }
 } else {
  VAR_7 = 0;
 }

 FUNC_0("handle 0x%x, crtc %dx%d+%d+%d, src %dx%d+%d+%d\n", VAR_7,
    VAR_0->state->crtc_w, VAR_0->state->crtc_h,
    VAR_0->state->crtc_x, VAR_0->state->crtc_y,
    VAR_0->state->src_w >> 16,
    VAR_0->state->src_h >> 16,
    VAR_0->state->src_x >> 16,
    VAR_0->state->src_y >> 16);
 FUNC_7(VAR_3, VAR_4->index, VAR_7,
       VAR_0->state->src_w >> 16,
       VAR_0->state->src_h >> 16,
       VAR_0->state->src_x >> 16,
       VAR_0->state->src_y >> 16);
 if (VAR_7)
  FUNC_6(VAR_3, VAR_7,
           VAR_0->state->src_x >> 16,
           VAR_0->state->src_y >> 16,
           VAR_0->state->src_w >> 16,
           VAR_0->state->src_h >> 16);
}
