
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_gpu_output {int enabled; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int dummy; } ;


 struct virtio_gpu_output* FUNC_0 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_1(struct drm_crtc *VAR_0,
       struct drm_crtc_state *VAR_1)
{
 struct virtio_gpu_output *VAR_2 = FUNC_0(VAR_0);

 VAR_2->enabled = 1;
}
