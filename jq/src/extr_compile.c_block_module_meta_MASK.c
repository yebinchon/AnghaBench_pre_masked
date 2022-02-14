
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int jv ;
struct TYPE_7__ {TYPE_2__* first; } ;
typedef TYPE_3__ block ;
struct TYPE_5__ {int constant; } ;
struct TYPE_6__ {scalar_t__ op; TYPE_1__ imm; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;

jv FUNC_2(block VAR_1) {
  if (VAR_1.first != ((void*)0) && VAR_1.first->op == VAR_0)
    return FUNC_0(VAR_1.first->imm.constant);
  return FUNC_1();
}
