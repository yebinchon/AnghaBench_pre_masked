
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v3d_dev {int mmu_scratch_paddr; int mmu_scratch; int dev; } ;
struct platform_device {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 struct drm_device* FUNC_3 (struct platform_device*) ;
 struct v3d_dev* FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct drm_device *VAR_1 = FUNC_3(VAR_0);
 struct v3d_dev *VAR_2 = FUNC_4(VAR_1);

 FUNC_2(VAR_1);

 FUNC_5(VAR_1);

 FUNC_1(VAR_1);

 FUNC_0(VAR_2->dev, 4096, VAR_2->mmu_scratch, VAR_2->mmu_scratch_paddr);

 return 0;
}
