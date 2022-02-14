
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector {int interlace_allowed; int polled; } ;
struct hdmi_context {int dev; scalar_t__ bridge; int drm_dev; struct drm_connector connector; } ;
struct drm_encoder {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct drm_encoder*,scalar_t__,int *) ;
 int FUNC_2 (struct drm_connector*,struct drm_encoder*) ;
 int FUNC_3 (struct drm_connector*,int *) ;
 int FUNC_4 (int ,struct drm_connector*,int *,int ) ;
 struct hdmi_context* FUNC_5 (struct drm_encoder*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct drm_encoder *VAR_4)
{
 struct hdmi_context *VAR_5 = FUNC_5(VAR_4);
 struct drm_connector *VAR_6 = &VAR_5->connector;
 int VAR_7;

 VAR_6->interlace_allowed = 1;
 VAR_6->polled = VAR_0;

 VAR_7 = FUNC_4(VAR_5->drm_dev, VAR_6,
   &VAR_2, VAR_1);
 if (VAR_7) {
  FUNC_0(VAR_5->dev,
         "Failed to initialize connector with drm\n");
  return VAR_7;
 }

 FUNC_3(VAR_6, &VAR_3);
 FUNC_2(VAR_6, VAR_4);

 if (VAR_5->bridge) {
  VAR_7 = FUNC_1(VAR_4, VAR_5->bridge, ((void*)0));
  if (VAR_7)
   FUNC_0(VAR_5->dev, "Failed to attach bridge\n");
 }

 return VAR_7;
}
