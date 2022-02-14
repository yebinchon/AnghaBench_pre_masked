
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ww_acquire_ctx {int dummy; } ;
struct ttm_validate_buffer {int * bo; int head; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct list_head*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,struct list_head*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ww_acquire_ctx*,struct list_head*) ;

__attribute__((used)) static void
FUNC_5(struct ww_acquire_ctx *VAR_0,
     struct ttm_validate_buffer *VAR_1)
{
 struct list_head VAR_2;

 if (FUNC_1(VAR_1->bo == ((void*)0)))
  return;

 FUNC_0(&VAR_2);
 FUNC_2(&VAR_1->head, &VAR_2);
 FUNC_4(VAR_0, &VAR_2);
 FUNC_3(VAR_1->bo);
 VAR_1->bo = ((void*)0);
}
