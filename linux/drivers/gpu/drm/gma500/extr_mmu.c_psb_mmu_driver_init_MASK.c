
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct psb_mmu_driver {int bif_ctrl; int has_clflush; int clflush_add; int clflush_mask; int sem; int * msvdx_mmu_invaldc; int needs_tlbflush; int lock; int default_pd; struct drm_device* dev; } ;
struct drm_psb_private {int dummy; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;
typedef int atomic_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int,int*,int*,int*,int*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct psb_mmu_driver*) ;
 struct psb_mmu_driver* FUNC_8 (int,int ) ;
 int FUNC_9 (struct psb_mmu_driver*,int,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

struct psb_mmu_driver *FUNC_12(struct drm_device *VAR_5,
        int VAR_6,
        int VAR_7,
        atomic_t *VAR_8)
{
 struct psb_mmu_driver *VAR_9;
 struct drm_psb_private *VAR_10 = VAR_5->dev_private;

 VAR_9 = FUNC_8(sizeof(*VAR_9), VAR_0);

 if (!VAR_9)
  return ((void*)0);

 VAR_9->dev = VAR_5;
 VAR_9->default_pd = FUNC_9(VAR_9, VAR_6,
           VAR_7);
 if (!VAR_9->default_pd)
  goto out_err1;

 FUNC_10(&VAR_9->lock);
 FUNC_6(&VAR_9->sem);
 FUNC_5(&VAR_9->sem);
 FUNC_2(&VAR_9->needs_tlbflush, 1);
 VAR_9->msvdx_mmu_invaldc = VAR_8;

 VAR_9->bif_ctrl = FUNC_0(VAR_2);
 FUNC_1(VAR_9->bif_ctrl | VAR_4,
     VAR_2);
 FUNC_1(VAR_9->bif_ctrl & ~VAR_4,
     VAR_2);

 VAR_9->has_clflush = 0;
 FUNC_11(&VAR_9->sem);
 return VAR_9;

out_err1:
 FUNC_7(VAR_9);
 return ((void*)0);
}
