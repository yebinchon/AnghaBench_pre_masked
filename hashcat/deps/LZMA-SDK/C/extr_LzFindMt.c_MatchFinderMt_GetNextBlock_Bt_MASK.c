
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UInt32 ;
struct TYPE_6__ {int numProcessedBlocks; } ;
struct TYPE_5__ {scalar_t__ lzPos; scalar_t__ btBufPos; scalar_t__* btBuf; scalar_t__ btNumAvailBytes; scalar_t__ btBufPosLimit; TYPE_2__ btSync; } ;
typedef TYPE_1__ CMatchFinderMt ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_2(CMatchFinderMt *VAR_3)
{
  UInt32 VAR_4;
  FUNC_1(&VAR_3->btSync);
  VAR_4 = ((VAR_3->btSync.numProcessedBlocks - 1) & VAR_1);
  VAR_3->btBufPosLimit = VAR_3->btBufPos = VAR_4 * VAR_0;
  VAR_3->btBufPosLimit += VAR_3->btBuf[VAR_3->btBufPos++];
  VAR_3->btNumAvailBytes = VAR_3->btBuf[VAR_3->btBufPos++];
  if (VAR_3->lzPos >= VAR_2 - VAR_0)
    FUNC_0(VAR_3);
}
