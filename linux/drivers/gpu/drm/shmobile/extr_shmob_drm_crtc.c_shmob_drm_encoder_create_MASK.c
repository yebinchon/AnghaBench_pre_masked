
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int possible_crtcs; } ;
struct TYPE_2__ {int dpms; struct drm_encoder encoder; } ;
struct shmob_drm_device {int ddev; TYPE_1__ encoder; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_encoder*,int *) ;
 int FUNC_1 (int ,struct drm_encoder*,int *,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_2(struct shmob_drm_device *VAR_4)
{
 struct drm_encoder *VAR_5 = &VAR_4->encoder.encoder;
 int VAR_6;

 VAR_4->encoder.dpms = VAR_0;

 VAR_5->possible_crtcs = 1;

 VAR_6 = FUNC_1(VAR_4->ddev, VAR_5, &VAR_2,
          VAR_1, ((void*)0));
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_0(VAR_5, &VAR_3);

 return 0;
}
