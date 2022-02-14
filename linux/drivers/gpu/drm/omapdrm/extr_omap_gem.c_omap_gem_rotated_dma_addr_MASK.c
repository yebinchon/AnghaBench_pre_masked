
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_gem_object {scalar_t__ dma_addr_cnt; int flags; int lock; scalar_t__ block; } ;
struct drm_gem_object {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int ,int,int) ;
 struct omap_gem_object* FUNC_3 (struct drm_gem_object*) ;

int FUNC_4(struct drm_gem_object *VAR_2, u32 VAR_3,
  int VAR_4, int VAR_5, dma_addr_t *VAR_6)
{
 struct omap_gem_object *VAR_7 = FUNC_3(VAR_2);
 int VAR_8 = -VAR_0;

 FUNC_0(&VAR_7->lock);

 if ((VAR_7->dma_addr_cnt > 0) && VAR_7->block &&
   (VAR_7->flags & VAR_1)) {
  *VAR_6 = FUNC_2(VAR_7->block, VAR_3, VAR_4, VAR_5);
  VAR_8 = 0;
 }

 FUNC_1(&VAR_7->lock);

 return VAR_8;
}
