
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int symbolic_jump_t ;
typedef int local_data_t ;
typedef int dest_instruction_t ;
struct TYPE_8__ {int * next; scalar_t__ count; } ;
struct TYPE_7__ {int * jump; int * next; scalar_t__ count; } ;
struct TYPE_6__ {int * nextJump; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 long VAR_2 ;
 int VAR_3 ;
 TYPE_5__* VAR_4 ;
 TYPE_3__* VAR_5 ;
 TYPE_3__* VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int ,...) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 TYPE_1__* VAR_24 ;
 TYPE_1__* VAR_25 ;

__attribute__((used)) static void
FUNC_4( void )
{
 VAR_5 = VAR_6 = FUNC_0( sizeof( dest_instruction_t ) );
 VAR_5->count = 0;
 VAR_5->next = ((void*)0);
 VAR_5->jump = ((void*)0);

 VAR_24 = VAR_25 = FUNC_0( sizeof( symbolic_jump_t ) );
 VAR_24->nextJump = ((void*)0);

 VAR_4 = FUNC_0( sizeof( local_data_t ) );
 VAR_4->count = 0;
 VAR_4->next = ((void*)0);
 FUNC_2( VAR_0 );

 long int VAR_26 = VAR_3 + 4 * VAR_1;

 FUNC_3( VAR_11, VAR_16 );
 FUNC_3( VAR_15, VAR_17, -VAR_26, VAR_17 );
 FUNC_3( VAR_14, VAR_23, VAR_3 + 0 * VAR_1, VAR_17 );
 FUNC_3( VAR_14, VAR_22, VAR_3 + 1 * VAR_1, VAR_17 );
 FUNC_3( VAR_14, VAR_21, VAR_3 + 2 * VAR_1, VAR_17 );
 FUNC_3( VAR_14, VAR_16, VAR_26 + VAR_2, VAR_17 );
 FUNC_3( VAR_12, VAR_23, VAR_18 );
 FUNC_3( VAR_12, VAR_22, VAR_19 );
 FUNC_3( VAR_12, VAR_21, VAR_20 );
 FUNC_3( VAR_8, +4*8 );
 FUNC_3( VAR_10, VAR_23, VAR_3 + 0 * VAR_1, VAR_17 );
 FUNC_3( VAR_10, VAR_22, VAR_3 + 1 * VAR_1, VAR_17 );
 FUNC_3( VAR_10, VAR_21, VAR_3 + 2 * VAR_1, VAR_17 );
 FUNC_3( VAR_10, VAR_16, VAR_26 + VAR_2, VAR_17 );
 FUNC_3( VAR_13, VAR_16 );
 FUNC_3( VAR_7, VAR_17, VAR_17, VAR_26 );
 FUNC_3( VAR_9 );

 FUNC_1();
}
