
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_bo_global {int device_list; } ;
struct ttm_bo_driver {int dummy; } ;
struct ttm_bo_device {int need_dma32; int device_list; struct ttm_bo_global* glob; struct address_space* dev_mapping; int ddestroy; int wq; int vma_manager; int man; struct ttm_bo_driver* driver; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 struct ttm_bo_global VAR_4 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct ttm_bo_device*,int ,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct ttm_bo_device *VAR_6,
         struct ttm_bo_driver *VAR_7,
         struct address_space *VAR_8,
         bool VAR_9)
{
 struct ttm_bo_global *VAR_10 = &VAR_4;
 int VAR_11;

 VAR_11 = FUNC_7();
 if (VAR_11)
  return VAR_11;

 VAR_6->driver = VAR_7;

 FUNC_4(VAR_6->man, 0, sizeof(VAR_6->man));





 VAR_11 = FUNC_9(VAR_6, VAR_2, 0);
 if (FUNC_10(VAR_11 != 0))
  goto out_no_sys;

 FUNC_2(&VAR_6->vma_manager,
        VAR_1,
        VAR_0);
 FUNC_0(&VAR_6->wq, VAR_3);
 FUNC_1(&VAR_6->ddestroy);
 VAR_6->dev_mapping = VAR_8;
 VAR_6->glob = VAR_10;
 VAR_6->need_dma32 = VAR_9;
 FUNC_5(&VAR_5);
 FUNC_3(&VAR_6->device_list, &VAR_10->device_list);
 FUNC_6(&VAR_5);

 return 0;
out_no_sys:
 FUNC_8();
 return VAR_11;
}
