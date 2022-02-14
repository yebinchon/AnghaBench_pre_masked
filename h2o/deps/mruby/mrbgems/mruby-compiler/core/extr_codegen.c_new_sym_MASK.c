
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ mrb_sym ;
struct TYPE_5__ {int scapa; TYPE_3__* irep; } ;
typedef TYPE_1__ codegen_scope ;
struct TYPE_6__ {int slen; scalar_t__* syms; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__*,int) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_2(codegen_scope *VAR_0, mrb_sym VAR_1)
{
  int VAR_2, VAR_3;

  FUNC_1(VAR_0->irep);

  VAR_3 = VAR_0->irep->slen;
  for (VAR_2=0; VAR_2<VAR_3; VAR_2++) {
    if (VAR_0->irep->syms[VAR_2] == VAR_1) return VAR_2;
  }
  if (VAR_0->irep->slen >= VAR_0->scapa) {
    VAR_0->scapa *= 2;
    VAR_0->irep->syms = (mrb_sym*)FUNC_0(VAR_0, VAR_0->irep->syms, sizeof(mrb_sym)*VAR_0->scapa);
  }
  VAR_0->irep->syms[VAR_0->irep->slen] = VAR_1;
  return VAR_0->irep->slen++;
}
