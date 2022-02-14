
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dtoa_context {TYPE_1__** freelist; } ;
struct TYPE_3__ {size_t k; struct TYPE_3__* next; } ;
typedef TYPE_1__ Bigint ;


 int FUNC_0 (void*) ;
 size_t VAR_0 ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void
FUNC_2
 (struct dtoa_context* VAR_1, Bigint *VAR_2)
{
 if (VAR_2) {
  if (VAR_2->k > VAR_0)



   FUNC_1((void*)VAR_2);

  else {
   VAR_2->next = VAR_1->freelist[VAR_2->k];
   VAR_1->freelist[VAR_2->k] = VAR_2;
   }
  }
 }
