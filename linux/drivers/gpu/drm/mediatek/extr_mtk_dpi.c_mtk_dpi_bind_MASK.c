
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int possible_crtcs; } ;
struct mtk_dpi {int ddp_comp; TYPE_1__ encoder; int color_format; int yc_map; int channel_swap; int bit_num; int bridge; } ;
struct drm_device {int dummy; } ;
struct device {int of_node; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct device*,char*,int,...) ;
 struct mtk_dpi* FUNC_2 (struct device*) ;
 int FUNC_3 (TYPE_1__*,int ,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (struct drm_device*,TYPE_1__*,int *,int ,int *) ;
 int FUNC_7 (struct drm_device*,int *) ;
 int FUNC_8 (struct drm_device*,int *) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_9(struct device *VAR_7, struct device *VAR_8, void *VAR_9)
{
 struct mtk_dpi *VAR_10 = FUNC_2(VAR_7);
 struct drm_device *VAR_11 = VAR_9;
 int VAR_12;

 VAR_12 = FUNC_7(VAR_11, &VAR_10->ddp_comp);
 if (VAR_12 < 0) {
  FUNC_1(VAR_7, "Failed to register component %pOF: %d\n",
   VAR_7->of_node, VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_6(VAR_11, &VAR_10->encoder, &VAR_5,
          VAR_0, ((void*)0));
 if (VAR_12) {
  FUNC_1(VAR_7, "Failed to initialize decoder: %d\n", VAR_12);
  goto err_unregister;
 }
 FUNC_5(&VAR_10->encoder, &VAR_6);


 VAR_10->encoder.possible_crtcs = FUNC_0(1);

 VAR_12 = FUNC_3(&VAR_10->encoder, VAR_10->bridge, ((void*)0));
 if (VAR_12) {
  FUNC_1(VAR_7, "Failed to attach bridge: %d\n", VAR_12);
  goto err_cleanup;
 }

 VAR_10->bit_num = VAR_2;
 VAR_10->channel_swap = VAR_3;
 VAR_10->yc_map = VAR_4;
 VAR_10->color_format = VAR_1;

 return 0;

err_cleanup:
 FUNC_4(&VAR_10->encoder);
err_unregister:
 FUNC_8(VAR_11, &VAR_10->ddp_comp);
 return VAR_12;
}
