
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msm_kms {TYPE_2__* funcs; } ;
struct msm_drm_private {struct msm_kms* kms; } ;
struct hdmi_platform_config {scalar_t__ pwr_clk_cnt; } ;
struct hdmi_connector {struct hdmi* hdmi; } ;
struct hdmi {int * pwr_clks; int encoder; struct hdmi_platform_config* config; } ;
struct drm_display_mode {int clock; } ;
struct drm_connector {TYPE_1__* dev; } ;
struct TYPE_4__ {long (* round_pixclk ) (struct msm_kms*,long,int ) ;} ;
struct TYPE_3__ {struct msm_drm_private* dev_private; } ;


 int FUNC_0 (char*,long,long) ;
 int VAR_0 ;
 long FUNC_1 (int ,long) ;
 long FUNC_2 (struct msm_kms*,long,int ) ;
 struct hdmi_connector* FUNC_3 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_4(struct drm_connector *VAR_1,
     struct drm_display_mode *VAR_2)
{
 struct hdmi_connector *VAR_3 = FUNC_3(VAR_1);
 struct hdmi *VAR_4 = VAR_3->hdmi;
 const struct hdmi_platform_config *VAR_5 = VAR_4->config;
 struct msm_drm_private *VAR_6 = VAR_1->dev->dev_private;
 struct msm_kms *VAR_7 = VAR_6->kms;
 long VAR_8, VAR_9;

 VAR_9 = 1000 * VAR_2->clock;
 VAR_8 = VAR_7->funcs->round_pixclk(VAR_7,
   VAR_9, VAR_3->hdmi->encoder);





 if (VAR_5->pwr_clk_cnt > 0)
  VAR_8 = FUNC_1(VAR_4->pwr_clks[0], VAR_8);

 FUNC_0("requested=%ld, actual=%ld", VAR_9, VAR_8);

 if (VAR_8 != VAR_9)
  return VAR_0;

 return 0;
}
