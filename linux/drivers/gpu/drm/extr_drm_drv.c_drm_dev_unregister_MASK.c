
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {int registered; scalar_t__ agp; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* unload ) (struct drm_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_device*) ;
 scalar_t__ FUNC_1 (struct drm_device*,int ) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*,int ) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_device*) ;

void FUNC_9(struct drm_device *VAR_4)
{
 if (FUNC_1(VAR_4, VAR_0))
  FUNC_2(VAR_4);

 VAR_4->registered = 0;

 FUNC_0(VAR_4);

 if (FUNC_1(VAR_4, VAR_1))
  FUNC_5(VAR_4);

 if (VAR_4->driver->unload)
  VAR_4->driver->unload(VAR_4);

 if (VAR_4->agp)
  FUNC_6(VAR_4);

 FUNC_3(VAR_4);

 FUNC_7(VAR_4);
 FUNC_4(VAR_4, VAR_2);
 FUNC_4(VAR_4, VAR_3);
}
