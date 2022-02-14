
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {TYPE_1__* crtc; } ;
struct hdmi_context {int dev; TYPE_5__* drv_data; TYPE_2__ encoder; } ;
struct drm_display_mode {int clock; } ;
struct TYPE_12__ {struct drm_display_mode mode; } ;
struct TYPE_10__ {TYPE_3__* data; } ;
struct TYPE_11__ {TYPE_4__ phy_confs; } ;
struct TYPE_9__ {int * conf; } ;
struct TYPE_7__ {TYPE_6__* state; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct hdmi_context*,int) ;
 int FUNC_2 (struct hdmi_context*,int) ;
 int FUNC_3 (struct hdmi_context*) ;
 int FUNC_4 (struct hdmi_context*,int) ;
 int FUNC_5 (struct hdmi_context*,int ,int const*,int) ;
 int FUNC_6 (struct hdmi_context*) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static void FUNC_8(struct hdmi_context *VAR_0)
{
 struct drm_display_mode *VAR_1 = &VAR_0->encoder.crtc->state->mode;
 int VAR_2;
 const u8 *VAR_3;

 VAR_2 = FUNC_2(VAR_0, VAR_1->clock * 1000);
 if (VAR_2 < 0) {
  FUNC_0(VAR_0->dev, "failed to find hdmiphy conf\n");
  return;
 }
 VAR_3 = VAR_0->drv_data->phy_confs.data[VAR_2].conf;

 FUNC_1(VAR_0, 0);

 FUNC_3(VAR_0);

 FUNC_4(VAR_0, 1);
 VAR_2 = FUNC_5(VAR_0, 0, VAR_3, 32);
 if (VAR_2) {
  FUNC_0(VAR_0->dev, "failed to configure hdmiphy\n");
  return;
 }
 FUNC_4(VAR_0, 0);
 FUNC_1(VAR_0, 1);
 FUNC_7(10000, 12000);
 FUNC_6(VAR_0);
}
