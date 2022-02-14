
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jv_parser {int flags; int stackpos; int st; scalar_t__ tokenpos; void** stack; void* next; void* output; int last_seen; scalar_t__ stacklen; void* path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 () ;
 int FUNC_1 (void*) ;
 void* FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct jv_parser* VAR_3) {
  if ((VAR_3->flags & VAR_2)) {
    FUNC_1(VAR_3->path);
    VAR_3->path = FUNC_0();
    VAR_3->stacklen = 0;
  }
  VAR_3->last_seen = VAR_0;
  FUNC_1(VAR_3->output);
  VAR_3->output = FUNC_2();
  FUNC_1(VAR_3->next);
  VAR_3->next = FUNC_2();
  for (int VAR_4=0; VAR_4<VAR_3->stackpos; VAR_4++)
    FUNC_1(VAR_3->stack[VAR_4]);
  VAR_3->stackpos = 0;
  VAR_3->tokenpos = 0;
  VAR_3->st = VAR_1;
}
