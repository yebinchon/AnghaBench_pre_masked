
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* stringOffsets; scalar_t__ stringData; } ;
struct TYPE_6__ {TYPE_1__ gameState; } ;
struct TYPE_5__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;

void FUNC_1( void ) {
 int VAR_4;
 int VAR_5;

 if ( VAR_3.state != VAR_0 ) {
  FUNC_0( "Not connected to a server.\n");
  return;
 }

 for ( VAR_4 = 0 ; VAR_4 < VAR_1 ; VAR_4++ ) {
  VAR_5 = VAR_2.gameState.stringOffsets[ VAR_4 ];
  if ( !VAR_5 ) {
   continue;
  }
  FUNC_0( "%4i: %s\n", VAR_4, VAR_2.gameState.stringData + VAR_5 );
 }
}
