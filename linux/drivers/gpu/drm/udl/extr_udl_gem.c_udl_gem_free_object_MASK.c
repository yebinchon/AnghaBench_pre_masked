
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udl_gem_object {scalar_t__ pages; int sg; scalar_t__ vmapping; } ;
struct drm_gem_object {TYPE_1__* dev; scalar_t__ import_attach; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (struct drm_gem_object*,int ) ;
 int FUNC_2 (int ) ;
 struct udl_gem_object* FUNC_3 (struct drm_gem_object*) ;
 int FUNC_4 (struct udl_gem_object*) ;
 int FUNC_5 (struct udl_gem_object*) ;

void FUNC_6(struct drm_gem_object *VAR_0)
{
 struct udl_gem_object *VAR_1 = FUNC_3(VAR_0);

 if (VAR_1->vmapping)
  FUNC_5(VAR_1);

 if (VAR_0->import_attach) {
  FUNC_1(VAR_0, VAR_1->sg);
  FUNC_2(VAR_0->dev->dev);
 }

 if (VAR_1->pages)
  FUNC_4(VAR_1);

 FUNC_0(VAR_0);
}
