
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mrb_irep {scalar_t__* iseq; int nlocals; TYPE_2__* lv; } ;
struct TYPE_3__ {struct mrb_irep* irep; } ;
struct RProc {TYPE_1__ body; } ;
typedef int mrb_value ;
typedef int mrb_sym ;
typedef int mrb_state ;
typedef int mrb_aspec ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct RProc const*) ;
 int FUNC_6 (struct RProc const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_7 (scalar_t__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *,char*,int) ;
 struct RProc* FUNC_12 (int ) ;
 char* FUNC_13 (int *,int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static mrb_value
FUNC_15(mrb_state *VAR_1, mrb_value VAR_2)
{
  struct parameters_type {
    size_t len;
    const char *name;
    int size;
  } *VAR_3, VAR_4 [] = {
    {sizeof("req") - 1, "req", 0},
    {sizeof("opt") - 1, "opt", 0},
    {sizeof("rest") - 1, "rest", 0},
    {sizeof("req") - 1, "req", 0},
    {sizeof("block") - 1, "block", 0},
    {0, ((void*)0), 0}
  };
  const struct RProc *VAR_5 = FUNC_12(VAR_2);
  const struct mrb_irep *VAR_6 = VAR_5->body.irep;
  mrb_aspec VAR_7;
  mrb_value VAR_8;
  int VAR_9, VAR_10;
  int VAR_11 = -1;

  if (FUNC_5(VAR_5)) {

    return FUNC_8(VAR_1);
  }
  if (!VAR_6) {
    return FUNC_8(VAR_1);
  }
  if (!VAR_6->lv) {
    return FUNC_8(VAR_1);
  }
  if (*VAR_6->iseq != VAR_0) {
    return FUNC_8(VAR_1);
  }

  if (!FUNC_6(VAR_5)) {
    VAR_4[0].len = sizeof("opt") - 1;
    VAR_4[0].name = "opt";
    VAR_4[3].len = sizeof("opt") - 1;
    VAR_4[3].name = "opt";
  }

  VAR_7 = FUNC_7(VAR_6->iseq+1);
  VAR_4[0].size = FUNC_3(VAR_7);
  VAR_4[1].size = FUNC_1(VAR_7);
  VAR_4[2].size = FUNC_4(VAR_7);
  VAR_4[3].size = FUNC_2(VAR_7);
  VAR_4[4].size = FUNC_0(VAR_7);

  VAR_8 = FUNC_9(VAR_1, VAR_6->nlocals-1);

  VAR_11 = VAR_6->nlocals-1;
  for (VAR_9 = 0, VAR_3 = VAR_4; VAR_3->name; VAR_3++) {
    mrb_value VAR_12 = FUNC_14(FUNC_11(VAR_1, VAR_3->name, VAR_3->len));

    for (VAR_10 = 0; VAR_10 < VAR_3->size; VAR_9++, VAR_10++) {
      mrb_value VAR_13;

      VAR_13 = FUNC_8(VAR_1);
      FUNC_10(VAR_1, VAR_13, VAR_12);
      if (VAR_9 < VAR_11 && VAR_6->lv[VAR_9].name) {
        mrb_sym VAR_14 = VAR_6->lv[VAR_9].name;
        const char *VAR_15 = FUNC_13(VAR_1, VAR_14);
        switch (VAR_15[0]) {
        case '*': case '&':
          break;
        default:
          FUNC_10(VAR_1, VAR_13, FUNC_14(VAR_14));
          break;
        }
      }
      FUNC_10(VAR_1, VAR_8, VAR_13);
    }
  }
  return VAR_8;
}
