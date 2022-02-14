
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_bo_global {int kobj; int bo_count; int device_list; int * swap_lru; int * dummy_read_page; TYPE_1__* mem_glob; int lru_lock; } ;
struct TYPE_3__ {struct ttm_bo_global* bo_glob; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct ttm_bo_global VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 () ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(void)
{
 struct ttm_bo_global *VAR_9 = &VAR_4;
 int VAR_10 = 0;
 unsigned VAR_11;

 FUNC_5(&VAR_7);
 if (++VAR_6 > 1)
  goto out;

 VAR_10 = FUNC_9(&VAR_8);
 if (VAR_10)
  goto out;

 FUNC_7(&VAR_9->lru_lock);
 VAR_9->mem_glob = &VAR_8;
 VAR_9->mem_glob->bo_glob = VAR_9;
 VAR_9->dummy_read_page = FUNC_1(VAR_3 | VAR_1);

 if (FUNC_10(VAR_9->dummy_read_page == ((void*)0))) {
  VAR_10 = -VAR_0;
  goto out;
 }

 for (VAR_11 = 0; VAR_11 < VAR_2; ++VAR_11)
  FUNC_0(&VAR_9->swap_lru[VAR_11]);
 FUNC_0(&VAR_9->device_list);
 FUNC_2(&VAR_9->bo_count, 0);

 VAR_10 = FUNC_3(
  &VAR_9->kobj, &VAR_5, FUNC_8(), "buffer_objects");
 if (FUNC_10(VAR_10 != 0))
  FUNC_4(&VAR_9->kobj);
out:
 FUNC_6(&VAR_7);
 return VAR_10;
}
