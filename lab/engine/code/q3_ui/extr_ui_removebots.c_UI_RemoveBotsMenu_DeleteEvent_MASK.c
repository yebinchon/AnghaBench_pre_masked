
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t baseBotNum; size_t selectedBotNum; int * botClientNums; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2( void* VAR_3, int VAR_4 ) {
 if (VAR_4 != VAR_1) {
  return;
 }

 FUNC_0( VAR_0, FUNC_1("clientkick %i\n", VAR_2.botClientNums[VAR_2.baseBotNum + VAR_2.selectedBotNum]) );
}
