
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cfunction {scalar_t__ nargs; int name; } ;
struct TYPE_5__ {struct cfunction const* cfunc; } ;
struct TYPE_6__ {scalar_t__ any_unbound; scalar_t__ nformals; int symbol; TYPE_1__ imm; } ;
typedef TYPE_2__ inst ;
typedef int block ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

block FUNC_4(const struct cfunction* VAR_1, int VAR_2, block VAR_3) {
  for (int VAR_4=0; VAR_4<VAR_2; VAR_4++) {
    inst* VAR_5 = FUNC_2(VAR_0);
    VAR_5->imm.cfunc = &VAR_1[VAR_4];
    VAR_5->symbol = FUNC_3(VAR_1[VAR_4].name);
    VAR_5->nformals = VAR_1[VAR_4].nargs - 1;
    VAR_5->any_unbound = 0;
    VAR_3 = FUNC_0(FUNC_1(VAR_5), VAR_3);
  }
  return VAR_3;
}
