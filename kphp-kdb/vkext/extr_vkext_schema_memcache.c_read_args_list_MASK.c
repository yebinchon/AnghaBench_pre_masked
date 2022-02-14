
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct arg {int exist_var_num; int flags; int var_num; TYPE_1__* type; void* exist_var_bit; int id; } ;
struct TYPE_4__ {int flags; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int*) ;
 TYPE_1__* FUNC_4 (int*) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 void* FUNC_6 () ;
 scalar_t__ FUNC_7 (int *) ;
 struct arg* FUNC_8 (int) ;

int FUNC_9 (struct arg **VAR_5, int VAR_6, int *VAR_7) {
  int VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
    VAR_5[VAR_8] = FUNC_8 (sizeof (struct arg));
    VAR_5[VAR_8]->exist_var_num = -1;
    VAR_5[VAR_8]->exist_var_bit = 0;
    FUNC_1 (sizeof (struct arg));
    if (VAR_4 == 1) {
      if (FUNC_6 () != VAR_2) {
        return -1;
      }
    } else {
      if (FUNC_6 () != VAR_3) {
        return -1;
      }
    }
    if (FUNC_7 (&VAR_5[VAR_8]->id) < 0) {
      return -1;
    }
    FUNC_0 (FUNC_5 (VAR_5[VAR_8]->id));
    FUNC_1 (FUNC_5 (VAR_5[VAR_8]->id));
    VAR_5[VAR_8]->flags = FUNC_6 ();
    if (VAR_4 >= 2) {
      if (VAR_5[VAR_8]->flags & 2) {
        VAR_5[VAR_8]->flags &= ~2;
        VAR_5[VAR_8]->flags |= (1 << 20);
      }
      if (VAR_5[VAR_8]->flags & 4) {
        VAR_5[VAR_8]->flags &= ~4;
        VAR_5[VAR_8]->var_num = FUNC_6 ();
      } else {
        VAR_5[VAR_8]->var_num = -1;
      }
    } else {
      VAR_5[VAR_8]->var_num = FUNC_6 ();
    }
    if (VAR_5[VAR_8]->var_num >= *VAR_7) {
      *VAR_7 = VAR_5[VAR_8]->var_num + 1;
    }
    if (VAR_5[VAR_8]->flags & VAR_1) {
      VAR_5[VAR_8]->exist_var_num = FUNC_6 ();
      VAR_5[VAR_8]->exist_var_bit = FUNC_6 ();
    }
    if (VAR_4 >= 2) {
      VAR_5[VAR_8]->type = FUNC_4 (VAR_7);
    } else {
      VAR_5[VAR_8]->type = FUNC_3 (VAR_7);
    }
    if (!VAR_5[VAR_8]->type) {
      return -1;
    }
    if (VAR_5[VAR_8]->var_num < 0 && VAR_5[VAR_8]->exist_var_num < 0 && (FUNC_2(VAR_5[VAR_8]->type) || (VAR_5[VAR_8]->type->flags & VAR_0))) {
      VAR_5[VAR_8]->flags |= VAR_0;
    }
  }
  return 1;
}
