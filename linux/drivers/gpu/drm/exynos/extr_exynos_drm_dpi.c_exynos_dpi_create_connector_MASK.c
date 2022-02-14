
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector {int polled; } ;
struct exynos_dpi {int dev; struct drm_connector connector; } ;
struct drm_encoder {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct drm_connector*,struct drm_encoder*) ;
 int FUNC_2 (struct drm_connector*,int *) ;
 int FUNC_3 (int ,struct drm_connector*,int *,int ) ;
 struct exynos_dpi* FUNC_4 (struct drm_encoder*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct drm_encoder *VAR_4)
{
 struct exynos_dpi *VAR_5 = FUNC_4(VAR_4);
 struct drm_connector *VAR_6 = &VAR_5->connector;
 int VAR_7;

 VAR_6->polled = VAR_0;

 VAR_7 = FUNC_3(VAR_4->dev, VAR_6,
     &VAR_2,
     VAR_1);
 if (VAR_7) {
  FUNC_0(VAR_5->dev,
         "failed to initialize connector with drm\n");
  return VAR_7;
 }

 FUNC_2(VAR_6, &VAR_3);
 FUNC_1(VAR_6, VAR_4);

 return 0;
}
