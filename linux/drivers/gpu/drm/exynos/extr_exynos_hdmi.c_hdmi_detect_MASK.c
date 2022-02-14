
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_context {int notifier; int hpd_gpio; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct hdmi_context* FUNC_1 (struct drm_connector*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static enum drm_connector_status FUNC_3(struct drm_connector *VAR_3,
    bool VAR_4)
{
 struct hdmi_context *VAR_5 = FUNC_1(VAR_3);

 if (FUNC_2(VAR_5->hpd_gpio))
  return VAR_1;

 FUNC_0(VAR_5->notifier, VAR_0);
 return VAR_2;
}
