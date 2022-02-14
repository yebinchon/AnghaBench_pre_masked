
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned long jump_to; long bo; long bi; unsigned long ext; struct TYPE_5__* nextJump; TYPE_2__* parent; } ;
typedef TYPE_1__ symbolic_jump_t ;
struct TYPE_6__ {int length; TYPE_1__* jump; } ;
typedef TYPE_2__ dest_instruction_t ;


 int FUNC_0 (TYPE_2__*,unsigned long) ;
 void* FUNC_1 (int) ;
 long VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_2(
  unsigned long int VAR_2,
  unsigned long int VAR_3,
  long int VAR_4,
  long int VAR_5,
  unsigned long int VAR_6
 )
{
 dest_instruction_t *VAR_7 = FUNC_1( sizeof( dest_instruction_t ) );
 symbolic_jump_t *VAR_8 = FUNC_1( sizeof( symbolic_jump_t ) );

 VAR_8->jump_to = VAR_3;
 VAR_8->bo = VAR_4;
 VAR_8->bi = VAR_5;
 VAR_8->ext = VAR_6;
 VAR_8->parent = VAR_7;
 VAR_8->nextJump = ((void*)0);

 VAR_1->nextJump = VAR_8;
 VAR_1 = VAR_8;

 VAR_7->length = (VAR_4 == VAR_0 ? 1 : 2);
 VAR_7->jump = VAR_8;

 FUNC_0( VAR_7, VAR_2 );
}
