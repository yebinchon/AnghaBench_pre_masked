
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int has_seed; } ;
typedef TYPE_1__ mt_state ;
typedef int mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_2(mrb_state *VAR_0, mt_state *VAR_1)
{
  if (!VAR_1->has_seed) {
    FUNC_1(VAR_0, VAR_1, FUNC_0());
  }
}
