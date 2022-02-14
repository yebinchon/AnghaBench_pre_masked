
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_drm {scalar_t__ domain; } ;
struct tegra_bo {int sgt; } ;
struct drm_gem_object {TYPE_1__* dev; scalar_t__ import_attach; } ;
struct TYPE_2__ {struct tegra_drm* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (struct drm_gem_object*) ;
 int FUNC_2 (struct drm_gem_object*,int *) ;
 int FUNC_3 (struct tegra_bo*) ;
 int FUNC_4 (TYPE_1__*,struct tegra_bo*) ;
 int FUNC_5 (struct tegra_drm*,struct tegra_bo*) ;
 struct tegra_bo* FUNC_6 (struct drm_gem_object*) ;

void FUNC_7(struct drm_gem_object *VAR_1)
{
 struct tegra_drm *VAR_2 = VAR_1->dev->dev_private;
 struct tegra_bo *VAR_3 = FUNC_6(VAR_1);

 if (VAR_2->domain)
  FUNC_5(VAR_2, VAR_3);

 if (VAR_1->import_attach) {
  FUNC_0(VAR_1->import_attach, VAR_3->sgt,
      VAR_0);
  FUNC_2(VAR_1, ((void*)0));
 } else {
  FUNC_4(VAR_1->dev, VAR_3);
 }

 FUNC_1(VAR_1);
 FUNC_3(VAR_3);
}
