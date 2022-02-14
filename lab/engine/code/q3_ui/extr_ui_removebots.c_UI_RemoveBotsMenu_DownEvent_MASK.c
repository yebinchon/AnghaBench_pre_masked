
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ baseBotNum; scalar_t__ numBots; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_1( void* VAR_2, int VAR_3 ) {
 if (VAR_3 != VAR_0) {
  return;
 }

 if( VAR_1.baseBotNum + 7 < VAR_1.numBots ) {
  VAR_1.baseBotNum++;
  FUNC_0();
 }
}
