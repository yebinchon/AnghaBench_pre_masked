
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mixer_context {int dev; int flags; struct drm_device* drm_dev; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_device*,int ) ;
 int FUNC_2 (struct mixer_context*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (struct mixer_context*) ;

__attribute__((used)) static int FUNC_5(struct mixer_context *VAR_1,
   struct drm_device *VAR_2)
{
 int VAR_3;

 VAR_1->drm_dev = VAR_2;


 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3) {
  FUNC_0(VAR_1->dev,
         "mixer_resources_init failed ret=%d\n", VAR_3);
  return VAR_3;
 }

 if (FUNC_3(VAR_0, &VAR_1->flags)) {

  VAR_3 = FUNC_4(VAR_1);
  if (VAR_3) {
   FUNC_0(VAR_1->dev,
          "vp_resources_init failed ret=%d\n", VAR_3);
   return VAR_3;
  }
 }

 return FUNC_1(VAR_2, VAR_1->dev);
}
