
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_psb_private {int child_dev_num; struct child_device_config* child_dev; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;
struct child_device_config {scalar_t__ dvo_port; scalar_t__ device_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct drm_device *VAR_2)
{
 struct drm_psb_private *VAR_3 = VAR_2->dev_private;
 struct child_device_config *VAR_4;
 int VAR_5;

 if (!VAR_3->child_dev_num)
  return 0;

 for (VAR_5 = 0; VAR_5 < VAR_3->child_dev_num; VAR_5++) {
  VAR_4 = VAR_3->child_dev + VAR_5;

  if (VAR_4->dvo_port == VAR_1 &&
      VAR_4->device_type == VAR_0)
   return 1;
 }
 return 0;
}
