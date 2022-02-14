
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ op; struct TYPE_5__* next; } ;
typedef TYPE_1__ inst ;
struct TYPE_6__ {TYPE_1__* first; } ;
typedef TYPE_2__ block ;
struct TYPE_7__ {int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (scalar_t__) ;

int FUNC_1(block VAR_3, int VAR_4) {
  VAR_4 |= VAR_2;
  for (inst* VAR_5 = VAR_3.first; VAR_5; VAR_5 = VAR_5->next) {
    if ((FUNC_0(VAR_5->op)->flags & VAR_4) != VAR_4 && VAR_5->op != VAR_0 && VAR_5->op != VAR_1) {
      return 0;
    }
  }
  return 1;
}
