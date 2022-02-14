
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int * dma_parms; } ;
struct platform_device {struct device dev; } ;
struct mtk_drm_private {int dma_parms_allocated; struct device* dma_dev; TYPE_2__* data; struct device_node** comp_node; struct device* mutex_dev; struct device_node* mutex_node; } ;
struct TYPE_3__ {int min_width; int min_height; int max_width; int max_height; int * funcs; } ;
struct drm_device {int irq_enabled; struct device* dev; TYPE_1__ mode_config; struct mtk_drm_private* dev_private; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {size_t* main_path; size_t* ext_path; size_t* third_path; int third_len; int ext_len; int main_len; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct device*,struct drm_device*) ;
 int FUNC_2 (struct device*,struct drm_device*) ;
 int FUNC_3 (struct device*,char*,...) ;
 int * FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,unsigned int) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_device*) ;
 int FUNC_10 (struct drm_device*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct drm_device*,size_t*,int ) ;
 int VAR_5 ;
 struct platform_device* FUNC_13 (struct device_node*) ;
 int FUNC_14 (struct device_node*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_15(struct drm_device *VAR_7)
{
 struct mtk_drm_private *VAR_8 = VAR_7->dev_private;
 struct platform_device *VAR_9;
 struct device_node *VAR_10;
 struct device *VAR_11;
 int VAR_12;

 if (!FUNC_11(&VAR_6))
  return -VAR_2;

 VAR_9 = FUNC_13(VAR_8->mutex_node);
 if (!VAR_9) {
  FUNC_3(VAR_7->dev, "Waiting for disp-mutex device %pOF\n",
   VAR_8->mutex_node);
  FUNC_14(VAR_8->mutex_node);
  return -VAR_2;
 }
 VAR_8->mutex_dev = &VAR_9->dev;

 FUNC_8(VAR_7);

 VAR_7->mode_config.min_width = 64;
 VAR_7->mode_config.min_height = 64;






 VAR_7->mode_config.max_width = 4096;
 VAR_7->mode_config.max_height = 4096;
 VAR_7->mode_config.funcs = &VAR_5;

 VAR_12 = FUNC_1(VAR_7->dev, VAR_7);
 if (VAR_12)
  goto err_config_cleanup;






 VAR_12 = FUNC_12(VAR_7, VAR_8->data->main_path,
      VAR_8->data->main_len);
 if (VAR_12 < 0)
  goto err_component_unbind;

 VAR_12 = FUNC_12(VAR_7, VAR_8->data->ext_path,
      VAR_8->data->ext_len);
 if (VAR_12 < 0)
  goto err_component_unbind;

 VAR_12 = FUNC_12(VAR_7, VAR_8->data->third_path,
      VAR_8->data->third_len);
 if (VAR_12 < 0)
  goto err_component_unbind;


 VAR_10 = VAR_8->comp_node[VAR_8->data->main_path[0]] ?:
      VAR_8->comp_node[VAR_8->data->ext_path[0]];
 VAR_9 = FUNC_13(VAR_10);
 if (!VAR_9) {
  VAR_12 = -VAR_0;
  FUNC_3(VAR_7->dev, "Need at least one OVL device\n");
  goto err_component_unbind;
 }

 VAR_11 = &VAR_9->dev;
 VAR_8->dma_dev = VAR_11;





 if (!VAR_11->dma_parms) {
  VAR_8->dma_parms_allocated = 1;
  VAR_11->dma_parms =
   FUNC_4(VAR_7->dev, sizeof(*VAR_11->dma_parms),
         VAR_3);
 }
 if (!VAR_11->dma_parms) {
  VAR_12 = -VAR_1;
  goto err_component_unbind;
 }

 VAR_12 = FUNC_5(VAR_11, (unsigned int)FUNC_0(32));
 if (VAR_12) {
  FUNC_3(VAR_11, "Failed to set DMA segment size\n");
  goto err_unset_dma_parms;
 }






 VAR_7->irq_enabled = 1;
 VAR_12 = FUNC_10(VAR_7, VAR_4);
 if (VAR_12 < 0)
  goto err_unset_dma_parms;

 FUNC_6(VAR_7);
 FUNC_9(VAR_7);

 return 0;

err_unset_dma_parms:
 if (VAR_8->dma_parms_allocated)
  VAR_11->dma_parms = ((void*)0);
err_component_unbind:
 FUNC_2(VAR_7->dev, VAR_7);
err_config_cleanup:
 FUNC_7(VAR_7);

 return VAR_12;
}
