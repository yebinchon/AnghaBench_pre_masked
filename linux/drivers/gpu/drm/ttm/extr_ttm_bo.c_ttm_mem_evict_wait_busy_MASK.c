
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ww_acquire_ctx {int dummy; } ;
struct ttm_operation_ctx {scalar_t__ interruptible; } ;
struct TYPE_2__ {int resv; } ;
struct ttm_buffer_object {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct ww_acquire_ctx*) ;
 int FUNC_1 (int ,struct ww_acquire_ctx*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ttm_buffer_object *VAR_2,
       struct ttm_operation_ctx *VAR_3,
       struct ww_acquire_ctx *VAR_4)
{
 int VAR_5;

 if (!VAR_2 || !VAR_4)
  return -VAR_0;

 if (VAR_3->interruptible)
  VAR_5 = FUNC_1(VAR_2->base.resv,
         VAR_4);
 else
  VAR_5 = FUNC_0(VAR_2->base.resv, VAR_4);






 if (!VAR_5)
  FUNC_2(VAR_2->base.resv);

 return VAR_5 == -VAR_1 ? -VAR_0 : VAR_5;
}
