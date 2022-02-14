
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * xcommand_t ;
struct TYPE_4__ {struct TYPE_4__* next; int * complete; int * function; int name; } ;
typedef TYPE_1__ cmd_function_t ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*) ;
 TYPE_1__* FUNC_3 (int) ;
 TYPE_1__* VAR_0 ;

void FUNC_4( const char *VAR_1, xcommand_t VAR_2 ) {
 cmd_function_t *VAR_3;


 if( FUNC_0( VAR_1 ) )
 {

  if( VAR_2 != ((void*)0) )
   FUNC_1( "Cmd_AddCommand: %s already defined\n", VAR_1 );
  return;
 }


 VAR_3 = FUNC_3 (sizeof(cmd_function_t));
 VAR_3->name = FUNC_2( VAR_1 );
 VAR_3->function = VAR_2;
 VAR_3->complete = ((void*)0);
 VAR_3->next = VAR_0;
 VAR_0 = VAR_3;
}
