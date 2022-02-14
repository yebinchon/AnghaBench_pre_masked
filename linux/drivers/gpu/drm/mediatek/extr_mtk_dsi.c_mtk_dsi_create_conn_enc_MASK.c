
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int possible_crtcs; } ;
struct mtk_dsi {TYPE_1__ encoder; scalar_t__ bridge; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (struct drm_device*,TYPE_1__*,int *,int ,int *) ;
 int FUNC_5 (struct drm_device*,struct mtk_dsi*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct drm_device *VAR_3, struct mtk_dsi *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_4(VAR_3, &VAR_4->encoder, &VAR_1,
          VAR_0, ((void*)0));
 if (VAR_5) {
  FUNC_0("Failed to encoder init to drm\n");
  return VAR_5;
 }
 FUNC_3(&VAR_4->encoder, &VAR_2);





 VAR_4->encoder.possible_crtcs = 1;


 if (VAR_4->bridge) {
  VAR_5 = FUNC_1(&VAR_4->encoder, VAR_4->bridge, ((void*)0));
  if (VAR_5) {
   FUNC_0("Failed to attach bridge to drm\n");
   goto err_encoder_cleanup;
  }
 } else {

  VAR_5 = FUNC_5(VAR_3, VAR_4);
  if (VAR_5)
   goto err_encoder_cleanup;
 }

 return 0;

err_encoder_cleanup:
 FUNC_2(&VAR_4->encoder);
 return VAR_5;
}
