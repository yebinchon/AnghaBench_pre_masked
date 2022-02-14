
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hdmi_i2c_adapter {int sw_done; struct hdmi* hdmi; } ;
struct hdmi {struct drm_device* dev; } ;
struct drm_device {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct hdmi*,int ) ;
 int FUNC_2 (struct hdmi*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct hdmi_i2c_adapter *VAR_5)
{
 struct hdmi *VAR_6 = VAR_5->hdmi;
 struct drm_device *VAR_7 = VAR_6->dev;
 uint32_t VAR_8 = 0xffff;
 uint32_t VAR_9;

 do {
  --VAR_8;

  FUNC_2(VAR_6, VAR_4,
    VAR_1 |
    VAR_3);

  VAR_9 = FUNC_1(VAR_6, VAR_4);

 } while ((VAR_9 & VAR_2) && VAR_8);

 if (!VAR_8) {
  FUNC_0(VAR_7->dev, "timeout waiting for DDC\n");
  return -VAR_0;
 }

 VAR_5->sw_done = 0;

 return 0;
}
