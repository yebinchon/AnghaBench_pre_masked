
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_platform_config {struct hdmi_gpio_data* gpios; } ;
struct hdmi_gpio_data {int gpiod; } ;
struct hdmi_connector {struct hdmi* hdmi; } ;
struct hdmi {struct hdmi_platform_config* config; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int FUNC_0 (char*,int) ;
 size_t VAR_0 ;
 int FUNC_1 (struct hdmi*) ;
 int FUNC_2 (struct hdmi*) ;
 int FUNC_3 (int) ;
 struct hdmi_connector* FUNC_4 (struct drm_connector*) ;

__attribute__((used)) static enum drm_connector_status FUNC_5(
  struct drm_connector *VAR_1, bool VAR_2)
{
 struct hdmi_connector *VAR_3 = FUNC_4(VAR_1);
 struct hdmi *VAR_4 = VAR_3->hdmi;
 const struct hdmi_platform_config *VAR_5 = VAR_4->config;
 struct hdmi_gpio_data VAR_6 = VAR_5->gpios[VAR_0];
 enum drm_connector_status VAR_7, VAR_8;
 int VAR_9 = 20;





 if (!VAR_6.gpiod)
  return FUNC_2(VAR_4);

 do {
  VAR_7 = FUNC_1(VAR_4);
  VAR_8 = FUNC_2(VAR_4);

  if (VAR_7 == VAR_8)
   break;

  FUNC_3(10);
 } while (--VAR_9);





 if (VAR_7 != VAR_8) {
  FUNC_0("HDMI_HPD_INT_STATUS tells us: %d", VAR_8);
  FUNC_0("hpd gpio tells us: %d", VAR_7);
 }

 return VAR_7;
}
