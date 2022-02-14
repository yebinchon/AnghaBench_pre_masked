
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_dp_device {int dev; scalar_t__ ptn_bridge; int encoder; struct drm_connector* connector; } ;
struct drm_connector {int dummy; } ;
struct drm_bridge {int * next; } ;
struct analogix_dp_plat_data {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,scalar_t__,struct drm_bridge*) ;
 struct exynos_dp_device* FUNC_2 (struct analogix_dp_plat_data*) ;

__attribute__((used)) static int FUNC_3(struct analogix_dp_plat_data *VAR_0,
       struct drm_bridge *VAR_1,
       struct drm_connector *VAR_2)
{
 struct exynos_dp_device *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 VAR_3->connector = VAR_2;


 if (VAR_3->ptn_bridge) {
  VAR_4 = FUNC_1(&VAR_3->encoder, VAR_3->ptn_bridge, VAR_1);
  if (VAR_4) {
   FUNC_0(VAR_3->dev,
          "Failed to attach bridge to drm\n");
   VAR_1->next = ((void*)0);
   return VAR_4;
  }
 }

 return 0;
}
