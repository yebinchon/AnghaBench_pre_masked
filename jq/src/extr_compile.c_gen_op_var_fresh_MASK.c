
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int opcode ;
struct TYPE_7__ {TYPE_1__* first; } ;
typedef TYPE_2__ block ;
struct TYPE_8__ {int flags; } ;
struct TYPE_6__ {struct TYPE_6__* bound_by; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_2__ FUNC_1 (int ,char const*) ;
 TYPE_3__* FUNC_2 (int ) ;

block FUNC_3(opcode VAR_1, const char* VAR_2) {
  FUNC_0(FUNC_2(VAR_1)->flags & VAR_0);
  block VAR_3 = FUNC_1(VAR_1, VAR_2);
  VAR_3.first->bound_by = VAR_3.first;
  return VAR_3;
}
