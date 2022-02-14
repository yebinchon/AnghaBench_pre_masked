
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; struct TYPE_5__* prev; } ;
typedef TYPE_1__ weights_vector_t ;



__attribute__((used)) static void FUNC_0 (weights_vector_t *VAR_0, weights_vector_t *VAR_1, weights_vector_t *VAR_2) {
  VAR_0->next = VAR_1; VAR_1->prev = VAR_0;
  VAR_2->prev = VAR_1; VAR_1->next = VAR_2;
}
