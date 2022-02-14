
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jv_parser {scalar_t__ stacklen; void* output; void* next; void* path; } ;
typedef void* jv ;


 void* FUNC_0 (void*,void*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (void*,int ,int) ;
 void* FUNC_3 (void*) ;
 void* FUNC_4 () ;
 scalar_t__ FUNC_5 (void*) ;

__attribute__((used)) static int FUNC_6(struct jv_parser* VAR_0, jv* VAR_1) {
  if (VAR_0->stacklen == 0 && FUNC_5(VAR_0->next)) {
    *VAR_1 = FUNC_0(FUNC_3(VAR_0->path),VAR_0->next);
    VAR_0->next = FUNC_4();
    return 1;
  } else if (FUNC_5(VAR_0->output)) {
    if (FUNC_1(FUNC_3(VAR_0->output)) > 2) {


      *VAR_1 = FUNC_2(FUNC_3(VAR_0->output), 0, 2);
      VAR_0->output = FUNC_2(VAR_0->output, 0, 1);
    } else {

      *VAR_1 = VAR_0->output;
      VAR_0->output = FUNC_4();
    }
    return 1;
  } else {
    return 0;
  }
}
