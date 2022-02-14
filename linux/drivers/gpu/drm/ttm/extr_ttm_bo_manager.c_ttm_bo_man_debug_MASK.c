
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_range_manager {int lock; int mm; } ;
struct ttm_mem_type_manager {scalar_t__ priv; } ;
struct drm_printer {int dummy; } ;


 int FUNC_0 (int *,struct drm_printer*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ttm_mem_type_manager *VAR_0,
        struct drm_printer *VAR_1)
{
 struct ttm_range_manager *VAR_2 = (struct ttm_range_manager *) VAR_0->priv;

 FUNC_1(&VAR_2->lock);
 FUNC_0(&VAR_2->mm, VAR_1);
 FUNC_2(&VAR_2->lock);
}
