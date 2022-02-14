
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * content_type_property; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (struct drm_device*,int ,char*,int ,int ) ;

int FUNC_2(struct drm_device *VAR_2)
{
 if (VAR_2->mode_config.content_type_property)
  return 0;

 VAR_2->mode_config.content_type_property =
  FUNC_1(VAR_2, 0, "content type",
      VAR_1,
      FUNC_0(VAR_1));

 if (VAR_2->mode_config.content_type_property == ((void*)0))
  return -VAR_0;

 return 0;
}
