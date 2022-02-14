
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int cutValue; int cyclicBufferSize; int cyclicBufferPos; int buffer; int pos; int numHashBytes; int matchMaxLen; int son; int crc; int fixedHashSize; int hash; } ;
struct TYPE_7__ {int cutValue; int cyclicBufferSize; int cyclicBufferPos; int buffer; int pos; int numHashBytes; int matchMaxLen; int son; int crc; int fixedHashSize; int hash; scalar_t__ historySize; scalar_t__ lzPos; scalar_t__ btNumAvailBytes; int pointerToCurPos; scalar_t__ hashBufPosLimit; scalar_t__ hashBufPos; scalar_t__ btBufPosLimit; scalar_t__ btBufPos; TYPE_2__* MatchFinder; } ;
typedef TYPE_1__ CMatchFinderMt ;
typedef TYPE_2__ CMatchFinder ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(CMatchFinderMt *VAR_1)
{
  CMatchFinder *VAR_2 = VAR_1->MatchFinder;

  VAR_1->btBufPos =
  VAR_1->btBufPosLimit = 0;
  VAR_1->hashBufPos =
  VAR_1->hashBufPosLimit = 0;


  FUNC_1(VAR_2, VAR_0);
  FUNC_2(VAR_2);

  VAR_1->pointerToCurPos = FUNC_0(VAR_2);
  VAR_1->btNumAvailBytes = 0;
  VAR_1->lzPos = VAR_1->historySize + 1;

  VAR_1->hash = VAR_2->hash;
  VAR_1->fixedHashSize = VAR_2->fixedHashSize;
  VAR_1->crc = VAR_2->crc;

  VAR_1->son = VAR_2->son;
  VAR_1->matchMaxLen = VAR_2->matchMaxLen;
  VAR_1->numHashBytes = VAR_2->numHashBytes;
  VAR_1->pos = VAR_2->pos;
  VAR_1->buffer = VAR_2->buffer;
  VAR_1->cyclicBufferPos = VAR_2->cyclicBufferPos;
  VAR_1->cyclicBufferSize = VAR_2->cyclicBufferSize;
  VAR_1->cutValue = VAR_2->cutValue;
}
