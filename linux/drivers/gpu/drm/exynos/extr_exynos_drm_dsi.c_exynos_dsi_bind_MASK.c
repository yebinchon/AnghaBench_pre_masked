
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_dsi {int dsi_host; scalar_t__ in_bridge_node; } ;
struct drm_encoder {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_bridge {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_encoder* FUNC_0 (struct device*) ;
 int FUNC_1 (struct drm_encoder*,struct drm_bridge*,int *) ;
 int FUNC_2 (struct drm_encoder*,int *) ;
 int FUNC_3 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 struct exynos_dsi* FUNC_4 (struct drm_encoder*) ;
 int FUNC_5 (struct drm_encoder*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int *) ;
 struct drm_bridge* FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_4, struct device *VAR_5,
    void *VAR_6)
{
 struct drm_encoder *VAR_7 = FUNC_0(VAR_4);
 struct exynos_dsi *VAR_8 = FUNC_4(VAR_7);
 struct drm_device *VAR_9 = VAR_6;
 struct drm_bridge *VAR_10;
 int VAR_11;

 FUNC_3(VAR_9, VAR_7, &VAR_2,
    VAR_0, ((void*)0));

 FUNC_2(VAR_7, &VAR_3);

 VAR_11 = FUNC_5(VAR_7, VAR_1);
 if (VAR_11 < 0)
  return VAR_11;

 if (VAR_8->in_bridge_node) {
  VAR_10 = FUNC_7(VAR_8->in_bridge_node);
  if (VAR_10)
   FUNC_1(VAR_7, VAR_10, ((void*)0));
 }

 return FUNC_6(&VAR_8->dsi_host);
}
