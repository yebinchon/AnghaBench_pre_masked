
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int numProcessedBlocks; } ;
struct TYPE_4__ {int hashBufPosLimit; int hashBufPos; scalar_t__* hashBuf; scalar_t__ hashNumAvail; TYPE_2__ hashSync; } ;
typedef TYPE_1__ CMatchFinderMt ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(CMatchFinderMt *VAR_2)
{
  FUNC_0(&VAR_2->hashSync);
  VAR_2->hashBufPosLimit = VAR_2->hashBufPos = ((VAR_2->hashSync.numProcessedBlocks - 1) & VAR_1) * VAR_0;
  VAR_2->hashBufPosLimit += VAR_2->hashBuf[VAR_2->hashBufPos++];
  VAR_2->hashNumAvail = VAR_2->hashBuf[VAR_2->hashBufPos++];
}
