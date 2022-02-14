
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int serverCommandSequence; } ;


 int FUNC_0 () ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;

void FUNC_2( int VAR_1 ) {
 while ( VAR_0.serverCommandSequence < VAR_1 ) {
  if ( FUNC_1( ++VAR_0.serverCommandSequence ) ) {
   FUNC_0();
  }
 }
}
