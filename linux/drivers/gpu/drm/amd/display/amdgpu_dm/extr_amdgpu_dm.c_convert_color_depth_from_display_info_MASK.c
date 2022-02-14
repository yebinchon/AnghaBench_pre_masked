
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct drm_connector_state {int max_requested_bpc; } ;
struct TYPE_2__ {int bpc; } ;
struct drm_connector {struct drm_connector_state* state; TYPE_1__ display_info; } ;
typedef enum dc_color_depth { ____Placeholder_dc_color_depth } dc_color_depth ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static enum dc_color_depth
FUNC_1(const struct drm_connector *VAR_7,
          const struct drm_connector_state *VAR_8)
{
 uint8_t VAR_9 = (uint8_t)VAR_7->display_info.bpc;


 VAR_9 = VAR_9 ? VAR_9 : 8;

 if (!VAR_8)
  VAR_8 = VAR_7->state;

 if (VAR_8) {
  VAR_9 = FUNC_0(VAR_9, VAR_8->max_requested_bpc);


  VAR_9 = VAR_9 - (VAR_9 & 1);
 }

 switch (VAR_9) {
 case 0:





  return VAR_5;
 case 6:
  return VAR_4;
 case 8:
  return VAR_5;
 case 10:
  return VAR_0;
 case 12:
  return VAR_1;
 case 14:
  return VAR_2;
 case 16:
  return VAR_3;
 default:
  return VAR_6;
 }
}
