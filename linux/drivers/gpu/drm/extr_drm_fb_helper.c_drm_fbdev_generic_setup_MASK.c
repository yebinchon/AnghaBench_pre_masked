
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_fb_helper {unsigned int preferred_bpp; int client; } ;
struct TYPE_2__ {unsigned int preferred_depth; } ;
struct drm_device {int dev; TYPE_1__ mode_config; int fb_helper; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct drm_device*,int *,char*,int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int FUNC_6 (struct drm_fb_helper*) ;
 struct drm_fb_helper* FUNC_7 (int,int ) ;

int FUNC_8(struct drm_device *VAR_4, unsigned int VAR_5)
{
 struct drm_fb_helper *VAR_6;
 int VAR_7;

 FUNC_2(VAR_4->fb_helper, "fb_helper is already set!\n");

 if (!VAR_3)
  return 0;

 VAR_6 = FUNC_7(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_4, &VAR_6->client, "fbdev", &VAR_2);
 if (VAR_7) {
  FUNC_6(VAR_6);
  FUNC_1(VAR_4->dev, "Failed to register client: %d\n", VAR_7);
  return VAR_7;
 }

 if (!VAR_5)
  VAR_5 = VAR_4->mode_config.preferred_depth;
 if (!VAR_5)
  VAR_5 = 32;
 VAR_6->preferred_bpp = VAR_5;

 VAR_7 = FUNC_5(&VAR_6->client);
 if (VAR_7)
  FUNC_0(VAR_4->dev, "client hotplug ret=%d\n", VAR_7);

 FUNC_4(&VAR_6->client);

 return 0;
}
