
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_gpu_output {int enabled; int index; } ;
struct virtio_gpu_device {int dummy; } ;
struct drm_device {struct virtio_gpu_device* dev_private; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {struct drm_device* dev; } ;


 struct virtio_gpu_output* FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (struct virtio_gpu_device*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct drm_crtc *VAR_0,
        struct drm_crtc_state *VAR_1)
{
 struct drm_device *VAR_2 = VAR_0->dev;
 struct virtio_gpu_device *VAR_3 = VAR_2->dev_private;
 struct virtio_gpu_output *VAR_4 = FUNC_0(VAR_0);

 FUNC_1(VAR_3, VAR_4->index, 0, 0, 0, 0, 0);
 VAR_4->enabled = 0;
}
