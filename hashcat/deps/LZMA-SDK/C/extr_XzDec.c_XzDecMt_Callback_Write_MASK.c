
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef size_t UInt64 ;
struct TYPE_18__ {size_t totalInSize; } ;
struct TYPE_12__ {scalar_t__ inProcessed; int readWasFinished; size_t crossStart; size_t crossEnd; size_t inBufSize; scalar_t__ readRes; size_t readProcessed; TYPE_9__ mtProgress; scalar_t__ progress; } ;
struct TYPE_15__ {scalar_t__ state; void* decodeToStreamSignature; int numTotalBlocks; int streamFlags; int numStartedStreams; void* decodeOnlyOneBlock; } ;
struct TYPE_13__ {scalar_t__ ignoreErrors; } ;
struct TYPE_17__ {scalar_t__ finishedDecoderIndex; scalar_t__ mainErrorCode; scalar_t__ writeRes; size_t outSize; size_t outProcessed; TYPE_11__ mtc; void* isBlockHeaderState_Write; void* isBlockHeaderState_Parse; scalar_t__ status; scalar_t__ codeRes; int inStream; void* parsing_Truncated; void* mainDecoderWasCalled; TYPE_3__ dec; TYPE_1__ props; int outStream; scalar_t__ outSize_Defined; TYPE_4__* coders; } ;
struct TYPE_14__ {int numTotalBlocks; int numStartedStreams; int headerParsedOk; } ;
struct TYPE_16__ {scalar_t__ inCodeSize; size_t outCodeSize; size_t outPreSize; scalar_t__ codeRes; scalar_t__ inPreSize; scalar_t__ blockPackTotal; scalar_t__ parseState; scalar_t__ parsing_Truncated; scalar_t__ status; int blockPackSize_for_Index; TYPE_2__ dec; int streamFlags; int * outBuf; } ;
typedef size_t SizeT ;
typedef scalar_t__ SRes ;
typedef scalar_t__ ECoderStatus ;
typedef TYPE_3__ CXzUnpacker ;
typedef TYPE_4__ CXzDecMtThread ;
typedef TYPE_5__ CXzDecMt ;
typedef int Byte ;
typedef void* BoolInt ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ FUNC_0 (int ,void*,size_t*) ;
 size_t FUNC_1 (int ,int *,size_t) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_2 (TYPE_11__*) ;
 scalar_t__ FUNC_3 (TYPE_9__*,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_9__*) ;
 int FUNC_5 (char*,size_t) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 void* VAR_12 ;
 size_t VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_7 (TYPE_3__*,int *,size_t*,int const*,size_t*,int,int ,scalar_t__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int ,size_t) ;
 int FUNC_10 (int *,int const*,size_t) ;
 int FUNC_11 (int *,int ,size_t) ;

__attribute__((used)) static SRes FUNC_12(void *VAR_15, unsigned VAR_16,
    BoolInt VAR_17,
    const Byte *VAR_18, size_t VAR_19,

    BoolInt *VAR_20,
    BoolInt *VAR_21)
{
  CXzDecMt *VAR_22 = (CXzDecMt *)VAR_15;
  const CXzDecMtThread *VAR_23 = &VAR_22->coders[VAR_16];



  *VAR_20 = VAR_3;
  *VAR_21 = VAR_12;

  if (!VAR_17)
    return VAR_10;

  if (!VAR_23->dec.headerParsedOk || !VAR_23->outBuf)
  {
    if (VAR_22->finishedDecoderIndex < 0)
      VAR_22->finishedDecoderIndex = VAR_16;
    return VAR_10;
  }

  if (VAR_22->finishedDecoderIndex >= 0)
    return VAR_10;

  VAR_22->mtc.inProcessed += VAR_23->inCodeSize;

  *VAR_21 = VAR_3;

  {
    SRes VAR_24;
    size_t VAR_25 = VAR_23->outCodeSize;
    Byte *VAR_26 = VAR_23->outBuf;



    if (!VAR_22->isBlockHeaderState_Write)
    {
      FUNC_8(&VAR_22->dec);
      VAR_22->dec.decodeOnlyOneBlock = VAR_3;
      VAR_22->dec.numStartedStreams = VAR_23->dec.numStartedStreams;
      VAR_22->dec.streamFlags = VAR_23->streamFlags;

      VAR_22->isBlockHeaderState_Write = VAR_12;
    }

    VAR_22->dec.numTotalBlocks = VAR_23->dec.numTotalBlocks;
    FUNC_9(&VAR_22->dec, VAR_23->blockPackSize_for_Index, VAR_23->outPreSize);

    if (VAR_23->outPreSize != VAR_25)
    {
      if (VAR_22->props.ignoreErrors)
      {
        FUNC_11(VAR_26 + VAR_25, 0, VAR_23->outPreSize - VAR_25);
        VAR_25 = VAR_23->outPreSize;
      }

      if (VAR_22->mainErrorCode == VAR_10)
      {
        if ((int)VAR_23->status == VAR_4)
          VAR_22->mainErrorCode = VAR_7;
        else
          VAR_22->mainErrorCode = VAR_6;
      }
    }

    if (VAR_22->writeRes != VAR_10)
      return VAR_22->writeRes;

    VAR_24 = VAR_10;
    {
      if (VAR_22->outSize_Defined)
      {
        const UInt64 VAR_27 = VAR_22->outSize - VAR_22->outProcessed;
        if (VAR_25 > VAR_27)
          VAR_25 = (SizeT)VAR_27;
      }

      for (;;)
      {
        size_t VAR_28 = VAR_25;
        size_t VAR_29;
        if (VAR_28 > VAR_13)
          VAR_28 = VAR_13;

        VAR_29 = FUNC_1(VAR_22->outStream, VAR_26, VAR_28);



        VAR_22->outProcessed += VAR_29;
        if (VAR_29 != VAR_28)
        {
          VAR_22->writeRes = VAR_9;
          VAR_24 = VAR_22->writeRes;
          break;
        }
        VAR_26 += VAR_28;
        VAR_25 -= VAR_28;

        if (VAR_25 == 0)
          break;
        VAR_24 = FUNC_3(&VAR_22->mtc.mtProgress, 0, 0);
        if (VAR_24 != VAR_10)
          break;
      }
    }

    if (VAR_23->codeRes != VAR_10)
      if (!VAR_22->props.ignoreErrors)
      {
        VAR_22->finishedDecoderIndex = VAR_16;
        return VAR_24;
      }

    FUNC_6(VAR_24);

    if (VAR_23->inPreSize != VAR_23->inCodeSize
        || VAR_23->blockPackTotal != VAR_23->inCodeSize)
    {
      VAR_22->finishedDecoderIndex = VAR_16;
      return VAR_10;
    }

    if (VAR_23->parseState != VAR_5)
    {
      *VAR_20 = VAR_12;
      return VAR_10;
    }
  }




  FUNC_5("Write MTDEC_PARSE_END", VAR_22->mtc.inProcessed);

  VAR_22->mtc.mtProgress.totalInSize = VAR_22->mtc.inProcessed;
  {
    CXzUnpacker *VAR_30 = &VAR_22->dec;

    FUNC_5("PostSingle", VAR_19);

    {
      size_t VAR_31 = VAR_19;
      ECoderStatus VAR_32;
      size_t VAR_33 = 0;
      SRes VAR_34;


      VAR_30->decodeToStreamSignature = VAR_12;

      VAR_22->mainDecoderWasCalled = VAR_12;

      if (VAR_23->parsing_Truncated)
      {
        VAR_22->parsing_Truncated = VAR_12;
        return VAR_10;
      }

      VAR_34 = FUNC_7(VAR_30,
          ((void*)0), &VAR_33,
          VAR_18, &VAR_31,
          VAR_22->mtc.readWasFinished,
          VAR_0,
          &VAR_32);

      VAR_22->status = VAR_32;
      VAR_22->codeRes = VAR_34;

      VAR_22->mtc.inProcessed += VAR_31;
      VAR_22->mtc.mtProgress.totalInSize = VAR_22->mtc.inProcessed;

      if (VAR_34 != VAR_10)
      {
        return VAR_11;

      }

      if (VAR_30->state == VAR_14)
      {
        *VAR_20 = VAR_12;
        VAR_22->isBlockHeaderState_Parse = VAR_3;
        VAR_22->isBlockHeaderState_Write = VAR_3;
        {
          Byte *VAR_35 = FUNC_2(&VAR_22->mtc);
          if (!VAR_35)
            return VAR_8;
          FUNC_10(VAR_35, VAR_18 + VAR_31, VAR_19 - VAR_31);
        }
        VAR_22->mtc.crossStart = 0;
        VAR_22->mtc.crossEnd = VAR_19 - VAR_31;
        return VAR_10;
      }

      if (VAR_32 != VAR_1)
      {
        return VAR_2;
      }

      if (VAR_22->mtc.readWasFinished)
      {
        return VAR_10;
      }
    }

    {
      size_t VAR_36;
      size_t VAR_37;
      const Byte *VAR_38;
      UInt64 VAR_39 = VAR_22->mtc.inProcessed;


      Byte *VAR_40 = FUNC_2(&VAR_22->mtc);
      if (!VAR_40)
        return VAR_8;

      VAR_36 = 0;
      VAR_37 = 0;


      VAR_38 = VAR_40;

      for (;;)
      {
        SizeT VAR_41;
        SizeT VAR_42;
        ECoderStatus VAR_43;
        SRes VAR_44;

        if (VAR_36 == VAR_37)
        {
          if (!VAR_22->mtc.readWasFinished)
          {
            VAR_36 = 0;
            VAR_37 = VAR_22->mtc.inBufSize;
            VAR_22->mtc.readRes = FUNC_0(VAR_22->inStream, (void *)VAR_38, &VAR_37);
            VAR_22->mtc.readProcessed += VAR_37;
            if (VAR_37 == 0 || VAR_22->mtc.readRes != VAR_10)
              VAR_22->mtc.readWasFinished = VAR_12;
          }
        }

        VAR_41 = VAR_37 - VAR_36;
        VAR_42 = 0;

        VAR_44 = FUNC_7(VAR_30,
            ((void*)0), &VAR_42,
            VAR_38 + VAR_36, &VAR_41,
            (VAR_41 == 0),
            VAR_0, &VAR_43);

        VAR_22->codeRes = VAR_44;
        VAR_22->status = VAR_43;
        VAR_36 += VAR_41;
        VAR_22->mtc.inProcessed += VAR_41;
        VAR_22->mtc.mtProgress.totalInSize = VAR_22->mtc.inProcessed;

        if (VAR_44 != VAR_10)
        {
          return VAR_11;

        }

        if (VAR_30->state == VAR_14)
        {
          *VAR_20 = VAR_12;
          VAR_22->mtc.crossStart = VAR_36;
          VAR_22->mtc.crossEnd = VAR_37;
          VAR_22->isBlockHeaderState_Parse = VAR_3;
          VAR_22->isBlockHeaderState_Write = VAR_3;
          return VAR_10;
        }

        if (VAR_43 != VAR_1)
          return VAR_2;

        if (VAR_22->mtc.progress)
        {
          UInt64 VAR_45 = VAR_22->mtc.inProcessed - VAR_39;
          if (VAR_45 >= (1 << 22))
          {
            FUNC_6(FUNC_4(&VAR_22->mtc.mtProgress));
            VAR_39 = VAR_22->mtc.inProcessed;
          }
        }
        if (VAR_22->mtc.readWasFinished)
          return VAR_10;
      }
    }
  }
}
