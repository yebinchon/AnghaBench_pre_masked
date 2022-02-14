
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct imx_ldb_channel {int chno; int connector; scalar_t__ panel; int ddc; scalar_t__ bridge; struct drm_encoder encoder; int child; struct imx_ldb* ldb; } ;
struct imx_ldb {int ldb_ctrl; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct drm_encoder*,scalar_t__,int *) ;
 int FUNC_2 (int *,struct drm_encoder*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct drm_device*,int *,int *,int ,int ) ;
 int FUNC_5 (struct drm_encoder*,int *) ;
 int FUNC_6 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 int FUNC_7 (scalar_t__,int *) ;
 int FUNC_8 (struct drm_device*,struct drm_encoder*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (struct imx_ldb*,int) ;

__attribute__((used)) static int FUNC_10(struct drm_device *VAR_7,
 struct imx_ldb_channel *VAR_8)
{
 struct imx_ldb *VAR_9 = VAR_8->ldb;
 struct drm_encoder *VAR_10 = &VAR_8->encoder;
 int VAR_11;

 VAR_11 = FUNC_8(VAR_7, VAR_10, VAR_8->child);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_9(VAR_9, VAR_8->chno);
 if (VAR_11)
  return VAR_11;

 if (VAR_9->ldb_ctrl & VAR_2) {
  VAR_11 = FUNC_9(VAR_9, 1);
  if (VAR_11)
   return VAR_11;
 }

 FUNC_5(VAR_10, &VAR_6);
 FUNC_6(VAR_7, VAR_10, &VAR_5,
    VAR_1, ((void*)0));

 if (VAR_8->bridge) {
  VAR_11 = FUNC_1(&VAR_8->encoder,
     VAR_8->bridge, ((void*)0));
  if (VAR_11) {
   FUNC_0("Failed to initialize bridge with drm\n");
   return VAR_11;
  }
 } else {






  FUNC_3(&VAR_8->connector,
    &VAR_4);
  FUNC_4(VAR_7, &VAR_8->connector,
         &VAR_3,
         VAR_0,
         VAR_8->ddc);
  FUNC_2(&VAR_8->connector, VAR_10);
 }

 if (VAR_8->panel) {
  VAR_11 = FUNC_7(VAR_8->panel,
           &VAR_8->connector);
  if (VAR_11)
   return VAR_11;
 }

 return 0;
}
