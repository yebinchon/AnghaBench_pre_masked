
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ function; } ;
typedef TYPE_1__ cmd_function_t ;


 TYPE_1__* FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,char*,char const*) ;
 int VAR_0 ;

void FUNC_3( const char *VAR_1 )
{
 cmd_function_t *VAR_2 = FUNC_0( VAR_1 );

 if( !VAR_2 )
  return;
 if( VAR_2->function )
 {
  FUNC_2( VAR_0, "Restricted source tried to remove "
   "system command \"%s\"", VAR_1 );
  return;
 }

 FUNC_1( VAR_1 );
}
