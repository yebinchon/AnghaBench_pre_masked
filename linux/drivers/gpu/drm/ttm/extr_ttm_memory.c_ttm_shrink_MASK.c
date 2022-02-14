
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ttm_operation_ctx {int dummy; } ;
struct ttm_mem_global {int lock; int bo_glob; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct ttm_operation_ctx*) ;
 scalar_t__ FUNC_3 (struct ttm_mem_global*,int,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct ttm_mem_global *VAR_0, bool VAR_1,
   uint64_t VAR_2, struct ttm_operation_ctx *VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_0->lock);

 while (FUNC_3(VAR_0, VAR_1, VAR_2)) {
  FUNC_1(&VAR_0->lock);
  VAR_4 = FUNC_2(VAR_0->bo_glob, VAR_3);
  FUNC_0(&VAR_0->lock);
  if (FUNC_4(VAR_4 != 0))
   break;
 }

 FUNC_1(&VAR_0->lock);
}
