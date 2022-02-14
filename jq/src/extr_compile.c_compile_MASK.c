
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint16_t ;
struct opcode_description {int length; int flags; } ;
struct locfile {int dummy; } ;
struct bytecode {int nsubfunctions; int codelen; int* code; int nlocals; void* constants; struct bytecode** subfunctions; void* debuginfo; scalar_t__ nclosures; struct bytecode* parent; TYPE_1__* globals; } ;
typedef void* jv ;
struct TYPE_17__ {int intval; TYPE_3__* target; void* constant; int * cfunc; } ;
struct TYPE_15__ {TYPE_5__* first; } ;
struct TYPE_19__ {TYPE_5__* first; TYPE_5__* last; } ;
struct TYPE_18__ {scalar_t__ op; int bytecode_pos; char* symbol; TYPE_4__ imm; struct TYPE_18__* bound_by; struct TYPE_18__* next; TYPE_2__ arglist; TYPE_6__ subfn; struct bytecode* compiled; } ;
typedef TYPE_5__ inst ;
typedef TYPE_6__ block ;
struct TYPE_16__ {int bytecode_pos; } ;
struct TYPE_14__ {int * cfunctions; void* cfunc_names; int ncfunctions; } ;


 int VAR_0 ;
 TYPE_6__ FUNC_0 (TYPE_6__,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_6__) ;
 scalar_t__ FUNC_3 (TYPE_6__*,void*,void**) ;
 TYPE_6__ FUNC_4 () ;
 int FUNC_5 (int ) ;
 void* FUNC_6 () ;
 void* FUNC_7 (void*,void*) ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (void*) ;
 struct bytecode* FUNC_10 (int) ;
 void* FUNC_11 (int,int) ;
 void* FUNC_12 () ;
 void* FUNC_13 (void*,void*,void*) ;
 void* FUNC_14 (char*) ;
 int FUNC_15 (struct locfile*,int ,char*,int) ;
 int FUNC_16 (struct bytecode*,TYPE_5__*) ;
 struct opcode_description* FUNC_17 (scalar_t__) ;

__attribute__((used)) static int FUNC_18(struct bytecode* VAR_12, block VAR_13, struct locfile* VAR_14, jv VAR_15, jv *VAR_16) {
  int VAR_17 = 0;
  int VAR_18 = 0;
  int VAR_19 = 0;
  VAR_12->nsubfunctions = 0;
  VAR_17 += FUNC_3(&VAR_13, VAR_15, VAR_16);
  VAR_13 = FUNC_0(VAR_13, FUNC_5(VAR_10));
  jv VAR_20 = FUNC_6();
  for (inst* VAR_21 = VAR_13.first; VAR_21; VAR_21 = VAR_21->next) {
    if (!VAR_21->next) FUNC_1(VAR_21 == VAR_13.last);
    int VAR_22 = FUNC_17(VAR_21->op)->length;
    if (VAR_21->op == VAR_2) {
      for (inst* VAR_23 = VAR_21->arglist.first; VAR_23; VAR_23 = VAR_23->next) {
        VAR_22 += 2;
      }
    }
    VAR_18 += VAR_22;
    VAR_21->bytecode_pos = VAR_18;
    VAR_21->compiled = VAR_12;

    FUNC_1(VAR_21->op != VAR_6 && VAR_21->op != VAR_5);

    if ((FUNC_17(VAR_21->op)->flags & VAR_9) &&
        VAR_21->bound_by == VAR_21) {
      VAR_21->imm.intval = VAR_19++;
      VAR_20 = FUNC_7(VAR_20, FUNC_14(VAR_21->symbol));
    }

    if (VAR_21->op == VAR_3) {
      FUNC_1(VAR_21->bound_by == VAR_21);
      VAR_21->imm.intval = VAR_12->nsubfunctions++;
    }
    if (VAR_21->op == VAR_4) {
      FUNC_1(VAR_21->bound_by == VAR_21);
      int VAR_24 = VAR_12->globals->ncfunctions++;
      VAR_12->globals->cfunc_names = FUNC_7(VAR_12->globals->cfunc_names,
                                                 FUNC_14(VAR_21->symbol));
      VAR_12->globals->cfunctions[VAR_24] = *VAR_21->imm.cfunc;
      VAR_21->imm.intval = VAR_24;
    }
  }
  if (VAR_18 > 0xFFFF) {

    FUNC_15(VAR_14, VAR_11,
        "function compiled to %d bytes which is too long", VAR_18);
    VAR_17++;
  }
  VAR_12->codelen = VAR_18;
  VAR_12->debuginfo = FUNC_13(VAR_12->debuginfo, FUNC_14("locals"), VAR_20);
  if (VAR_12->nsubfunctions) {
    VAR_12->subfunctions = FUNC_11(sizeof(struct bytecode*), VAR_12->nsubfunctions);
    for (inst* VAR_25 = VAR_13.first; VAR_25; VAR_25 = VAR_25->next) {
      if (VAR_25->op == VAR_3) {
        struct bytecode* VAR_26 = FUNC_10(sizeof(struct bytecode));
        VAR_12->subfunctions[VAR_25->imm.intval] = VAR_26;
        VAR_26->globals = VAR_12->globals;
        VAR_26->parent = VAR_12;
        VAR_26->nclosures = 0;
        VAR_26->debuginfo = FUNC_13(FUNC_12(), FUNC_14("name"), FUNC_14(VAR_25->symbol));
        jv VAR_27 = FUNC_6();
        for (inst* VAR_28 = VAR_25->arglist.first; VAR_28; VAR_28 = VAR_28->next) {
          FUNC_1(VAR_28->op == VAR_5);
          FUNC_1(VAR_28->bound_by == VAR_28);
          VAR_28->imm.intval = VAR_26->nclosures++;
          VAR_28->compiled = VAR_26;
          VAR_27 = FUNC_7(VAR_27, FUNC_14(VAR_28->symbol));
        }
        VAR_26->debuginfo = FUNC_13(VAR_26->debuginfo, FUNC_14("params"), VAR_27);
        VAR_17 += FUNC_18(VAR_26, VAR_25->subfn, VAR_14, VAR_15, VAR_16);
        VAR_25->subfn = FUNC_4();
      }
    }
  } else {
    VAR_12->subfunctions = 0;
  }
  uint16_t* VAR_29 = FUNC_11(sizeof(uint16_t), VAR_12->codelen);
  VAR_12->code = VAR_29;
  VAR_18 = 0;
  jv VAR_30 = FUNC_6();
  int VAR_31 = -1;
  if (!VAR_17) for (inst* VAR_32 = VAR_13.first; VAR_32; VAR_32 = VAR_32->next) {
    const struct opcode_description* VAR_33 = FUNC_17(VAR_32->op);
    if (VAR_33->length == 0)
      continue;
    VAR_29[VAR_18++] = VAR_32->op;
    FUNC_1(VAR_32->op != VAR_6 && VAR_32->op != VAR_5);
    if (VAR_32->op == VAR_1) {
      FUNC_1(VAR_32->bound_by->op == VAR_4);
      FUNC_1(!VAR_32->arglist.first);
      VAR_29[VAR_18++] = (uint16_t)VAR_32->imm.intval;
      VAR_29[VAR_18++] = VAR_32->bound_by->imm.intval;
    } else if (VAR_32->op == VAR_2) {
      FUNC_1(VAR_32->bound_by->op == VAR_3 ||
             VAR_32->bound_by->op == VAR_5);
      VAR_29[VAR_18++] = (uint16_t)VAR_32->imm.intval;
      VAR_29[VAR_18++] = FUNC_16(VAR_12, VAR_32->bound_by);
      VAR_29[VAR_18++] = VAR_32->bound_by->imm.intval |
        (VAR_32->bound_by->op == VAR_3 ? VAR_0 : 0);
      for (inst* VAR_34 = VAR_32->arglist.first; VAR_34; VAR_34 = VAR_34->next) {
        FUNC_1(VAR_34->op == VAR_6 && VAR_34->bound_by->op == VAR_3);
        VAR_29[VAR_18++] = FUNC_16(VAR_12, VAR_34->bound_by);
        VAR_29[VAR_18++] = VAR_34->bound_by->imm.intval | VAR_0;
      }
    } else if ((VAR_33->flags & VAR_8) && (VAR_33->flags & VAR_9)) {

      VAR_29[VAR_18++] = FUNC_8(FUNC_9(VAR_30));
      VAR_30 = FUNC_7(VAR_30, FUNC_9(VAR_32->imm.constant));
      VAR_29[VAR_18++] = FUNC_16(VAR_12, VAR_32->bound_by);
      uint16_t VAR_35 = (uint16_t)VAR_32->bound_by->imm.intval;
      VAR_29[VAR_18++] = VAR_35;
    } else if (VAR_33->flags & VAR_8) {
      VAR_29[VAR_18++] = FUNC_8(FUNC_9(VAR_30));
      VAR_30 = FUNC_7(VAR_30, FUNC_9(VAR_32->imm.constant));
    } else if (VAR_33->flags & VAR_9) {
      VAR_29[VAR_18++] = FUNC_16(VAR_12, VAR_32->bound_by);
      uint16_t VAR_36 = (uint16_t)VAR_32->bound_by->imm.intval;
      VAR_29[VAR_18++] = VAR_36;
      if (VAR_36 > VAR_31) VAR_31 = VAR_36;
    } else if (VAR_33->flags & VAR_7) {
      FUNC_1(VAR_32->imm.target->bytecode_pos != -1);
      FUNC_1(VAR_32->imm.target->bytecode_pos > VAR_18);
      VAR_29[VAR_18] = VAR_32->imm.target->bytecode_pos - (VAR_18 + 1);
      VAR_18++;
    } else if (VAR_33->length > 1) {
      FUNC_1(0 && "codegen not implemented for this operation");
    }
  }
  VAR_12->constants = VAR_30;
  VAR_12->nlocals = VAR_31 + 2;
  FUNC_2(VAR_13);
  return VAR_17;
}
