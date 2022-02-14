
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; scalar_t__ vm_pgoff; int vm_flags; } ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct exynos_drm_gem {unsigned long size; int dma_attrs; int dma_addr; int cookie; TYPE_1__ base; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct vm_area_struct*,int ,int ,unsigned long,int ) ;
 int FUNC_2 (struct drm_device*) ;

__attribute__((used)) static int FUNC_3(struct exynos_drm_gem *VAR_2,
          struct vm_area_struct *VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->base.dev;
 unsigned long VAR_5;
 int VAR_6;

 VAR_3->vm_flags &= ~VAR_1;
 VAR_3->vm_pgoff = 0;

 VAR_5 = VAR_3->vm_end - VAR_3->vm_start;


 if (VAR_5 > VAR_2->size)
  return -VAR_0;

 VAR_6 = FUNC_1(FUNC_2(VAR_4), VAR_3, VAR_2->cookie,
        VAR_2->dma_addr, VAR_2->size,
        VAR_2->dma_attrs);
 if (VAR_6 < 0) {
  FUNC_0("failed to mmap.\n");
  return VAR_6;
 }

 return 0;
}
