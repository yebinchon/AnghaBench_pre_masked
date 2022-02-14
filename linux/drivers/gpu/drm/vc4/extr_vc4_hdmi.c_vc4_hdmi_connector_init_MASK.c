
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector {int polled; int interlace_allowed; scalar_t__ doublescan_allowed; } ;
struct vc4_hdmi_connector {struct drm_encoder* encoder; struct drm_connector base; } ;
struct drm_encoder {int dummy; } ;
struct drm_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct drm_connector* FUNC_0 (int) ;
 int VAR_4 ;
 struct vc4_hdmi_connector* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct drm_connector*,struct drm_encoder*) ;
 int FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (struct drm_connector*,int *) ;
 int FUNC_5 (struct drm_device*,struct drm_connector*,int *,int ) ;
 int FUNC_6 (struct drm_device*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static struct drm_connector *FUNC_7(struct drm_device *VAR_7,
           struct drm_encoder *VAR_8)
{
 struct drm_connector *VAR_9;
 struct vc4_hdmi_connector *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_1(VAR_7->dev, sizeof(*VAR_10),
          VAR_4);
 if (!VAR_10)
  return FUNC_0(-VAR_3);
 VAR_9 = &VAR_10->base;

 VAR_10->encoder = VAR_8;

 FUNC_5(VAR_7, VAR_9, &VAR_5,
      VAR_2);
 FUNC_4(VAR_9, &VAR_6);


 VAR_11 = FUNC_6(VAR_7);
 if (VAR_11)
  return FUNC_0(VAR_11);

 FUNC_3(VAR_9);

 VAR_9->polled = (VAR_0 |
        VAR_1);

 VAR_9->interlace_allowed = 1;
 VAR_9->doublescan_allowed = 0;

 FUNC_2(VAR_9, VAR_8);

 return VAR_9;
}
