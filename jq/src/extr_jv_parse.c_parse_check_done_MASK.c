
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jv_parser {scalar_t__ stackpos; int next; } ;
typedef int jv ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct jv_parser* VAR_0, jv* VAR_1) {
  if (VAR_0->stackpos == 0 && FUNC_1(VAR_0->next)) {
    *VAR_1 = VAR_0->next;
    VAR_0->next = FUNC_0();
    return 1;
  } else {
    return 0;
  }
}
