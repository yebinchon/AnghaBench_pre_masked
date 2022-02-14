
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int completionFunc_t ;
struct TYPE_3__ {int complete; int name; struct TYPE_3__* next; } ;
typedef TYPE_1__ cmd_function_t ;


 int FUNC_0 (char const*,int ) ;
 TYPE_1__* VAR_0 ;

void FUNC_1( const char *VAR_1, completionFunc_t VAR_2 ) {
 cmd_function_t *VAR_3;

 for( VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_3->next ) {
  if( !FUNC_0( VAR_1, VAR_3->name ) ) {
   VAR_3->complete = VAR_2;
   return;
  }
 }
}
