
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* function ) () ;struct TYPE_5__* next; int name; } ;
typedef TYPE_1__ cmd_function_t ;
struct TYPE_7__ {scalar_t__ integer; } ;
struct TYPE_6__ {scalar_t__ integer; } ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int * VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_3__* VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_8 () ;

void FUNC_9( const char *VAR_4 ) {
 cmd_function_t *VAR_5, **VAR_6;


 FUNC_3( VAR_4 );
 if ( !FUNC_2() ) {
  return;
 }


 for ( VAR_6 = &VAR_1 ; *VAR_6 ; VAR_6 = &VAR_5->next ) {
  VAR_5 = *VAR_6;
  if ( !FUNC_5( VAR_0[0],VAR_5->name ) ) {


   *VAR_6 = VAR_5->next;
   VAR_5->next = VAR_1;
   VAR_1 = VAR_5;


   if ( !VAR_5->function ) {

    break;
   } else {
    VAR_5->function ();
   }
   return;
  }
 }


 if ( FUNC_4() ) {
  return;
 }


 if ( VAR_2 && VAR_2->integer && FUNC_1() ) {
  return;
 }


 if ( VAR_3 && VAR_3->integer && FUNC_6() ) {
  return;
 }


 if ( VAR_2 && VAR_2->integer && FUNC_7() ) {
  return;
 }



 FUNC_0 ( VAR_4 );
}
