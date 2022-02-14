
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_display {int * suspend; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*,int *) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 struct nouveau_display* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*,int,int) ;

void
FUNC_4(struct drm_device *VAR_0, bool VAR_1)
{
 struct nouveau_display *VAR_2 = FUNC_2(VAR_0);

 FUNC_3(VAR_0, 1, VAR_1);

 if (FUNC_1(VAR_0)) {
  if (VAR_2->suspend) {
   FUNC_0(VAR_0, VAR_2->suspend);
   VAR_2->suspend = ((void*)0);
  }
  return;
 }
}
