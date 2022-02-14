
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* firstopen ) (struct drm_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct drm_device*,int ) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;

int FUNC_4(struct drm_device * VAR_1)
{
 int VAR_2;

 if (VAR_1->driver->firstopen &&
     FUNC_1(VAR_1, VAR_0)) {
  VAR_2 = VAR_1->driver->firstopen(VAR_1);
  if (VAR_2 != 0)
   return VAR_2;
 }

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 < 0)
  return VAR_2;


 FUNC_0("\n");
 return 0;
}
