
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct dw_dsi {struct drm_bridge* bridge; struct drm_encoder encoder; } ;
struct drm_device {int dummy; } ;
struct drm_bridge {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_encoder*,struct drm_bridge*,int *) ;

__attribute__((used)) static int FUNC_2(struct drm_device *VAR_0, struct dw_dsi *VAR_1)
{
 struct drm_encoder *VAR_2 = &VAR_1->encoder;
 struct drm_bridge *VAR_3 = VAR_1->bridge;
 int VAR_4;


 VAR_4 = FUNC_1(VAR_2, VAR_3, ((void*)0));
 if (VAR_4) {
  FUNC_0("failed to attach external bridge\n");
  return VAR_4;
 }

 return 0;
}
