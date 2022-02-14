
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct drm_encoder {int possible_clones; scalar_t__ possible_crtcs; } ;
struct drm_device {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_device*,struct device_node*) ;

int FUNC_1(struct drm_device *VAR_1,
 struct drm_encoder *VAR_2, struct device_node *VAR_3)
{
 uint32_t VAR_4 = FUNC_0(VAR_1, VAR_3);







 if (VAR_4 == 0)
  return -VAR_0;

 VAR_2->possible_crtcs = VAR_4;


 VAR_2->possible_clones = ~0;

 return 0;
}
