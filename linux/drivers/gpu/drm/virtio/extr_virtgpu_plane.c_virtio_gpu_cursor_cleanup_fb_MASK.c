
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtio_gpu_framebuffer {TYPE_2__* fence; } ;
struct drm_plane_state {int dummy; } ;
struct drm_plane {TYPE_1__* state; } ;
struct TYPE_4__ {int f; } ;
struct TYPE_3__ {int fb; } ;


 int FUNC_0 (int *) ;
 struct virtio_gpu_framebuffer* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct drm_plane *VAR_0,
      struct drm_plane_state *VAR_1)
{
 struct virtio_gpu_framebuffer *VAR_2;

 if (!VAR_0->state->fb)
  return;

 VAR_2 = FUNC_1(VAR_0->state->fb);
 if (VAR_2->fence) {
  FUNC_0(&VAR_2->fence->f);
  VAR_2->fence = ((void*)0);
 }
}
