
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int numBots; int selectedmodel; int* sortedBotNums; } ;


 char* FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (char*,char const*) ;
 char* FUNC_2 (int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_3( char *VAR_1 ) {
 const char *VAR_2;
 const char *VAR_3;
 int VAR_4;
 int VAR_5;

 for( VAR_4 = 0; VAR_4 < VAR_0.numBots; VAR_4++ ) {
  VAR_2 = FUNC_2( VAR_4 );
  VAR_3 = FUNC_0( VAR_2, "name" );
  if( FUNC_1( VAR_1, VAR_3 ) == 0 ) {
   break;
  }
 }
 if( VAR_4 == VAR_0.numBots ) {
  VAR_0.selectedmodel = 0;
  return;
 }

 for( VAR_5 = 0; VAR_5 < VAR_0.numBots; VAR_5++ ) {
  if( VAR_0.sortedBotNums[VAR_5] == VAR_4 ) {
   break;
  }
 }
 if( VAR_5 == VAR_0.numBots ) {
  VAR_0.selectedmodel = 0;
  return;
 }

 VAR_0.selectedmodel = VAR_5;
}
