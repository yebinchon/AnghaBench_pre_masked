
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* complete ) (char*,int) ;int name; struct TYPE_3__* next; } ;
typedef TYPE_1__ cmd_function_t ;


 int FUNC_0 (char const*,int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char*,int) ;

void FUNC_2( const char *VAR_1, char *VAR_2, int VAR_3 ) {
 cmd_function_t *VAR_4;

 for( VAR_4 = VAR_0; VAR_4; VAR_4 = VAR_4->next ) {
  if( !FUNC_0( VAR_1, VAR_4->name ) ) {
   if ( VAR_4->complete ) {
    VAR_4->complete( VAR_2, VAR_3 );
   }
   return;
  }
 }
}
