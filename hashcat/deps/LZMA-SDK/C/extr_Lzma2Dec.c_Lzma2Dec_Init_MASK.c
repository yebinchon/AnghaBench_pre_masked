
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int needInitLevel; int decoder; scalar_t__ unpackSize; int isExtraMode; int state; } ;
typedef TYPE_1__ CLzma2Dec ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

void FUNC_1(CLzma2Dec *VAR_2)
{
  VAR_2->state = VAR_1;
  VAR_2->needInitLevel = 0xE0;
  VAR_2->isExtraMode = VAR_0;
  VAR_2->unpackSize = 0;


  FUNC_0(&VAR_2->decoder);
}
