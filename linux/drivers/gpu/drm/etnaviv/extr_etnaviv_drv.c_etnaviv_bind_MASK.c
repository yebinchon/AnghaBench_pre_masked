
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_drm_private {struct drm_device* cmdbuf_suballoc; scalar_t__ num_gpus; int gem_list; int gem_lock; int dma_parms; } ;
struct drm_device {struct device* dev; struct etnaviv_drm_private* dev_private; } ;
struct device {int * dma_parms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int VAR_2 ;
 int FUNC_3 (struct device*,struct drm_device*) ;
 int FUNC_4 (struct device*,struct drm_device*) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,struct drm_device*) ;
 int FUNC_7 (struct device*,int ) ;
 struct drm_device* FUNC_8 (int *,struct device*) ;
 int FUNC_9 (struct drm_device*) ;
 int FUNC_10 (struct drm_device*,int ) ;
 int FUNC_11 (struct drm_device*) ;
 struct drm_device* FUNC_12 (struct device*) ;
 int VAR_3 ;
 int FUNC_13 (struct etnaviv_drm_private*) ;
 struct etnaviv_drm_private* FUNC_14 (int,int ) ;
 int FUNC_15 (struct drm_device*) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct device *VAR_4)
{
 struct etnaviv_drm_private *VAR_5;
 struct drm_device *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_8(&VAR_3, VAR_4);
 if (FUNC_1(VAR_6))
  return FUNC_2(VAR_6);

 VAR_5 = FUNC_14(sizeof(*VAR_5), VAR_1);
 if (!VAR_5) {
  FUNC_5(VAR_4, "failed to allocate private data\n");
  VAR_7 = -VAR_0;
  goto out_put;
 }
 VAR_6->dev_private = VAR_5;

 VAR_4->dma_parms = &VAR_5->dma_parms;
 FUNC_7(VAR_4, VAR_2);

 FUNC_16(&VAR_5->gem_lock);
 FUNC_0(&VAR_5->gem_list);
 VAR_5->num_gpus = 0;

 VAR_5->cmdbuf_suballoc = FUNC_12(VAR_6->dev);
 if (FUNC_1(VAR_5->cmdbuf_suballoc)) {
  FUNC_5(VAR_6->dev, "Failed to create cmdbuf suballocator\n");
  VAR_7 = FUNC_2(VAR_5->cmdbuf_suballoc);
  goto out_free_priv;
 }

 FUNC_6(VAR_4, VAR_6);

 VAR_7 = FUNC_3(VAR_4, VAR_6);
 if (VAR_7 < 0)
  goto out_destroy_suballoc;

 FUNC_15(VAR_6);

 VAR_7 = FUNC_10(VAR_6, 0);
 if (VAR_7)
  goto out_unbind;

 return 0;

out_unbind:
 FUNC_4(VAR_4, VAR_6);
out_destroy_suballoc:
 FUNC_11(VAR_5->cmdbuf_suballoc);
out_free_priv:
 FUNC_13(VAR_5);
out_put:
 FUNC_9(VAR_6);

 return VAR_7;
}
