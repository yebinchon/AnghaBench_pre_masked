
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_mem_type_manager {int has_type; int use_type; int * lru; } ;
struct ttm_bo_global {int lru_lock; } ;
struct ttm_bo_device {int vma_manager; struct ttm_mem_type_manager* man; int wq; int device_list; struct ttm_bo_global* glob; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,unsigned int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct ttm_bo_device*,unsigned int) ;
 scalar_t__ FUNC_11 (struct ttm_bo_device*,int) ;
 int FUNC_12 () ;
 int VAR_4 ;

int FUNC_13(struct ttm_bo_device *VAR_5)
{
 int VAR_6 = 0;
 unsigned VAR_7 = VAR_2;
 struct ttm_mem_type_manager *VAR_8;
 struct ttm_bo_global *VAR_9 = VAR_5->glob;

 while (VAR_7--) {
  VAR_8 = &VAR_5->man[VAR_7];
  if (VAR_8->has_type) {
   VAR_8->use_type = 0;
   if ((VAR_7 != VAR_3) && FUNC_10(VAR_5, VAR_7)) {
    VAR_6 = -VAR_0;
    FUNC_7("DRM memory manager type %d is not clean\n",
           VAR_7);
   }
   VAR_8->has_type = 0;
  }
 }

 FUNC_4(&VAR_4);
 FUNC_2(&VAR_5->device_list);
 FUNC_5(&VAR_4);

 FUNC_0(&VAR_5->wq);

 if (FUNC_11(VAR_5, 1))
  FUNC_6("Delayed destroy list was clean\n");

 FUNC_8(&VAR_9->lru_lock);
 for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7)
  if (FUNC_3(&VAR_5->man[0].lru[0]))
   FUNC_6("Swap list %d was clean\n", VAR_7);
 FUNC_9(&VAR_9->lru_lock);

 FUNC_1(&VAR_5->vma_manager);

 if (!VAR_6)
  FUNC_12();

 return VAR_6;
}
