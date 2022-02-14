
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct drm_display_info {int num_bus_formats; int* bus_formats; } ;
struct drm_connector {struct drm_display_info display_info; } ;


 int VAR_0 ;



 struct drm_connector* FUNC_0 (struct drm_encoder const*) ;

__attribute__((used)) static int FUNC_1(const struct drm_encoder *VAR_1)
{
 struct drm_connector *VAR_2;
 struct drm_display_info *VAR_3;

 VAR_2 = FUNC_0(VAR_1);
 if (!VAR_2)
  return -VAR_0;

 VAR_3 = &VAR_2->display_info;
 if (VAR_3->num_bus_formats != 1)
  return -VAR_0;

 switch (VAR_3->bus_formats[0]) {
 case 130:
  return 18;

 case 129:
 case 128:
  return 24;
 }

 return -VAR_0;
}
