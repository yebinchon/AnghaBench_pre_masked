
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ww_acquire_ctx {int dummy; } ;
struct TYPE_4__ {TYPE_1__* resv; } ;
struct lima_bo {TYPE_2__ gem; } ;
struct TYPE_3__ {int lock; } ;


 int FUNC_0 (struct ww_acquire_ctx*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct lima_bo **VAR_0, u32 VAR_1,
    struct ww_acquire_ctx *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  FUNC_1(&VAR_0[VAR_3]->gem.resv->lock);
 FUNC_0(VAR_2);
}
