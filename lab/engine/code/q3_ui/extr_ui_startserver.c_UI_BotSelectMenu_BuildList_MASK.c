
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int numBots; int numpages; int* sortedBotNums; scalar_t__ modelpage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int*,int,int,int ) ;

__attribute__((used)) static void FUNC_2( void ) {
 int VAR_3;

 VAR_2.modelpage = 0;
 VAR_2.numBots = FUNC_0();
 VAR_2.numpages = VAR_2.numBots / VAR_0;
 if( VAR_2.numBots % VAR_0 ) {
  VAR_2.numpages++;
 }


 for( VAR_3 = 0; VAR_3 < VAR_2.numBots; VAR_3++ ) {
  VAR_2.sortedBotNums[VAR_3] = VAR_3;
 }


 FUNC_1( VAR_2.sortedBotNums, VAR_2.numBots, sizeof(VAR_2.sortedBotNums[0]), VAR_1 );
}
