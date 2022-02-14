
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_display {int * suspend; } ;
struct drm_device {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (struct drm_device*) ;
 scalar_t__ FUNC_3 (struct drm_device*) ;
 struct nouveau_display* FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*,int,int) ;

int
FUNC_6(struct drm_device *VAR_0, bool VAR_1)
{
 struct nouveau_display *VAR_2 = FUNC_4(VAR_0);

 if (FUNC_3(VAR_0)) {
  if (!VAR_1) {
   VAR_2->suspend = FUNC_2(VAR_0);
   if (FUNC_0(VAR_2->suspend)) {
    int VAR_3 = FUNC_1(VAR_2->suspend);
    VAR_2->suspend = ((void*)0);
    return VAR_3;
   }
  }
 }

 FUNC_5(VAR_0, 1, VAR_1);
 return 0;
}
