
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lima_bo {int va; } ;
struct drm_gem_object {TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct lima_bo*) ;
 int FUNC_2 (int *) ;
 struct lima_bo* FUNC_3 (struct drm_gem_object*) ;

void FUNC_4(struct drm_gem_object *VAR_0)
{
 struct lima_bo *VAR_1 = FUNC_3(VAR_0);

 if (!FUNC_2(&VAR_1->va))
  FUNC_0(VAR_0->dev->dev, "lima gem free bo still has va\n");

 FUNC_1(VAR_1);
}
