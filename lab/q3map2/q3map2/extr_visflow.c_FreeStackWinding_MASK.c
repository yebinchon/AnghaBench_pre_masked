
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* freewindings; int * windings; } ;
typedef TYPE_1__ pstack_t ;
typedef int fixedWinding_t ;


 int FUNC_0 (char*) ;

void FUNC_1( fixedWinding_t *VAR_0, pstack_t *VAR_1 ){
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < sizeof(VAR_1->windings) / sizeof(VAR_1->windings[0]); VAR_2++) {
  if (VAR_0 == &VAR_1->windings[VAR_2]) {
   if ( VAR_1->freewindings[VAR_2] ) {
    FUNC_0( "FreeStackWinding: already free" );
   }
   VAR_1->freewindings[VAR_2] = 1;
   break;
  }
 }
}
