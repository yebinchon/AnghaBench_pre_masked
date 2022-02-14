
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_gpu_device {int has_virgl_3d; } ;
struct drm_virtgpu_getparam {int param; int value; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct virtio_gpu_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ FUNC_0 (int ,int*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct drm_device *VAR_2, void *VAR_3,
         struct drm_file *VAR_4)
{
 struct virtio_gpu_device *VAR_5 = VAR_2->dev_private;
 struct drm_virtgpu_getparam *VAR_6 = VAR_3;
 int VAR_7;

 switch (VAR_6->param) {
 case 129:
  VAR_7 = VAR_5->has_virgl_3d == 1 ? 1 : 0;
  break;
 case 128:
  VAR_7 = 1;
  break;
 default:
  return -VAR_1;
 }
 if (FUNC_0(FUNC_1(VAR_6->value), &VAR_7, sizeof(int)))
  return -VAR_0;

 return 0;
}
