
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_dsi {int ddp_comp; int host; } ;
struct drm_device {int dummy; } ;
struct device {int of_node; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct device*,char*,int,...) ;
 struct mtk_dsi* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct drm_device*,int *) ;
 int FUNC_6 (struct drm_device*,int *) ;
 int FUNC_7 (struct drm_device*,struct mtk_dsi*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_0, struct device *VAR_1, void *VAR_2)
{
 int VAR_3;
 struct drm_device *VAR_4 = VAR_2;
 struct mtk_dsi *VAR_5 = FUNC_2(VAR_0);

 VAR_3 = FUNC_5(VAR_4, &VAR_5->ddp_comp);
 if (VAR_3 < 0) {
  FUNC_1(VAR_0, "Failed to register component %pOF: %d\n",
   VAR_0->of_node, VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_3(&VAR_5->host);
 if (VAR_3 < 0) {
  FUNC_1(VAR_0, "failed to register DSI host: %d\n", VAR_3);
  goto err_ddp_comp_unregister;
 }

 VAR_3 = FUNC_7(VAR_4, VAR_5);
 if (VAR_3) {
  FUNC_0("Encoder create failed with %d\n", VAR_3);
  goto err_unregister;
 }

 return 0;

err_unregister:
 FUNC_4(&VAR_5->host);
err_ddp_comp_unregister:
 FUNC_6(VAR_4, &VAR_5->ddp_comp);
 return VAR_3;
}
