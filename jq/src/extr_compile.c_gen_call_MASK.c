
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* first; } ;
typedef TYPE_2__ block ;
struct TYPE_7__ {TYPE_2__ arglist; int nactuals; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__) ;
 TYPE_2__ FUNC_1 (int ,char const*) ;

block FUNC_2(const char* VAR_1, block VAR_2) {
  block VAR_3 = FUNC_1(VAR_0, VAR_1);
  VAR_3.first->arglist = VAR_2;
  VAR_3.first->nactuals = FUNC_0(VAR_3.first->arglist);
  return VAR_3;
}
