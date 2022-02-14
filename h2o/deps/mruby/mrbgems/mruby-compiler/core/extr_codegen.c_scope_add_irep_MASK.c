
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int rlen; struct TYPE_7__** reps; } ;
typedef TYPE_1__ mrb_irep ;
struct TYPE_8__ {int rcapa; TYPE_1__* irep; } ;
typedef TYPE_2__ codegen_scope ;


 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_1__**,int) ;

__attribute__((used)) static void
FUNC_1(codegen_scope *VAR_0, mrb_irep *VAR_1)
{
  if (VAR_0->irep == ((void*)0)) {
    VAR_0->irep = VAR_1;
    return;
  }
  if (VAR_0->irep->rlen == VAR_0->rcapa) {
    VAR_0->rcapa *= 2;
    VAR_0->irep->reps = (mrb_irep**)FUNC_0(VAR_0, VAR_0->irep->reps, sizeof(mrb_irep*)*VAR_0->rcapa);
  }
  VAR_0->irep->reps[VAR_0->irep->rlen] = VAR_1;
  VAR_0->irep->rlen++;
}
