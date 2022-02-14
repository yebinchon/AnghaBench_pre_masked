
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_device {struct drm_device* priv; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;

__attribute__((used)) static void FUNC_3(struct virtio_device *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->priv;

 FUNC_0(VAR_1);
 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
}
