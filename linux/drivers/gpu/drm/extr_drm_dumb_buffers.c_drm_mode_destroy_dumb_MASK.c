
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* dumb_destroy ) (struct drm_file*,struct drm_device*,int ) ;int dumb_create; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_file*,struct drm_device*,int ) ;
 int FUNC_1 (struct drm_file*,struct drm_device*,int ) ;

int FUNC_2(struct drm_device *VAR_1, u32 VAR_2,
     struct drm_file *VAR_3)
{
 if (!VAR_1->driver->dumb_create)
  return -VAR_0;

 if (VAR_1->driver->dumb_destroy)
  return VAR_1->driver->dumb_destroy(VAR_3, VAR_1, VAR_2);
 else
  return FUNC_0(VAR_3, VAR_1, VAR_2);
}
