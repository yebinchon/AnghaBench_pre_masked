
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g2d_data {int drm_dev; int runqueue_work; int flags; } ;
struct exynos_drm_private {int * g2d_dev; } ;
struct drm_device {struct exynos_drm_private* dev_private; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct g2d_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,struct device*) ;
 int FUNC_3 (struct g2d_data*,int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_1, struct device *VAR_2, void *VAR_3)
{
 struct g2d_data *VAR_4 = FUNC_1(VAR_1);
 struct drm_device *VAR_5 = VAR_3;
 struct exynos_drm_private *VAR_6 = VAR_5->dev_private;


 FUNC_4(VAR_0, &VAR_4->flags);
 FUNC_3(VAR_4, ((void*)0));
 VAR_6->g2d_dev = ((void*)0);

 FUNC_0(&VAR_4->runqueue_work);
 FUNC_2(VAR_4->drm_dev, VAR_1);
}
