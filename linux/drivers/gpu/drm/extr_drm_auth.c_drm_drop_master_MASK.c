
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {int master; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* master_drop ) (struct drm_device*,struct drm_file*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_device*,struct drm_file*) ;

__attribute__((used)) static void FUNC_2(struct drm_device *VAR_0,
       struct drm_file *VAR_1)
{
 if (VAR_0->driver->master_drop)
  VAR_0->driver->master_drop(VAR_0, VAR_1);
 FUNC_0(&VAR_0->master);
}
