
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_file {TYPE_1__* minor; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ dev; } ;


 int FUNC_0 (struct drm_device*) ;

int FUNC_1(struct drm_device *VAR_0, void *VAR_1,
     struct drm_file *VAR_2)
{
 return FUNC_0((struct drm_device *) VAR_2->minor->dev);
}
