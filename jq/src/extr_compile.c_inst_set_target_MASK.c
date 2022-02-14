
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int last; TYPE_2__* first; } ;
typedef TYPE_3__ block ;
struct TYPE_11__ {int flags; } ;
struct TYPE_8__ {int target; } ;
struct TYPE_9__ {TYPE_1__ imm; int op; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__) ;
 TYPE_4__* FUNC_2 (int ) ;

void FUNC_3(block VAR_1, block VAR_2) {
  FUNC_0(FUNC_1(VAR_1));
  FUNC_0(FUNC_2(VAR_1.first->op)->flags & VAR_0);
  FUNC_0(VAR_2.last);
  VAR_1.first->imm.target = VAR_2.last;
}
