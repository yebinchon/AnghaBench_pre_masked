
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_panel {int dummy; } ;
struct drm_bridge {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct drm_bridge* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct drm_bridge*) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,struct drm_bridge**) ;
 struct drm_bridge** FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct drm_bridge**) ;
 struct drm_bridge* FUNC_5 (struct drm_panel*,int ) ;

struct drm_bridge *FUNC_6(struct device *VAR_3,
          struct drm_panel *VAR_4,
          u32 VAR_5)
{
 struct drm_bridge **VAR_6, *VAR_7;

 VAR_6 = FUNC_3(VAR_2, sizeof(*VAR_6),
      VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_5(VAR_4, VAR_5);
 if (!FUNC_1(VAR_7)) {
  *VAR_6 = VAR_7;
  FUNC_2(VAR_3, VAR_6);
 } else {
  FUNC_4(VAR_6);
 }

 return VAR_7;
}
