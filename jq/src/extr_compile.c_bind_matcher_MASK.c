
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ op; int bound_by; struct TYPE_11__* next; } ;
typedef TYPE_1__ inst ;
struct TYPE_12__ {TYPE_1__* first; } ;
typedef TYPE_2__ block ;


 TYPE_2__ FUNC_0 (TYPE_2__,TYPE_2__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,TYPE_2__,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static block FUNC_3(block VAR_3, block VAR_4) {



  for (inst* VAR_5 = VAR_3.first; VAR_5; VAR_5 = VAR_5->next) {
    if ((VAR_5->op == VAR_1 || VAR_5->op == VAR_2) && !VAR_5->bound_by)
      FUNC_1(FUNC_2(VAR_5), VAR_4, VAR_0, 0);
  }
  return FUNC_0(VAR_3, VAR_4);
}
