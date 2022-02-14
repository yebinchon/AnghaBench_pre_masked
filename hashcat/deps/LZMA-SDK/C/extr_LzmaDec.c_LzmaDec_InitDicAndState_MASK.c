
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* remainLen; scalar_t__ checkDicSize; scalar_t__ processedPos; scalar_t__ tempBufSize; } ;
typedef TYPE_1__ CLzmaDec ;
typedef scalar_t__ BoolInt ;


 void* VAR_0 ;

void FUNC_0(CLzmaDec *VAR_1, BoolInt VAR_2, BoolInt VAR_3)
{
  VAR_1->remainLen = VAR_0 + 1;
  VAR_1->tempBufSize = 0;

  if (VAR_2)
  {
    VAR_1->processedPos = 0;
    VAR_1->checkDicSize = 0;
    VAR_1->remainLen = VAR_0 + 2;
  }
  if (VAR_3)
    VAR_1->remainLen = VAR_0 + 2;
}
