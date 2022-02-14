
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct drm_encoder {scalar_t__ possible_crtcs; } ;
struct drm_device {int dummy; } ;
struct device {int of_node; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_encoder*,int *) ;
 int FUNC_2 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 scalar_t__ FUNC_3 (struct drm_device*,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct device *VAR_4,
          struct drm_device *VAR_5,
          struct drm_encoder *VAR_6)
{
 int VAR_7;
 u32 VAR_8 = FUNC_3(VAR_5, VAR_4->of_node);

 if (!VAR_8) {
  FUNC_0("failed to find crtc mask\n");
  return -VAR_1;
 }

 VAR_6->possible_crtcs = VAR_8;
 VAR_7 = FUNC_2(VAR_5, VAR_6, &VAR_2,
          VAR_0, ((void*)0));
 if (VAR_7) {
  FUNC_0("failed to init dsi encoder\n");
  return VAR_7;
 }

 FUNC_1(VAR_6, &VAR_3);

 return 0;
}
