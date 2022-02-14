
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* dma_ioctl ) (struct drm_device*,void*,struct drm_file*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (struct drm_device*,void*,struct drm_file*) ;

int FUNC_2(struct drm_device *VAR_3, void *VAR_4,
    struct drm_file *VAR_5)
{
 if (!FUNC_0(VAR_3, VAR_0))
  return -VAR_2;

 if (VAR_3->driver->dma_ioctl)
  return VAR_3->driver->dma_ioctl(VAR_3, VAR_4, VAR_5);
 else
  return -VAR_1;
}
