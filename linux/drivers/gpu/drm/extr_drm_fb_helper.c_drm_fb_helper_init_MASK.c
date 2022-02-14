
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int funcs; } ;
struct drm_fb_helper {TYPE_1__ client; } ;
struct drm_device {struct drm_fb_helper* fb_helper; } ;


 int FUNC_0 (struct drm_device*,TYPE_1__*,char*,int *) ;
 int VAR_0 ;

int FUNC_1(struct drm_device *VAR_1,
         struct drm_fb_helper *VAR_2,
         int VAR_3)
{
 int VAR_4;

 if (!VAR_0) {
  VAR_1->fb_helper = VAR_2;
  return 0;
 }





 if (!VAR_2->client.funcs) {
  VAR_4 = FUNC_0(VAR_1, &VAR_2->client, "drm_fb_helper", ((void*)0));
  if (VAR_4)
   return VAR_4;
 }

 VAR_1->fb_helper = VAR_2;

 return 0;
}
