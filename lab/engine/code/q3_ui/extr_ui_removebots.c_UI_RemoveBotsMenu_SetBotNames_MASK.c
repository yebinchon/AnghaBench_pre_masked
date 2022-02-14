
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int baseBotNum; int numBots; int * botnames; scalar_t__* botClientNums; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (scalar_t__,char*,int) ;

__attribute__((used)) static void FUNC_4( void ) {
 int VAR_3;
 char VAR_4[VAR_1];

 for ( VAR_3 = 0; (VAR_3 < 7) && (VAR_2.baseBotNum + VAR_3 < VAR_2.numBots); VAR_3++ ) {
  FUNC_3( VAR_0 + VAR_2.botClientNums[VAR_2.baseBotNum + VAR_3], VAR_4, VAR_1 );
  FUNC_2( VAR_2.botnames[VAR_3], FUNC_0( VAR_4, "n" ), sizeof(VAR_2.botnames[VAR_3]) );
  FUNC_1( VAR_2.botnames[VAR_3] );
 }

}
