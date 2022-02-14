
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int possible_crtcs; scalar_t__ possible_clones; } ;
struct drm_device {int dev; } ;
struct drm_bridge {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct drm_encoder* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct drm_encoder*,struct drm_bridge*,int *) ;
 int FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 struct drm_bridge* FUNC_4 (struct device_node*) ;

int FUNC_5(struct drm_device *VAR_5, struct device_node *VAR_6)
{
 struct drm_encoder *VAR_7;
 struct drm_bridge *VAR_8;

 int VAR_9 = 0;

 VAR_7 = FUNC_0(VAR_5->dev, sizeof(*VAR_7), VAR_3);
 if (VAR_7 == ((void*)0))
  return -VAR_1;


 VAR_8 = FUNC_4(VAR_6);
 if (!VAR_8)
  return -VAR_2;

 VAR_7->possible_crtcs = 1;
 VAR_7->possible_clones = 0;
 VAR_9 = FUNC_3(VAR_5, VAR_7, &VAR_4,
          VAR_0, ((void*)0));
 if (VAR_9)
  return VAR_9;


 VAR_9 = FUNC_1(VAR_7, VAR_8, ((void*)0));
 if (VAR_9)
  FUNC_2(VAR_7);

 return VAR_9;
}
