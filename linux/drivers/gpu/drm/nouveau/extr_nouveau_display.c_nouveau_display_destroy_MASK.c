
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_display {int disp; int (* dtor ) (struct drm_device*) ;} ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int * display; int acpi_nb; } ;


 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct nouveau_display*) ;
 struct nouveau_display* FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 TYPE_1__* FUNC_5 (struct drm_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (int *) ;

void
FUNC_9(struct drm_device *VAR_0)
{
 struct nouveau_display *VAR_1 = FUNC_3(VAR_0);




 FUNC_4(VAR_0);

 FUNC_0(VAR_0);
 FUNC_1(VAR_0);

 if (VAR_1->dtor)
  VAR_1->dtor(VAR_0);

 FUNC_6(&VAR_1->disp);

 FUNC_5(VAR_0)->display = ((void*)0);
 FUNC_2(VAR_1);
}
