
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ count; } ;
struct udl_device {TYPE_1__ urbs; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*) ;
 struct udl_device* FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;

void FUNC_4(struct drm_device *VAR_0)
{
 struct udl_device *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_0);

 if (VAR_1->urbs.count)
  FUNC_3(VAR_0);

 FUNC_2(VAR_0);
}
