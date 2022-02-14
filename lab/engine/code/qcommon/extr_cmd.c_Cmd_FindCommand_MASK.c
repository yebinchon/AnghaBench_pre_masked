
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; struct TYPE_4__* next; } ;
typedef TYPE_1__ cmd_function_t ;


 int FUNC_0 (char const*,int ) ;
 TYPE_1__* VAR_0 ;

cmd_function_t *FUNC_1( const char *VAR_1 )
{
 cmd_function_t *VAR_2;
 for( VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next )
  if( !FUNC_0( VAR_1, VAR_2->name ) )
   return VAR_2;
 return ((void*)0);
}
