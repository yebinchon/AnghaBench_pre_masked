
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_14__ {void* y; void* x; } ;
struct TYPE_13__ {void* type; } ;
struct TYPE_15__ {TYPE_5__ pos; TYPE_4__ hdr; void* hot_y; void* hot_x; void* resource_id; } ;
struct virtio_gpu_output {TYPE_6__ cursor; } ;
struct TYPE_11__ {int resv; } ;
struct TYPE_12__ {TYPE_2__ base; } ;
struct virtio_gpu_object {TYPE_3__ tbo; scalar_t__ dumb; scalar_t__ hw_res_handle; } ;
struct TYPE_10__ {int * obj; } ;
struct virtio_gpu_framebuffer {TYPE_8__* fence; TYPE_1__ base; } ;
struct virtio_gpu_device {int dummy; } ;
struct drm_plane_state {TYPE_9__* fb; scalar_t__ crtc; } ;
struct drm_plane {TYPE_7__* state; struct drm_device* dev; } ;
struct drm_device {struct virtio_gpu_device* dev_private; } ;
struct TYPE_18__ {scalar_t__ hot_y; scalar_t__ hot_x; } ;
struct TYPE_17__ {int f; } ;
struct TYPE_16__ {scalar_t__ crtc_y; scalar_t__ crtc_x; TYPE_9__* fb; scalar_t__ crtc_h; scalar_t__ crtc_w; scalar_t__ crtc; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 struct virtio_gpu_output* FUNC_5 (scalar_t__) ;
 struct virtio_gpu_object* FUNC_6 (int ) ;
 struct virtio_gpu_framebuffer* FUNC_7 (TYPE_9__*) ;
 int FUNC_8 (struct virtio_gpu_device*,struct virtio_gpu_object*,int ,void*,void*,int ,int ,TYPE_8__*) ;
 int FUNC_9 (struct virtio_gpu_device*,struct virtio_gpu_output*) ;
 int FUNC_10 (struct virtio_gpu_object*,int) ;
 int FUNC_11 (struct virtio_gpu_object*) ;
 int FUNC_12 (struct virtio_gpu_object*,int) ;

__attribute__((used)) static void FUNC_13(struct drm_plane *VAR_2,
        struct drm_plane_state *VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->dev;
 struct virtio_gpu_device *VAR_5 = VAR_4->dev_private;
 struct virtio_gpu_output *VAR_6 = ((void*)0);
 struct virtio_gpu_framebuffer *VAR_7;
 struct virtio_gpu_object *VAR_8 = ((void*)0);
 uint32_t VAR_9;
 int VAR_10 = 0;

 if (VAR_2->state->crtc)
  VAR_6 = FUNC_5(VAR_2->state->crtc);
 if (VAR_3->crtc)
  VAR_6 = FUNC_5(VAR_3->crtc);
 if (FUNC_1(!VAR_6))
  return;

 if (VAR_2->state->fb) {
  VAR_7 = FUNC_7(VAR_2->state->fb);
  VAR_8 = FUNC_6(VAR_7->base.obj[0]);
  VAR_9 = VAR_8->hw_res_handle;
 } else {
  VAR_9 = 0;
 }

 if (VAR_8 && VAR_8->dumb && (VAR_2->state->fb != VAR_3->fb)) {

  FUNC_8
   (VAR_5, VAR_8, 0,
    FUNC_2(VAR_2->state->crtc_w),
    FUNC_2(VAR_2->state->crtc_h),
    0, 0, VAR_7->fence);
  VAR_10 = FUNC_10(VAR_8, 0);
  if (!VAR_10) {
   FUNC_4(VAR_8->tbo.base.resv,
         &VAR_7->fence->f);
   FUNC_3(&VAR_7->fence->f);
   VAR_7->fence = ((void*)0);
   FUNC_11(VAR_8);
   FUNC_12(VAR_8, 0);
  }
 }

 if (VAR_2->state->fb != VAR_3->fb) {
  FUNC_0("update, handle %d, pos +%d+%d, hot %d,%d\n", VAR_9,
     VAR_2->state->crtc_x,
     VAR_2->state->crtc_y,
     VAR_2->state->fb ? VAR_2->state->fb->hot_x : 0,
     VAR_2->state->fb ? VAR_2->state->fb->hot_y : 0);
  VAR_6->cursor.hdr.type =
   FUNC_2(VAR_1);
  VAR_6->cursor.resource_id = FUNC_2(VAR_9);
  if (VAR_2->state->fb) {
   VAR_6->cursor.hot_x =
    FUNC_2(VAR_2->state->fb->hot_x);
   VAR_6->cursor.hot_y =
    FUNC_2(VAR_2->state->fb->hot_y);
  } else {
   VAR_6->cursor.hot_x = FUNC_2(0);
   VAR_6->cursor.hot_y = FUNC_2(0);
  }
 } else {
  FUNC_0("move +%d+%d\n",
     VAR_2->state->crtc_x,
     VAR_2->state->crtc_y);
  VAR_6->cursor.hdr.type =
   FUNC_2(VAR_0);
 }
 VAR_6->cursor.pos.x = FUNC_2(VAR_2->state->crtc_x);
 VAR_6->cursor.pos.y = FUNC_2(VAR_2->state->crtc_y);
 FUNC_9(VAR_5, VAR_6);
}
