
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_drm_private {int num_pipes; struct mtk_ddp_comp** ddp_comp; struct device_node** comp_node; int mutex_dev; int config_regs; } ;
struct mtk_drm_crtc {unsigned int ddp_comp_nr; unsigned int layer_nr; int base; int * planes; struct mtk_ddp_comp** ddp_comp; int mutex; int config_regs; } ;
struct mtk_ddp_comp {int dummy; } ;
struct drm_plane {int dummy; } ;
struct drm_device {struct device* dev; struct mtk_drm_private* dev_private; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
typedef enum mtk_ddp_comp_id { ____Placeholder_mtk_ddp_comp_id } mtk_ddp_comp_id ;
typedef enum drm_plane_type { ____Placeholder_drm_plane_type } drm_plane_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,char*,int,int) ;
 int * FUNC_5 (struct device*,unsigned int,int,int ) ;
 struct mtk_ddp_comp** FUNC_6 (struct device*,unsigned int,int,int ) ;
 struct mtk_drm_crtc* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (int *,int ,int,int ) ;
 int FUNC_9 (int *,int ) ;
 unsigned int FUNC_10 (struct mtk_ddp_comp*) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (struct drm_device*,struct mtk_drm_crtc*,int *,int *,int) ;
 int FUNC_13 (struct drm_device*,int *,int ,int) ;

int FUNC_14(struct drm_device *VAR_7,
   const enum mtk_ddp_comp_id *VAR_8, unsigned int VAR_9)
{
 struct mtk_drm_private *VAR_10 = VAR_7->dev_private;
 struct device *VAR_11 = VAR_7->dev;
 struct mtk_drm_crtc *VAR_12;
 enum drm_plane_type VAR_13;
 unsigned int VAR_14;
 int VAR_15 = VAR_10->num_pipes;
 int VAR_16;
 int VAR_17;

 if (!VAR_8)
  return 0;

 for (VAR_17 = 0; VAR_17 < VAR_9; VAR_17++) {
  enum mtk_ddp_comp_id VAR_18 = VAR_8[VAR_17];
  struct device_node *VAR_19;

  VAR_19 = VAR_10->comp_node[VAR_18];
  if (!VAR_19) {
   FUNC_4(VAR_11,
     "Not creating crtc %d because component %d is disabled or missing\n",
     VAR_15, VAR_18);
   return 0;
  }
 }

 VAR_12 = FUNC_7(VAR_11, sizeof(*VAR_12), VAR_5);
 if (!VAR_12)
  return -VAR_4;

 VAR_12->config_regs = VAR_10->config_regs;
 VAR_12->ddp_comp_nr = VAR_9;
 VAR_12->ddp_comp = FUNC_6(VAR_11, VAR_12->ddp_comp_nr,
      sizeof(*VAR_12->ddp_comp),
      VAR_5);
 if (!VAR_12->ddp_comp)
  return -VAR_4;

 VAR_12->mutex = FUNC_11(VAR_10->mutex_dev, VAR_15);
 if (FUNC_1(VAR_12->mutex)) {
  VAR_16 = FUNC_2(VAR_12->mutex);
  FUNC_3(VAR_11, "Failed to get mutex: %d\n", VAR_16);
  return VAR_16;
 }

 for (VAR_17 = 0; VAR_17 < VAR_12->ddp_comp_nr; VAR_17++) {
  enum mtk_ddp_comp_id VAR_20 = VAR_8[VAR_17];
  struct mtk_ddp_comp *VAR_21;
  struct device_node *VAR_22;

  VAR_22 = VAR_10->comp_node[VAR_20];
  VAR_21 = VAR_10->ddp_comp[VAR_20];
  if (!VAR_21) {
   FUNC_3(VAR_11, "Component %pOF not initialized\n", VAR_22);
   VAR_16 = -VAR_3;
   return VAR_16;
  }

  VAR_12->ddp_comp[VAR_17] = VAR_21;
 }

 VAR_12->layer_nr = FUNC_10(VAR_12->ddp_comp[0]);
 VAR_12->planes = FUNC_5(VAR_11, VAR_12->layer_nr,
     sizeof(struct drm_plane),
     VAR_5);

 for (VAR_14 = 0; VAR_14 < VAR_12->layer_nr; VAR_14++) {
  VAR_13 = (VAR_14 == 0) ? VAR_2 :
    (VAR_14 == 1) ? VAR_0 :
      VAR_1;
  VAR_16 = FUNC_13(VAR_7, &VAR_12->planes[VAR_14],
         FUNC_0(VAR_15), VAR_13);
  if (VAR_16)
   return VAR_16;
 }

 VAR_16 = FUNC_12(VAR_7, VAR_12, &VAR_12->planes[0],
    VAR_12->layer_nr > 1 ? &VAR_12->planes[1] :
    ((void*)0), VAR_15);
 if (VAR_16 < 0)
  return VAR_16;
 FUNC_9(&VAR_12->base, VAR_6);
 FUNC_8(&VAR_12->base, 0, 0, VAR_6);
 VAR_10->num_pipes++;

 return 0;
}
