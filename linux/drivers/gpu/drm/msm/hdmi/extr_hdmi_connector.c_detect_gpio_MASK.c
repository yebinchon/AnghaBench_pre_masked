
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_platform_config {struct hdmi_gpio_data* gpios; } ;
struct hdmi_gpio_data {int gpiod; } ;
struct hdmi {struct hdmi_platform_config* config; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static enum drm_connector_status FUNC_1(struct hdmi *VAR_3)
{
 const struct hdmi_platform_config *VAR_4 = VAR_3->config;
 struct hdmi_gpio_data VAR_5 = VAR_4->gpios[VAR_0];

 return FUNC_0(VAR_5.gpiod) ?
   VAR_1 :
   VAR_2;
}
