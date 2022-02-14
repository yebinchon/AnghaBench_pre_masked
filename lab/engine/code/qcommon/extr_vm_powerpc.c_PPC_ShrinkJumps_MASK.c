
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ bo; size_t jump_to; TYPE_2__* parent; struct TYPE_5__* nextJump; } ;
typedef TYPE_1__ symbolic_jump_t ;
struct TYPE_6__ {int length; scalar_t__ count; struct TYPE_6__* next; } ;
typedef TYPE_2__ dest_instruction_t ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 TYPE_2__** VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void
FUNC_1( void )
{
 symbolic_jump_t *VAR_3 = VAR_2;
 while ( (VAR_3 = VAR_3->nextJump) ) {
  if ( VAR_3->bo == VAR_0 )

   VAR_3->parent->length = 1;

  else {
   dest_instruction_t *VAR_4 = VAR_1[ VAR_3->jump_to ];
   dest_instruction_t *VAR_5 = VAR_3->parent;
   long int VAR_6 = 0;
   if ( ! VAR_4 )
    FUNC_0( "No instruction to jump to" );
   if ( VAR_5->count > VAR_4->count ) {
    do {
     VAR_6 += VAR_4->length;
    } while ( ( VAR_4 = VAR_4->next ) != VAR_5 );
   } else {
    VAR_6 = 1;
    while ( ( VAR_5 = VAR_5->next ) != VAR_4 )
     VAR_6 += VAR_5->length;
   }
   if ( VAR_6 < 0x2000 )

    VAR_3->parent->length = 1;
  }
 }
}
