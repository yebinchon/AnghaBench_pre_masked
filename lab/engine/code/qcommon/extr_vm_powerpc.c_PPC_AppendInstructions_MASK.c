
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ppc_instruction_t ;
struct TYPE_4__ {size_t length; int * code; int * jump; } ;
typedef TYPE_1__ dest_instruction_t ;


 int FUNC_0 (TYPE_1__*,unsigned long) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int *,int const*,size_t) ;

__attribute__((used)) static void
FUNC_3(
  unsigned long int VAR_0,
  size_t VAR_1,
  const ppc_instruction_t *VAR_2
 )
{
 if ( VAR_1 < 0 )
  VAR_1 = 0;
 size_t VAR_3 = sizeof( ppc_instruction_t ) * VAR_1;
 dest_instruction_t *VAR_4 = FUNC_1( sizeof( dest_instruction_t ) + VAR_3 );

 VAR_4->length = VAR_1;
 VAR_4->jump = ((void*)0);

 if ( VAR_3 > 0 )
  FUNC_2( &(VAR_4->code[0]), VAR_2, VAR_3 );

 FUNC_0( VAR_4, VAR_0 );
}
