
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ level; struct TYPE_6__* previous; TYPE_1__* all; } ;
struct TYPE_5__ {scalar_t__ level; struct TYPE_5__* previous; } ;
struct TYPE_4__ {scalar_t__ scope; struct TYPE_4__* up; } ;
typedef TYPE_1__* Symbol ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_3__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 TYPE_2__* VAR_4 ;
 int FUNC_2 (char*) ;

void FUNC_3(void) {
 FUNC_1(VAR_3);
 if (VAR_4->level == VAR_3)
  VAR_4 = VAR_4->previous;
 if (VAR_2->level == VAR_3) {
  if (VAR_0 >= 2) {
   int VAR_5 = 0;
   Symbol VAR_6;
   for (VAR_6 = VAR_2->all; VAR_6 && VAR_6->scope == VAR_3; VAR_6 = VAR_6->up)
    if (++VAR_5 > 127) {
     FUNC_2("more than 127 identifiers declared in a block\n");
     break;
    }
  }
  VAR_2 = VAR_2->previous;
 }
 FUNC_0(VAR_3 >= VAR_1);
 --VAR_3;
}
