
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numItems; int maxItems; int* items; } ;
typedef TYPE_1__ traceNode_t ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (void*,int*,int) ;
 void* FUNC_2 (int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_3( traceNode_t *VAR_2, int VAR_3 ){
 void *VAR_4;



 if ( VAR_3 < 0 ) {
  return -1;
 }


 if ( VAR_2->numItems >= VAR_2->maxItems ) {

  if ( VAR_2 == VAR_1 ) {
   VAR_2->maxItems *= 2;
  }
  else{
   VAR_2->maxItems += VAR_0;
  }
  if ( VAR_2->maxItems <= 0 ) {
   VAR_2->maxItems = VAR_0;
  }
  VAR_4 = FUNC_2( VAR_2->maxItems * sizeof( *VAR_2->items ) );
  if ( VAR_2->items != ((void*)0) ) {
   FUNC_1( VAR_4, VAR_2->items, VAR_2->numItems * sizeof( *VAR_2->items ) );
   FUNC_0( VAR_2->items );
  }
  VAR_2->items = (int*) VAR_4;
 }


 VAR_2->items[ VAR_2->numItems ] = VAR_3;
 VAR_2->numItems++;


 return ( VAR_2->numItems - 1 );
}
