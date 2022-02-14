
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* first; } ;
typedef TYPE_2__ block ;
struct TYPE_5__ {scalar_t__ op; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__) ;

int FUNC_1(block VAR_2) {
  return (FUNC_0(VAR_2) && (VAR_2.first->op == VAR_0 || VAR_2.first->op == VAR_1));
}
