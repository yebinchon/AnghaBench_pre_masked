
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_avi_infoframe {int itc; void* content_type; } ;
struct drm_connector_state {int content_type; } ;





 int VAR_0 ;

 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;

void FUNC_0(struct hdmi_avi_infoframe *VAR_5,
      const struct drm_connector_state *VAR_6)
{
 switch (VAR_6->content_type) {
 case 129:
  VAR_5->content_type = VAR_3;
  break;
 case 131:
  VAR_5->content_type = VAR_1;
  break;
 case 130:
  VAR_5->content_type = VAR_2;
  break;
 case 128:
  VAR_5->content_type = VAR_4;
  break;
 default:

  VAR_5->content_type = VAR_3;
 }

 VAR_5->itc = VAR_6->content_type != VAR_0;
}
