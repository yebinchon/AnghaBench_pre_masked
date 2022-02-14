
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint16_t ;
struct mrb_locals {scalar_t__ r; scalar_t__ name; } ;
struct TYPE_13__ {struct TYPE_13__* cdr; } ;
typedef TYPE_1__ node ;
typedef int mrb_value ;
typedef int mrb_sym ;
typedef int mrb_state ;
typedef int mrb_pool ;
typedef int mrb_irep ;
typedef int mrb_code ;
struct TYPE_14__ {int ainfo; int rcapa; int icapa; int pcapa; int scapa; int sp; int nlocals; scalar_t__ rlev; int filename_index; int parser; TYPE_7__* irep; scalar_t__ filename; scalar_t__ debug_start_pos; int lineno; int * lines; int ai; TYPE_1__* lv; int * iseq; scalar_t__ mscope; struct TYPE_14__* prev; int * mpool; int * mrb; int member_0; } ;
typedef TYPE_2__ codegen_scope ;
struct TYPE_15__ {int * debug_info; struct mrb_locals* lv; scalar_t__ slen; int * syms; scalar_t__ plen; int * pool; int * iseq; int ** reps; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 TYPE_7__* FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,TYPE_7__*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int * FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_2__*,TYPE_7__*) ;

__attribute__((used)) static codegen_scope*
FUNC_11(mrb_state *VAR_0, codegen_scope *VAR_1, node *VAR_2)
{
  static const codegen_scope VAR_3 = { 0 };
  mrb_pool *VAR_4 = FUNC_8(VAR_0);
  codegen_scope *VAR_5 = (codegen_scope *)FUNC_7(VAR_4, sizeof(codegen_scope));

  if (!VAR_5) return ((void*)0);
  *VAR_5 = VAR_3;
  VAR_5->mrb = VAR_0;
  VAR_5->mpool = VAR_4;
  if (!VAR_1) return VAR_5;
  VAR_5->prev = VAR_1;
  VAR_5->ainfo = -1;
  VAR_5->mscope = 0;

  VAR_5->irep = FUNC_2(VAR_0);
  FUNC_10(VAR_1, VAR_5->irep);

  VAR_5->rcapa = 8;
  VAR_5->irep->reps = (mrb_irep**)FUNC_6(VAR_0, sizeof(mrb_irep*)*VAR_5->rcapa);

  VAR_5->icapa = 1024;
  VAR_5->iseq = (mrb_code*)FUNC_6(VAR_0, sizeof(mrb_code)*VAR_5->icapa);
  VAR_5->irep->iseq = ((void*)0);

  VAR_5->pcapa = 32;
  VAR_5->irep->pool = (mrb_value*)FUNC_6(VAR_0, sizeof(mrb_value)*VAR_5->pcapa);
  VAR_5->irep->plen = 0;

  VAR_5->scapa = 256;
  VAR_5->irep->syms = (mrb_sym*)FUNC_6(VAR_0, sizeof(mrb_sym)*VAR_5->scapa);
  VAR_5->irep->slen = 0;

  VAR_5->lv = VAR_2;
  VAR_5->sp += FUNC_9(VAR_2)+1;
  VAR_5->nlocals = VAR_5->sp;
  if (VAR_2) {
    node *VAR_6 = VAR_2;
    size_t VAR_7 = 0;

    VAR_5->irep->lv = (struct mrb_locals*)FUNC_6(VAR_0, sizeof(struct mrb_locals) * (VAR_5->nlocals - 1));
    for (VAR_7=0, VAR_6=VAR_2; VAR_6; VAR_7++,VAR_6=VAR_6->cdr) {
      VAR_5->irep->lv[VAR_7].name = FUNC_1(VAR_6);
      if (FUNC_1(VAR_6)) {
        VAR_5->irep->lv[VAR_7].r = FUNC_0(VAR_5, FUNC_1(VAR_6));
      }
      else {
        VAR_5->irep->lv[VAR_7].r = 0;
      }
    }
    FUNC_3(VAR_7 + 1 == VAR_5->nlocals);
  }
  VAR_5->ai = FUNC_5(VAR_0);

  VAR_5->filename = VAR_1->filename;
  if (VAR_5->filename) {
    VAR_5->lines = (uint16_t*)FUNC_6(VAR_0, sizeof(short)*VAR_5->icapa);
  }
  VAR_5->lineno = VAR_1->lineno;


  VAR_5->debug_start_pos = 0;
  if (VAR_5->filename) {
    FUNC_4(VAR_0, VAR_5->irep);
  }
  else {
    VAR_5->irep->debug_info = ((void*)0);
  }
  VAR_5->parser = VAR_1->parser;
  VAR_5->filename_index = VAR_1->filename_index;

  VAR_5->rlev = VAR_1->rlev+1;

  return VAR_5;
}
