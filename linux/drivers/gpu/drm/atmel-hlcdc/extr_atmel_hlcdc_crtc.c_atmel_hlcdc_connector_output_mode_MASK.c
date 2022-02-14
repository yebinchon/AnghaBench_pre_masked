
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct drm_display_info {int num_bus_formats; int* bus_formats; } ;
struct drm_connector_state {struct drm_encoder* best_encoder; struct drm_connector* connector; } ;
struct drm_connector {struct drm_encoder* encoder; struct drm_display_info display_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (struct drm_encoder*) ;

__attribute__((used)) static int FUNC_1(struct drm_connector_state *VAR_5)
{
 struct drm_connector *VAR_6 = VAR_5->connector;
 struct drm_display_info *VAR_7 = &VAR_6->display_info;
 struct drm_encoder *VAR_8;
 unsigned int VAR_9 = 0;
 int VAR_10;

 VAR_8 = VAR_5->best_encoder;
 if (!VAR_8)
  VAR_8 = VAR_6->encoder;

 switch (FUNC_0(VAR_8)) {
 case 0:
  break;
 case 131:
  return VAR_0;
 case 130:
  return VAR_1;
 case 129:
  return VAR_2;
 case 128:
  return VAR_3;
 default:
  return -VAR_4;
 }

 for (VAR_10 = 0; VAR_10 < VAR_7->num_bus_formats; VAR_10++) {
  switch (VAR_7->bus_formats[VAR_10]) {
  case 131:
   VAR_9 |= VAR_0;
   break;
  case 130:
   VAR_9 |= VAR_1;
   break;
  case 129:
   VAR_9 |= VAR_2;
   break;
  case 128:
   VAR_9 |= VAR_3;
   break;
  default:
   break;
  }
 }

 return VAR_9;
}
