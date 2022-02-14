
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* lastclose ) (struct drm_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (struct drm_device*,int ) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;

void FUNC_5(struct drm_device * VAR_1)
{
 FUNC_0("\n");

 if (VAR_1->driver->lastclose)
  VAR_1->driver->lastclose(VAR_1);
 FUNC_0("driver lastclose completed\n");

 if (FUNC_2(VAR_1, VAR_0))
  FUNC_3(VAR_1);

 FUNC_1(VAR_1);
}
