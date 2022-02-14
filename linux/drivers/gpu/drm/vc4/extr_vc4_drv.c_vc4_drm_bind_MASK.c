
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vc4_dev {int bin_bo_lock; int debugfs_list; struct drm_device* dev; } ;
struct platform_device {int dummy; } ;
struct drm_device {struct vc4_dev* dev_private; } ;
struct device_node {int dummy; } ;
struct device {int coherent_dma_mask; } ;
struct TYPE_3__ {int driver_features; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct device*,struct drm_device*) ;
 int FUNC_5 (struct device*,struct drm_device*) ;
 struct vc4_dev* FUNC_6 (struct device*,int,int ) ;
 struct drm_device* FUNC_7 (TYPE_1__*,struct device*) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_device*,int ) ;
 int FUNC_10 (int *,char*,int) ;
 int FUNC_11 (struct drm_device*,int) ;
 int FUNC_12 (struct drm_device*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct device_node*) ;
 struct device_node* FUNC_15 (int *,int ,int *) ;
 int FUNC_16 (struct device_node*) ;
 int FUNC_17 (struct platform_device*,struct drm_device*) ;
 struct platform_device* FUNC_18 (struct device*) ;
 int FUNC_19 (struct drm_device*) ;
 int FUNC_20 (struct drm_device*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_21 (struct drm_device*) ;
 int FUNC_22 (struct drm_device*) ;
 int FUNC_23 (struct drm_device*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_24(struct device *VAR_5)
{
 struct platform_device *VAR_6 = FUNC_18(VAR_5);
 struct drm_device *VAR_7;
 struct vc4_dev *VAR_8;
 struct device_node *VAR_9;
 int VAR_10 = 0;

 VAR_5->coherent_dma_mask = FUNC_0(32);

 VAR_8 = FUNC_6(VAR_5, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;


 VAR_9 = FUNC_15(((void*)0), VAR_4, ((void*)0));
 if (!VAR_9 || !FUNC_14(VAR_9))
  VAR_3.driver_features &= ~VAR_0;
 FUNC_16(VAR_9);

 VAR_7 = FUNC_7(&VAR_3, VAR_5);
 if (FUNC_2(VAR_7))
  return FUNC_3(VAR_7);
 FUNC_17(VAR_6, VAR_7);
 VAR_8->dev = VAR_7;
 VAR_7->dev_private = VAR_8;
 FUNC_1(&VAR_8->debugfs_list);

 FUNC_13(&VAR_8->bin_bo_lock);

 VAR_10 = FUNC_20(VAR_7);
 if (VAR_10)
  goto dev_put;

 FUNC_12(VAR_7);

 FUNC_22(VAR_7);

 VAR_10 = FUNC_4(VAR_5, VAR_7);
 if (VAR_10)
  goto gem_destroy;

 FUNC_10(((void*)0), "vc4drmfb", 0);

 VAR_10 = FUNC_23(VAR_7);
 if (VAR_10 < 0)
  goto unbind_all;

 VAR_10 = FUNC_9(VAR_7, 0);
 if (VAR_10 < 0)
  goto unbind_all;

 FUNC_11(VAR_7, 16);

 return 0;

unbind_all:
 FUNC_5(VAR_5, VAR_7);
gem_destroy:
 FUNC_21(VAR_7);
 FUNC_19(VAR_7);
dev_put:
 FUNC_8(VAR_7);
 return VAR_10;
}
