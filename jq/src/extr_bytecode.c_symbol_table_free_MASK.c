
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol_table {int cfunc_names; struct symbol_table* cfunctions; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct symbol_table*) ;

__attribute__((used)) static void FUNC_2(struct symbol_table* VAR_0) {
  FUNC_1(VAR_0->cfunctions);
  FUNC_0(VAR_0->cfunc_names);
  FUNC_1(VAR_0);
}
