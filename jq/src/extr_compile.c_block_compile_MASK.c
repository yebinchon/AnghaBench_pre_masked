
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol_table {int dummy; } ;
struct locfile {int dummy; } ;
struct cfunction {int dummy; } ;
struct bytecode {TYPE_1__* globals; int debuginfo; scalar_t__ nclosures; scalar_t__ parent; } ;
typedef int jv ;
typedef int block ;
struct TYPE_2__ {int ncfunctions; int cfunc_names; int cfunctions; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bytecode*) ;
 int FUNC_2 (struct bytecode*,int ,struct locfile*,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 void* FUNC_7 (int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (char*) ;

int FUNC_13(block VAR_0, struct bytecode** VAR_1, struct locfile* VAR_2, jv VAR_3) {
  struct bytecode* VAR_4 = FUNC_7(sizeof(struct bytecode));
  VAR_4->parent = 0;
  VAR_4->nclosures = 0;
  VAR_4->globals = FUNC_7(sizeof(struct symbol_table));
  int VAR_5 = FUNC_3(VAR_0);
  VAR_4->globals->ncfunctions = 0;
  VAR_4->globals->cfunctions = FUNC_8(sizeof(struct cfunction), VAR_5);
  VAR_4->globals->cfunc_names = FUNC_4();
  VAR_4->debuginfo = FUNC_11(FUNC_10(), FUNC_12("name"), FUNC_9());
  jv VAR_6 = FUNC_6();
  int VAR_7 = FUNC_2(VAR_4, VAR_0, VAR_2, VAR_3, &VAR_6);
  FUNC_5(VAR_3);
  FUNC_5(VAR_6);
  FUNC_0(VAR_4->globals->ncfunctions == VAR_5);
  if (VAR_7 > 0) {
    FUNC_1(VAR_4);
    *VAR_1 = 0;
  } else {
    *VAR_1 = VAR_4;
  }
  return VAR_7;
}
