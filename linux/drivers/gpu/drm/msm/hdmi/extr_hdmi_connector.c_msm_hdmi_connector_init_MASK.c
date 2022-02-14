
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector {int polled; scalar_t__ doublescan_allowed; scalar_t__ interlace_allowed; } ;
struct hdmi_connector {struct drm_connector base; int hpd_work; struct hdmi* hdmi; } ;
struct hdmi {int encoder; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct drm_connector* FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct drm_connector*,int ) ;
 int FUNC_3 (struct drm_connector*,int *) ;
 int FUNC_4 (int ,struct drm_connector*,int *,int ) ;
 int VAR_5 ;
 struct hdmi_connector* FUNC_5 (int,int ) ;
 int VAR_6 ;
 int VAR_7 ;

struct drm_connector *FUNC_6(struct hdmi *VAR_8)
{
 struct drm_connector *VAR_9 = ((void*)0);
 struct hdmi_connector *VAR_10;

 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_4);
 if (!VAR_10)
  return FUNC_0(-VAR_3);

 VAR_10->hdmi = VAR_8;
 FUNC_1(&VAR_10->hpd_work, VAR_7);

 VAR_9 = &VAR_10->base;

 FUNC_4(VAR_8->dev, VAR_9, &VAR_5,
   VAR_2);
 FUNC_3(VAR_9, &VAR_6);

 VAR_9->polled = VAR_0 |
   VAR_1;

 VAR_9->interlace_allowed = 0;
 VAR_9->doublescan_allowed = 0;

 FUNC_2(VAR_9, VAR_8->encoder);

 return VAR_9;
}
