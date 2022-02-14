
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (struct drm_encoder*,int *) ;
 int FUNC_3 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 TYPE_1__* FUNC_4 (struct drm_encoder*) ;
 int FUNC_5 (struct drm_encoder*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct drm_encoder*,int ) ;

int FUNC_7(struct drm_device *VAR_4, struct drm_encoder *VAR_5)
{
 int VAR_6;

 FUNC_3(VAR_4, VAR_5, &VAR_2,
    VAR_0, ((void*)0));

 FUNC_2(VAR_5, &VAR_3);

 VAR_6 = FUNC_6(VAR_5, VAR_1);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_5(VAR_5);
 if (VAR_6) {
  FUNC_0(FUNC_4(VAR_5)->dev,
         "failed to create connector ret = %d\n", VAR_6);
  FUNC_1(VAR_5);
  return VAR_6;
 }

 return 0;
}
