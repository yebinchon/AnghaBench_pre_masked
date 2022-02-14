
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long count; unsigned int* data; struct TYPE_4__* next; } ;
typedef TYPE_1__ local_data_t ;


 long VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;
 int * VAR_1 ;
 long VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static size_t
FUNC_2( unsigned int VAR_4 )
{
 local_data_t *VAR_5 = VAR_3;
 long int VAR_6 = 0;


 do {
  long int VAR_7;
  for ( VAR_7 = 0; VAR_7 < VAR_5->count; VAR_7++ ) {
   if ( VAR_5->data[ VAR_7 ] == VAR_4 ) {
    VAR_6 += VAR_7;
    return FUNC_1( VAR_1[ VAR_6 ] );
   }
  }
  if ( !VAR_5->next )
   break;

  VAR_6 += VAR_5->count;
  VAR_5 = VAR_5->next;
 } while (1);


 VAR_6 += VAR_5->count;


 if ( VAR_5->count >= VAR_0 ) {
  VAR_5->next = FUNC_0( sizeof( local_data_t ) );
  VAR_5 = VAR_5->next;
  VAR_5->count = 0;
  VAR_5->next = ((void*)0);
 }

 VAR_5->data[ VAR_5->count ] = VAR_4;
 VAR_5->count += 1;

 VAR_2 = VAR_6 + 1;

 return FUNC_1( VAR_1[ VAR_6 ] );
}
