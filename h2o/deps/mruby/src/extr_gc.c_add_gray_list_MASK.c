
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct RBasic {scalar_t__ tt; struct RBasic* gcnext; } ;
typedef int mrb_state ;
struct TYPE_3__ {struct RBasic* gray_list; } ;
typedef TYPE_1__ mrb_gc ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct RBasic*) ;

__attribute__((used)) static inline void
FUNC_2(mrb_state *VAR_1, mrb_gc *VAR_2, struct RBasic *VAR_3)
{





  FUNC_1(VAR_3);
  VAR_3->gcnext = VAR_2->gray_list;
  VAR_2->gray_list = VAR_3;
}
