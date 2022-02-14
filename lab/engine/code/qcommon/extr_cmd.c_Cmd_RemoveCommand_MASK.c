
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; struct TYPE_5__* name; } ;
typedef TYPE_1__ cmd_function_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char const*,TYPE_1__*) ;

void FUNC_2( const char *VAR_1 ) {
 cmd_function_t *VAR_2, **VAR_3;

 VAR_3 = &VAR_0;
 while( 1 ) {
  VAR_2 = *VAR_3;
  if ( !VAR_2 ) {

   return;
  }
  if ( !FUNC_1( VAR_1, VAR_2->name ) ) {
   *VAR_3 = VAR_2->next;
   FUNC_0 (VAR_2->name);
   FUNC_0 (VAR_2);
   return;
  }
  VAR_3 = &VAR_2->next;
 }
}
