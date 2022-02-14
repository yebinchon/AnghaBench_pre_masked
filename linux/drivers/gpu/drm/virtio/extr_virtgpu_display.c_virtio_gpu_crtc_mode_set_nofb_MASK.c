
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_gpu_output {int index; } ;
struct virtio_gpu_device {int dummy; } ;
struct drm_device {struct virtio_gpu_device* dev_private; } ;
struct TYPE_2__ {int vdisplay; int hdisplay; } ;
struct drm_crtc {TYPE_1__ mode; struct drm_device* dev; } ;


 struct virtio_gpu_output* FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (struct virtio_gpu_device*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct drm_crtc *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct virtio_gpu_device *VAR_2 = VAR_1->dev_private;
 struct virtio_gpu_output *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_2, VAR_3->index, 0,
       VAR_0->mode.hdisplay,
       VAR_0->mode.vdisplay, 0, 0);
}
