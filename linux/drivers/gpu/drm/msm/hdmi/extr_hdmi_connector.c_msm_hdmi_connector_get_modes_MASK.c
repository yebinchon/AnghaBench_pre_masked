
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hdmi_connector {struct hdmi* hdmi; } ;
struct hdmi {int hdmi_mode; int i2c; } ;
struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_connector*,struct edid*) ;
 int FUNC_1 (struct drm_connector*,struct edid*) ;
 int FUNC_2 (struct edid*) ;
 struct edid* FUNC_3 (struct drm_connector*,int ) ;
 int FUNC_4 (struct hdmi*,int ) ;
 int FUNC_5 (struct hdmi*,int ,int) ;
 int FUNC_6 (struct edid*) ;
 struct hdmi_connector* FUNC_7 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_8(struct drm_connector *VAR_2)
{
 struct hdmi_connector *VAR_3 = FUNC_7(VAR_2);
 struct hdmi *VAR_4 = VAR_3->hdmi;
 struct edid *VAR_5;
 uint32_t VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_4(VAR_4, VAR_1);
 FUNC_5(VAR_4, VAR_1, VAR_6 | VAR_0);

 VAR_5 = FUNC_3(VAR_2, VAR_4->i2c);

 FUNC_5(VAR_4, VAR_1, VAR_6);

 VAR_4->hdmi_mode = FUNC_2(VAR_5);
 FUNC_1(VAR_2, VAR_5);

 if (VAR_5) {
  VAR_7 = FUNC_0(VAR_2, VAR_5);
  FUNC_6(VAR_5);
 }

 return VAR_7;
}
