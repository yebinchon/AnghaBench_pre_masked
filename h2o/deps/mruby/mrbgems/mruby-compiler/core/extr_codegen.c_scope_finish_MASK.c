
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* mrb_value ;
typedef TYPE_1__* mrb_sym ;
typedef int mrb_state ;
struct TYPE_8__ {int ilen; int plen; int slen; int rlen; int nregs; int nlocals; int debug_info; struct TYPE_8__** reps; struct TYPE_8__** syms; struct TYPE_8__** pool; int * iseq; scalar_t__ flags; } ;
typedef TYPE_1__ mrb_irep ;
typedef int mrb_code ;
struct TYPE_9__ {int pc; int mpool; int ai; int nregs; int nlocals; int lines; int * mrb; int debug_start_pos; TYPE_1__* irep; int filename_index; int parser; scalar_t__ filename; TYPE_1__** iseq; } ;
typedef TYPE_4__ codegen_scope ;


 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_1__**,int) ;
 int FUNC_1 (int *,int ,char const*,int ,int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 char* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(codegen_scope *VAR_0)
{
  mrb_state *VAR_1 = VAR_0->mrb;
  mrb_irep *VAR_2 = VAR_0->irep;

  VAR_2->flags = 0;
  if (VAR_0->iseq) {
    VAR_2->iseq = (mrb_code *)FUNC_0(VAR_0, VAR_0->iseq, sizeof(mrb_code)*VAR_0->pc);
    VAR_2->ilen = VAR_0->pc;
  }
  VAR_2->pool = (mrb_value*)FUNC_0(VAR_0, VAR_2->pool, sizeof(mrb_value)*VAR_2->plen);
  VAR_2->syms = (mrb_sym*)FUNC_0(VAR_0, VAR_2->syms, sizeof(mrb_sym)*VAR_2->slen);
  VAR_2->reps = (mrb_irep**)FUNC_0(VAR_0, VAR_2->reps, sizeof(mrb_irep*)*VAR_2->rlen);
  if (VAR_0->filename) {
    const char *VAR_3 = FUNC_4(VAR_0->parser, VAR_0->filename_index);

    FUNC_1(VAR_0->mrb, VAR_0->irep->debug_info,
                               VAR_3, VAR_0->lines, VAR_0->debug_start_pos, VAR_0->pc);
  }
  FUNC_2(VAR_0->mrb, VAR_0->lines);

  VAR_2->nlocals = VAR_0->nlocals;
  VAR_2->nregs = VAR_0->nregs;

  FUNC_3(VAR_1, VAR_0->ai);
  FUNC_5(VAR_0->mpool);
}
