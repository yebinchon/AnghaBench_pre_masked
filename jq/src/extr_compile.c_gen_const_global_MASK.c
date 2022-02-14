
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int jv ;
struct TYPE_6__ {int constant; } ;
struct TYPE_7__ {scalar_t__ any_unbound; int symbol; TYPE_1__ imm; } ;
typedef TYPE_2__ inst ;
typedef int block ;
struct TYPE_8__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (char const*) ;

block FUNC_5(jv VAR_4, const char *VAR_5) {
  FUNC_0((FUNC_3(VAR_3)->flags & (VAR_1 | VAR_2 | VAR_0)) ==
         (VAR_1 | VAR_2 | VAR_0));
  inst* VAR_6 = FUNC_2(VAR_3);
  VAR_6->imm.constant = VAR_4;
  VAR_6->symbol = FUNC_4(VAR_5);
  VAR_6->any_unbound = 0;
  return FUNC_1(VAR_6);
}
