
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tl_type {int constructors_num; } ;
struct tl_tree_type {struct tl_type* type; } ;
struct tl_combinator {int fIP_len; int var_num; scalar_t__ name; int args_num; void* fIP; TYPE_1__** args; scalar_t__ result; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 void* FUNC_0 (void**,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,void**,int,int*,int,int) ;
 int FUNC_4 (scalar_t__,void**,int,int*) ;
 int FUNC_5 (int*,int ,int) ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;

int FUNC_6 (struct tl_combinator *VAR_22, void **VAR_23, int VAR_24) {
  if (VAR_22->fIP) { return VAR_22->fIP_len; }
  if (VAR_24 <= 10) { return -1; }
  int VAR_25 = 0;
  FUNC_2 (!VAR_22->fIP);
  int VAR_26;
  int VAR_27[VAR_22->var_num];
  FUNC_5 (VAR_27, 0, sizeof (int) * VAR_22->var_num);
  int VAR_28 = FUNC_4 (VAR_22->result, VAR_23 + VAR_25, VAR_24 - VAR_25, VAR_27);
  if (VAR_28 < 0) { return -1; }
  VAR_25 += VAR_28;
  if (VAR_22->name == VAR_4) {
    VAR_23[VAR_25 ++] = VAR_13;
    VAR_23[VAR_25 ++] = VAR_21;
    VAR_22->fIP = FUNC_0 (VAR_23, VAR_25);
    VAR_22->fIP_len = VAR_25;
    return VAR_25;
  } else if (VAR_22->name == VAR_5) {
    VAR_23[VAR_25 ++] = VAR_14;
    VAR_23[VAR_25 ++] = VAR_21;
    VAR_22->fIP = FUNC_0 (VAR_23, VAR_25);
    VAR_22->fIP_len = VAR_25;
    return VAR_25;
  } else if (VAR_22->name == VAR_8) {
    VAR_23[VAR_25 ++] = VAR_16;
    VAR_23[VAR_25 ++] = VAR_21;
    VAR_22->fIP = FUNC_0 (VAR_23, VAR_25);
    VAR_22->fIP_len = VAR_25;
    return VAR_25;
  } else if (VAR_22->name == VAR_3) {
    VAR_23[VAR_25 ++] = VAR_11;
    VAR_23[VAR_25 ++] = VAR_21;
    VAR_22->fIP = FUNC_0 (VAR_23, VAR_25);
    VAR_22->fIP_len = VAR_25;
    return VAR_25;
  } else if (VAR_22->name == VAR_9) {
    VAR_23[VAR_25 ++] = VAR_19;
    static void *VAR_29[4];
    VAR_29[0] = VAR_20;
    VAR_29[1] = (long)0;
    VAR_29[2] = VAR_18;
    VAR_29[3] = VAR_21;
    VAR_23[VAR_25 ++] = FUNC_0 (VAR_29, 4);
    VAR_23[VAR_25 ++] = VAR_21;
    VAR_22->fIP = FUNC_0 (VAR_23, VAR_25);
    VAR_22->fIP_len = VAR_25;
    return VAR_25;
  } else if (VAR_22->name == VAR_7) {
    VAR_23[VAR_25 ++] = VAR_15;
    static void *VAR_30[4];
    VAR_30[0] = VAR_20;
    VAR_30[1] = (long)0;
    VAR_30[2] = VAR_18;
    VAR_30[3] = VAR_21;
    VAR_23[VAR_25 ++] = FUNC_0 (VAR_30, 4);
    VAR_23[VAR_25 ++] = VAR_21;
    VAR_22->fIP = FUNC_0 (VAR_23, VAR_25);
    VAR_22->fIP_len = VAR_25;
    return VAR_25;
  } else if (VAR_22->name == VAR_6 || VAR_22->name == VAR_1) {
    VAR_23[VAR_25 ++] = VAR_12;
    VAR_23[VAR_25 ++] = VAR_21;
    VAR_22->fIP = FUNC_0 (VAR_23, VAR_25);
    VAR_22->fIP_len = VAR_25;
    return VAR_25;
  } else if (VAR_22->name == VAR_2) {
    VAR_23[VAR_25 ++] = VAR_17;
    VAR_23[VAR_25 ++] = VAR_21;
    VAR_22->fIP = FUNC_0 (VAR_23, VAR_25);
    VAR_22->fIP_len = VAR_25;
    return VAR_25;
  }

  if (FUNC_1 (VAR_22->result) == VAR_10) {
    struct tl_type *VAR_31 = ((struct tl_tree_type *)(VAR_22->result))->type;
    if (VAR_31->constructors_num == 1) {
      int VAR_32 = -1;
      int VAR_33 = 0;
      for (VAR_26 = 0; VAR_26 < VAR_22->args_num; VAR_26++) if (!(VAR_22->args[VAR_26]->flags & VAR_0)) {
        VAR_33 ++;
        VAR_32 = VAR_26;
      }
      if (VAR_33 == 1) {
        VAR_32 = FUNC_3 (VAR_22->args[VAR_32], VAR_23 + VAR_25, VAR_24 - VAR_25, VAR_27, VAR_32 + 1, 1);
        if (VAR_32 < 0) { return -1; }
        VAR_25 += VAR_32;
        if (VAR_24 - VAR_25 <= 10) { return -1; }
        VAR_23[VAR_25 ++] = VAR_21;
        VAR_22->fIP = FUNC_0 (VAR_23, VAR_25);
        VAR_22->fIP_len = VAR_25;
        return VAR_25;
      }
    }
  }
  for (VAR_26 = 0; VAR_26 < VAR_22->args_num; VAR_26++) if (!(VAR_22->args[VAR_26]->flags & VAR_0)) {
    VAR_28 = FUNC_3 (VAR_22->args[VAR_26], VAR_23 + VAR_25, VAR_24 - VAR_25, VAR_27, VAR_26 + 1, 0);
    if (VAR_28 < 0) { return -1; }
    VAR_25 += VAR_28;

  }
  if (VAR_24 - VAR_25 <= 10) { return -1; }
  VAR_23[VAR_25 ++] = VAR_21;
  VAR_22->fIP = FUNC_0 (VAR_23, VAR_25);
  VAR_22->fIP_len = VAR_25;
  return VAR_25;
}
