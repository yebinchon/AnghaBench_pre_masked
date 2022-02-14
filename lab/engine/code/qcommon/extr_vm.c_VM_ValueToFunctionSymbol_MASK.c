
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* symbols; } ;
typedef TYPE_1__ vm_t ;
struct TYPE_6__ {int symValue; struct TYPE_6__* next; } ;
typedef TYPE_2__ vmSymbol_t ;



vmSymbol_t *FUNC_0( vm_t *VAR_0, int VAR_1 ) {
 vmSymbol_t *VAR_2;
 static vmSymbol_t VAR_3;

 VAR_2 = VAR_0->symbols;
 if ( !VAR_2 ) {
  return &VAR_3;
 }

 while ( VAR_2->next && VAR_2->next->symValue <= VAR_1 ) {
  VAR_2 = VAR_2->next;
 }

 return VAR_2;
}
