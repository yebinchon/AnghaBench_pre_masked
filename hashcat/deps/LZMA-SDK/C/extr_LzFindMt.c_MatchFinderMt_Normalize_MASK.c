
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ historySize; scalar_t__ lzPos; int fixedHashSize; int hash; } ;
typedef TYPE_1__ CMatchFinderMt ;


 int FUNC_0 (scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_1(CMatchFinderMt *VAR_0)
{
  FUNC_0(VAR_0->lzPos - VAR_0->historySize - 1, VAR_0->hash, VAR_0->fixedHashSize);
  VAR_0->lzPos = VAR_0->historySize + 1;
}
