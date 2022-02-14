
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_operation_ctx {scalar_t__ resv; int flags; } ;
struct TYPE_2__ {scalar_t__ resv; } ;
struct ttm_buffer_object {TYPE_1__ base; int ddestroy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct ttm_buffer_object *VAR_1,
   struct ttm_operation_ctx *VAR_2, bool *VAR_3, bool *VAR_4)
{
 bool VAR_5 = 0;

 if (VAR_1->base.resv == VAR_2->resv) {
  FUNC_0(VAR_1->base.resv);
  if (VAR_2->flags & VAR_0
      || !FUNC_2(&VAR_1->ddestroy))
   VAR_5 = 1;
  *VAR_3 = 0;
  if (VAR_4)
   *VAR_4 = 0;
 } else {
  VAR_5 = FUNC_1(VAR_1->base.resv);
  *VAR_3 = VAR_5;
  if (VAR_4)
   *VAR_4 = !VAR_5;
 }

 return VAR_5;
}
