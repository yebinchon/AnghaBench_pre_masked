
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned long i_count; struct TYPE_5__* next; scalar_t__ count; } ;
typedef TYPE_1__ dest_instruction_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__** VAR_3 ;

__attribute__((used)) static void
FUNC_0(
  dest_instruction_t *VAR_4,
  unsigned long int VAR_5
     )
{
 VAR_4->count = VAR_1++;
 VAR_4->i_count = VAR_5;
 VAR_4->next = ((void*)0);

 VAR_2->next = VAR_4;
 VAR_2 = VAR_4;

 if ( VAR_5 != VAR_0 ) {
  if ( ! VAR_3[ VAR_5 ] )
   VAR_3[ VAR_5 ] = VAR_4;
 }
}
