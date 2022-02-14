
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct dtoa_context {TYPE_1__** freelist; TYPE_1__* p5s; } ;
struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ Bigint ;


 int FUNC_0 (struct dtoa_context*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(struct dtoa_context* VAR_0) {
  int VAR_1;
  while (VAR_0->p5s) {
    Bigint* VAR_2 = VAR_0->p5s;
    VAR_0->p5s = VAR_2->next;
    FUNC_0(VAR_0, VAR_2);
  }
  for (VAR_1=0; VAR_1<(int)(sizeof(VAR_0->freelist)/sizeof(VAR_0->freelist[0])); VAR_1++) {
    while (VAR_0->freelist[VAR_1]) {
      Bigint* VAR_3 = VAR_0->freelist[VAR_1];
      VAR_0->freelist[VAR_1] = VAR_3->next;
      FUNC_1(VAR_3);
    }
  }
}
