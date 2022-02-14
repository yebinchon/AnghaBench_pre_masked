
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_private {int mapping; struct device* dma_dev; } ;
struct drm_device {struct exynos_drm_private* dev_private; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct device*,int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 scalar_t__ FUNC_7 (struct device*) ;
 int FUNC_8 (int ,struct device*) ;
 scalar_t__ FUNC_9 (struct device*) ;

__attribute__((used)) static int FUNC_10(struct drm_device *VAR_3,
    struct device *VAR_4)
{
 struct exynos_drm_private *VAR_5 = VAR_3->dev_private;
 int VAR_6;

 if (FUNC_7(VAR_5->dma_dev) != FUNC_7(VAR_4)) {
  FUNC_0(VAR_4, "Device %s lacks support for IOMMU\n",
     FUNC_6(VAR_4));
  return -VAR_2;
 }

 VAR_6 = FUNC_5(VAR_4);
 if (VAR_6)
  return VAR_6;

 if (FUNC_1(VAR_0)) {
  if (FUNC_9(VAR_4))
   FUNC_3(VAR_4);

  VAR_6 = FUNC_2(VAR_4, VAR_5->mapping);
 } else if (FUNC_1(VAR_1)) {
  VAR_6 = FUNC_8(VAR_5->mapping, VAR_4);
 }

 if (VAR_6)
  FUNC_4(VAR_4);

 return 0;
}
