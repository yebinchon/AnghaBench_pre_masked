
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtoa_context {scalar_t__ p5s; scalar_t__* freelist; } ;



void FUNC_0(struct dtoa_context* VAR_0) {
  int VAR_1;
  for (VAR_1=0; VAR_1<(int)(sizeof(VAR_0->freelist)/sizeof(VAR_0->freelist[0])); VAR_1++) {
    VAR_0->freelist[VAR_1] = 0;
  }
  VAR_0->p5s = 0;
}
