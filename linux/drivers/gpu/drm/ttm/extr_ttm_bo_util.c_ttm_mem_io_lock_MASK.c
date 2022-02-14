
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_mem_type_manager {int io_reserve_mutex; int io_reserve_fastpath; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct ttm_mem_type_manager *VAR_0, bool VAR_1)
{
 if (FUNC_0(VAR_0->io_reserve_fastpath))
  return 0;

 if (VAR_1)
  return FUNC_2(&VAR_0->io_reserve_mutex);

 FUNC_1(&VAR_0->io_reserve_mutex);
 return 0;
}
