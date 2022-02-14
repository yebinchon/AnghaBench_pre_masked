
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int jv_kind ;
struct TYPE_8__ {TYPE_2__* first; } ;
typedef TYPE_3__ block ;
struct TYPE_6__ {int constant; } ;
struct TYPE_7__ {TYPE_1__ imm; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__) ;
 int FUNC_2 (int ) ;

jv_kind FUNC_3(block VAR_0) {
  FUNC_0(FUNC_1(VAR_0));
  return FUNC_2(VAR_0.first->imm.constant);
}
