
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; unsigned long vm_end; unsigned long vm_start; } ;
struct fb_info {struct drm_fb_helper* par; } ;
struct exynos_drm_gem {unsigned long size; int dma_attrs; int dma_addr; int cookie; } ;
struct exynos_drm_fbdev {struct exynos_drm_gem* exynos_gem; } ;
struct drm_fb_helper {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,struct vm_area_struct*,int ,int ,unsigned long,int ) ;
 int FUNC_2 (int ) ;
 struct exynos_drm_fbdev* FUNC_3 (struct drm_fb_helper*) ;

__attribute__((used)) static int FUNC_4(struct fb_info *VAR_4,
   struct vm_area_struct *VAR_5)
{
 struct drm_fb_helper *VAR_6 = VAR_4->par;
 struct exynos_drm_fbdev *VAR_7 = FUNC_3(VAR_6);
 struct exynos_drm_gem *VAR_8 = VAR_7->exynos_gem;
 unsigned long VAR_9;
 int VAR_10;

 VAR_5->vm_flags |= VAR_3 | VAR_2 | VAR_1;

 VAR_9 = VAR_5->vm_end - VAR_5->vm_start;

 if (VAR_9 > VAR_8->size)
  return -VAR_0;

 VAR_10 = FUNC_1(FUNC_2(VAR_6->dev), VAR_5, VAR_8->cookie,
        VAR_8->dma_addr, VAR_8->size,
        VAR_8->dma_attrs);
 if (VAR_10 < 0) {
  FUNC_0(FUNC_2(VAR_6->dev), "failed to mmap.\n");
  return VAR_10;
 }

 return 0;
}
