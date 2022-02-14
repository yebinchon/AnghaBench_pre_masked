
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef size_t UInt64 ;
typedef size_t UInt32 ;
struct TYPE_20__ {int unpackSize; size_t packSize; } ;
struct TYPE_22__ {size_t blockHeaderSize; scalar_t__ numBlocks; int numTotalBlocks; int numStartedStreams; int streamFlags; TYPE_6__ block; void* headerParsedOk; void* parseMode; } ;
struct TYPE_21__ {size_t srcSize; size_t outPos; scalar_t__* src; void* state; scalar_t__ srcFinished; void* canCreateNewThread; scalar_t__ startCall; } ;
struct TYPE_16__ {int memUseMax; } ;
struct TYPE_15__ {int numStartedThreads; } ;
struct TYPE_17__ {int vt; } ;
struct TYPE_19__ {size_t unpackBlockMaxSize; size_t outSize; size_t outProcessed_Parse; scalar_t__ numBlocks; int numTotalBlocks; int numStreams; scalar_t__ outSize_Defined; TYPE_2__ props; TYPE_1__ mtc; int streamFlags; void* isBlockHeaderState_Parse; TYPE_3__ alignOffsetAlloc; TYPE_4__* coders; } ;
struct TYPE_18__ {size_t outPreSize; size_t inPreSize; size_t inPreHeaderSize; size_t blockPackSize_for_Index; size_t blockPackTotal; TYPE_8__ dec; void* parseState; void* parsing_Truncated; void* skipMode; int streamFlags; int status; scalar_t__ codeRes; void* atBlockHeader; void* dec_created; scalar_t__ numBlocks; int numTotalBlocks; int numStreams; scalar_t__ outCodeSize; scalar_t__ inCodeSize; } ;
typedef scalar_t__ SRes ;
typedef int ECoderStatus ;
typedef TYPE_4__ CXzDecMtThread ;
typedef TYPE_5__ CXzDecMt ;
typedef TYPE_6__ CXzBlock ;
typedef TYPE_7__ CMtDecCallbackInfo ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (char*,size_t) ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 scalar_t__ FUNC_1 (TYPE_6__ const*) ;
 scalar_t__ FUNC_2 (TYPE_6__ const*) ;
 size_t FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_8__*,int *,size_t*,scalar_t__*,size_t*,scalar_t__,int ,int *) ;
 int FUNC_5 (TYPE_8__*,int *) ;
 int FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (TYPE_8__*) ;

__attribute__((used)) static void FUNC_8(void *VAR_9, unsigned VAR_10, CMtDecCallbackInfo *VAR_11)
{
  CXzDecMt *VAR_12 = (CXzDecMt *)VAR_9;
  CXzDecMtThread *VAR_13 = &VAR_12->coders[VAR_10];
  size_t VAR_14 = VAR_11->srcSize;

  VAR_11->srcSize = 0;
  VAR_11->outPos = 0;
  VAR_11->state = VAR_3;

  VAR_11->canCreateNewThread = VAR_8;

  if (VAR_11->startCall)
  {
    VAR_13->outPreSize = 0;
    VAR_13->inPreSize = 0;
    VAR_13->inPreHeaderSize = 0;
    VAR_13->parseState = VAR_3;
    VAR_13->parsing_Truncated = VAR_2;
    VAR_13->skipMode = VAR_2;
    VAR_13->codeRes = VAR_7;
    VAR_13->status = VAR_1;
    VAR_13->inCodeSize = 0;
    VAR_13->outCodeSize = 0;

    VAR_13->numStreams = VAR_12->numStreams;
    VAR_13->numTotalBlocks = VAR_12->numTotalBlocks;
    VAR_13->numBlocks = VAR_12->numBlocks;

    if (!VAR_13->dec_created)
    {
      FUNC_5(&VAR_13->dec, &VAR_12->alignOffsetAlloc.vt);
      VAR_13->dec_created = VAR_8;
    }

    FUNC_6(&VAR_13->dec);

    if (VAR_12->isBlockHeaderState_Parse)
    {
      VAR_13->dec.streamFlags = VAR_12->streamFlags;
      VAR_13->atBlockHeader = VAR_8;
      FUNC_7(&VAR_13->dec);
    }
    else
    {
      VAR_13->atBlockHeader = VAR_2;
      VAR_12->isBlockHeaderState_Parse = VAR_8;
    }

    VAR_13->dec.numStartedStreams = VAR_12->numStreams;
    VAR_13->dec.numTotalBlocks = VAR_12->numTotalBlocks;
    VAR_13->dec.numBlocks = VAR_12->numBlocks;
  }

  while (!VAR_13->skipMode)
  {
    ECoderStatus VAR_15;
    SRes VAR_16;
    size_t VAR_17 = VAR_14;
    size_t VAR_18 = (size_t)0 - 1;

    VAR_13->dec.parseMode = VAR_8;
    VAR_13->dec.headerParsedOk = VAR_2;

    FUNC_0("Parse", VAR_17);

    VAR_16 = FUNC_4(&VAR_13->dec,
        ((void*)0), &VAR_18,
        VAR_11->src, &VAR_17, VAR_11->srcFinished,
        VAR_0, &VAR_15);



    VAR_13->codeRes = VAR_16;
    VAR_13->status = VAR_15;
    VAR_11->srcSize += VAR_17;
    VAR_14 -= VAR_17;
    VAR_13->inPreHeaderSize += VAR_17;
    VAR_13->inPreSize = VAR_13->inPreHeaderSize;

    if (VAR_16 != VAR_7)
    {
      VAR_11->state =
      VAR_13->parseState = VAR_4;





      return;
    }

    if (VAR_13->dec.headerParsedOk)
    {
      const CXzBlock *VAR_19 = &VAR_13->dec.block;
      if (FUNC_2(VAR_19)

          && FUNC_1(VAR_19))
      {
        {
          if (VAR_19->unpackSize * 2 * VAR_12->mtc.numStartedThreads > VAR_12->props.memUseMax)
          {
            VAR_11->state = VAR_6;
            return;
          }
        }
        {
        UInt64 VAR_20 = VAR_19->packSize;
        UInt64 VAR_21 = VAR_20 + ((0 - (unsigned)VAR_20) & 3);
        UInt32 VAR_22 = FUNC_3(VAR_13->dec.streamFlags);
        UInt64 VAR_23 = VAR_13->inPreSize + VAR_21 + VAR_22;


        {
          VAR_13->blockPackSize_for_Index = (size_t)(VAR_13->dec.blockHeaderSize + VAR_20 + VAR_22);
          VAR_13->blockPackTotal = (size_t)VAR_23;
          VAR_13->outPreSize = (size_t)VAR_19->unpackSize;
          VAR_13->streamFlags = VAR_13->dec.streamFlags;
          VAR_12->streamFlags = VAR_13->dec.streamFlags;
          VAR_13->skipMode = VAR_8;
          break;
        }
        }
      }
    }
    else

    {
      if (!VAR_11->srcFinished)
        return;
      VAR_11->state =
      VAR_13->parseState = VAR_4;
      return;
    }
    VAR_11->state = VAR_6;
    return;
  }


  {
    UInt64 VAR_24 = VAR_13->blockPackTotal - VAR_13->inPreSize;
    size_t VAR_25 = VAR_14;
    if (VAR_25 > VAR_24)
      VAR_25 = (size_t)VAR_24;
    VAR_11->srcSize += VAR_25;
    VAR_13->inPreSize += VAR_25;
    VAR_14 -= VAR_25;

    if (VAR_13->inPreSize == VAR_13->blockPackTotal)
    {
      if (VAR_14 == 0)
      {
        if (!VAR_11->srcFinished)
          return;
        VAR_11->state = VAR_4;
      }
      else if ((VAR_11->src)[VAR_11->srcSize] == 0)
        VAR_11->state = VAR_4;
      else
      {
        VAR_11->state = VAR_5;

        {
          size_t VAR_26 = VAR_12->unpackBlockMaxSize;
          if (VAR_26 < VAR_13->outPreSize)
            VAR_26 = VAR_13->outPreSize;
          {
            UInt64 VAR_27 = (UInt64)VAR_26 * (VAR_12->mtc.numStartedThreads + 1) * 2;
            if (VAR_12->props.memUseMax < VAR_27)
              VAR_11->canCreateNewThread = VAR_2;
          }
        }

        if (VAR_12->outSize_Defined)
        {

          const UInt64 VAR_28 = VAR_12->outSize - VAR_12->outProcessed_Parse;
          if (VAR_28 < VAR_13->outPreSize)
          {
            VAR_13->parsing_Truncated = VAR_8;
            VAR_11->state = VAR_4;
          }
          VAR_12->outProcessed_Parse += VAR_13->outPreSize;
        }
      }
    }
    else if (VAR_11->srcFinished)
      VAR_11->state = VAR_4;
    else
      return;

    VAR_13->parseState = VAR_11->state;
    VAR_11->outPos = VAR_13->outPreSize;

    VAR_12->numStreams = VAR_13->dec.numStartedStreams;
    VAR_12->numTotalBlocks = VAR_13->dec.numTotalBlocks;
    VAR_12->numBlocks = VAR_13->dec.numBlocks + 1;
    return;
  }
}
