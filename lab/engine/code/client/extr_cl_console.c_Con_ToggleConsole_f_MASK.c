
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ state; } ;
struct TYPE_6__ {scalar_t__ integer; } ;
struct TYPE_5__ {int widthInChars; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 TYPE_3__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;

void FUNC_4 (void) {

 if ( VAR_2.state == VAR_0 && FUNC_2( ) == VAR_1 ) {
  return;
 }

 if ( VAR_3->integer ) {
  FUNC_1( &VAR_4 );
 }

 VAR_4.widthInChars = VAR_5;

 FUNC_0 ();
 FUNC_3( FUNC_2( ) ^ VAR_1 );
}
