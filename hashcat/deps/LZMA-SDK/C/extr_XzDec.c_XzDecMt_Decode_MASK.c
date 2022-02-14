
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;


typedef scalar_t__ UInt64 ;
struct TYPE_19__ {scalar_t__ res; } ;
struct TYPE_17__ {int numThreadsMax; scalar_t__ inProcessed; scalar_t__ readRes; scalar_t__ readProcessed; void* needContinue; TYPE_2__ mtProgress; void* readWasFinished; int inBufSize; int * alloc; int * inStream; int * progress; TYPE_7__* mtCallbackObject; TYPE_3__* mtCallback; } ;
struct TYPE_23__ {int numThreads; int inBufSize_MT; } ;
struct TYPE_18__ {int vt; } ;
struct TYPE_24__ {int finishMode; scalar_t__ writeRes; scalar_t__ inProcessed; scalar_t__ readProcessed; scalar_t__ codeRes; scalar_t__ mainErrorCode; int finishedDecoderIndex; scalar_t__ readRes; int status; int dec; TYPE_15__ mtc; void* parsing_Truncated; void* mainDecoderWasCalled; TYPE_5__* coders; scalar_t__ outProcessed; void* readWasFinished; TYPE_6__ props; TYPE_1__ alignOffsetAlloc; void* mtc_WasConstructed; scalar_t__ numBlocks; scalar_t__ numTotalBlocks; scalar_t__ numStreams; scalar_t__ outProcessed_Parse; void* isBlockHeaderState_Write; void* isBlockHeaderState_Parse; scalar_t__ outSize; void* outSize_Defined; int * progress; int * outStream; int * inStream; } ;
struct TYPE_22__ {scalar_t__ codeRes; int status; int dec; } ;
struct TYPE_21__ {scalar_t__ InSize; scalar_t__ CombinedRes_Type; scalar_t__ CombinedRes; scalar_t__ ReadRes; scalar_t__ OutSize; scalar_t__ ProgressRes; } ;
struct TYPE_20__ {int Write; int Code; int PreCode; int Parse; } ;
typedef scalar_t__ SRes ;
typedef int ISeqOutStream ;
typedef int ISeqInStream ;
typedef TYPE_3__ IMtDecCallback ;
typedef int ICompressProgress ;
typedef int ECoderStatus ;
typedef int CXzUnpacker ;
typedef TYPE_4__ CXzStatInfo ;
typedef TYPE_5__ CXzDecMtThread ;
typedef TYPE_6__ CXzDecMtProps ;
typedef scalar_t__ CXzDecMtHandle ;
typedef TYPE_7__ CXzDecMt ;
typedef void* BoolInt ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_15__*) ;
 int FUNC_1 (TYPE_15__*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (TYPE_7__*,void*,TYPE_4__*) ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int *,int,scalar_t__,scalar_t__,scalar_t__,int ,void*,TYPE_4__*) ;
 int FUNC_7 (int *) ;

SRes FUNC_8(CXzDecMtHandle VAR_12,
    const CXzDecMtProps *VAR_13,
    const UInt64 *VAR_14, int VAR_15,
    ISeqOutStream *VAR_16,

    ISeqInStream *VAR_17,

    CXzStatInfo *VAR_18,
    int *VAR_19,
    ICompressProgress *VAR_20)
{
  CXzDecMt *VAR_21 = (CXzDecMt *)VAR_12;

  BoolInt VAR_22;


  FUNC_5(VAR_18);

  VAR_21->props = *VAR_13;

  VAR_21->inStream = VAR_17;
  VAR_21->outStream = VAR_16;
  VAR_21->progress = VAR_20;


  VAR_21->outSize = 0;
  VAR_21->outSize_Defined = VAR_2;
  if (VAR_14)
  {
    VAR_21->outSize_Defined = VAR_7;
    VAR_21->outSize = *VAR_14;
  }

  VAR_21->finishMode = VAR_15;



  VAR_21->writeRes = VAR_6;
  VAR_21->outProcessed = 0;
  VAR_21->inProcessed = 0;
  VAR_21->readProcessed = 0;
  VAR_21->readWasFinished = VAR_2;

  VAR_21->codeRes = 0;
  VAR_21->status = VAR_0;

  FUNC_7(&VAR_21->dec);

  *VAR_19 = VAR_2;
  VAR_21->isBlockHeaderState_Parse = VAR_2;
  VAR_21->isBlockHeaderState_Write = VAR_2;

  VAR_21->mainErrorCode = VAR_6;
  VAR_21->mainDecoderWasCalled = VAR_2;

  VAR_22 = VAR_2;

  if (VAR_21->props.numThreads > 1)
  {
    IMtDecCallback VAR_23;



    FUNC_4(VAR_21);

    VAR_21->outProcessed_Parse = 0;
    VAR_21->parsing_Truncated = VAR_2;

    VAR_21->numStreams = 0;
    VAR_21->numTotalBlocks = 0;
    VAR_21->numBlocks = 0;
    VAR_21->finishedDecoderIndex = -1;

    if (!VAR_21->mtc_WasConstructed)
    {
      VAR_21->mtc_WasConstructed = VAR_7;
      FUNC_1(&VAR_21->mtc);
    }

    VAR_21->mtc.mtCallback = &VAR_23;
    VAR_21->mtc.mtCallbackObject = VAR_21;

    VAR_21->mtc.progress = VAR_20;
    VAR_21->mtc.inStream = VAR_17;
    VAR_21->mtc.alloc = &VAR_21->alignOffsetAlloc.vt;


    VAR_21->mtc.inBufSize = VAR_21->props.inBufSize_MT;

    VAR_21->mtc.numThreadsMax = VAR_21->props.numThreads;

    *VAR_19 = VAR_7;

    VAR_23.Parse = VAR_9;
    VAR_23.PreCode = VAR_10;
    VAR_23.Code = VAR_8;
    VAR_23.Write = VAR_11;

    {
      BoolInt VAR_24;

      SRes VAR_25 = FUNC_0(&VAR_21->mtc);

      VAR_18->InSize = VAR_21->mtc.inProcessed;

      VAR_21->inProcessed = VAR_21->mtc.inProcessed;
      VAR_21->readRes = VAR_21->mtc.readRes;
      VAR_21->readWasFinished = VAR_21->mtc.readWasFinished;
      VAR_21->readProcessed = VAR_21->mtc.readProcessed;

      VAR_22 = VAR_7;
      VAR_24 = VAR_2;

      if (VAR_25 == VAR_6)
      {
        if (VAR_21->mtc.mtProgress.res != VAR_6)
        {
          VAR_25 = VAR_21->mtc.mtProgress.res;
          VAR_18->ProgressRes = VAR_25;
          VAR_18->CombinedRes_Type = VAR_3;
        }
        else
          VAR_24 = VAR_21->mtc.needContinue;
      }

      if (!VAR_24)
      {
        SRes VAR_26;
        BoolInt VAR_27 = VAR_2;
        ECoderStatus VAR_28;
        CXzUnpacker *VAR_29;

        VAR_18->OutSize = VAR_21->outProcessed;

        if (VAR_21->finishedDecoderIndex >= 0)
        {
          CXzDecMtThread *VAR_30 = &VAR_21->coders[(unsigned)VAR_21->finishedDecoderIndex];
          VAR_26 = VAR_30->codeRes;
          VAR_29 = &VAR_30->dec;
          VAR_28 = VAR_30->status;
        }
        else if (VAR_21->mainDecoderWasCalled)
        {
          VAR_26 = VAR_21->codeRes;
          VAR_29 = &VAR_21->dec;
          VAR_28 = VAR_21->status;
          VAR_27 = VAR_21->parsing_Truncated;
        }
        else
          return VAR_1;

        FUNC_6(VAR_29, VAR_21->finishMode,
            VAR_21->mtc.readProcessed, VAR_21->mtc.inProcessed,
            VAR_26, VAR_28,
            VAR_27,
            VAR_18);

        if (VAR_25 == VAR_6)
        {
          if (VAR_21->writeRes != VAR_6)
          {
            VAR_25 = VAR_21->writeRes;
            VAR_18->CombinedRes_Type = VAR_5;
          }
          else if (VAR_21->mtc.readRes != VAR_6 && VAR_21->mtc.inProcessed == VAR_21->mtc.readProcessed)
          {
            VAR_25 = VAR_21->mtc.readRes;
            VAR_18->ReadRes = VAR_25;
            VAR_18->CombinedRes_Type = VAR_4;
          }
          else if (VAR_21->mainErrorCode != VAR_6)
          {
            VAR_25 = VAR_21->mainErrorCode;
          }
        }

        VAR_18->CombinedRes = VAR_25;
        if (VAR_18->CombinedRes_Type == VAR_6)
          VAR_18->CombinedRes_Type = VAR_25;
        return VAR_25;
      }

      FUNC_2("----- decoding ST -----");
    }
  }




  *VAR_19 = VAR_2;

  {
    SRes VAR_31 = FUNC_3(VAR_21

        , VAR_22

        , VAR_18
        );

    FUNC_6(&VAR_21->dec,
        VAR_21->finishMode,
        VAR_21->readProcessed, VAR_21->inProcessed,
        VAR_21->codeRes, VAR_21->status,
        VAR_2,
        VAR_18);

    if (VAR_31 == VAR_6)
    {
      if (VAR_21->readRes != VAR_6 && VAR_21->inProcessed == VAR_21->readProcessed)
      {
        VAR_31 = VAR_21->readRes;
        VAR_18->ReadRes = VAR_31;
        VAR_18->CombinedRes_Type = VAR_4;
      }

      else if (VAR_21->mainErrorCode != VAR_6)
        VAR_31 = VAR_21->mainErrorCode;

    }

    VAR_18->CombinedRes = VAR_31;
    if (VAR_18->CombinedRes_Type == VAR_6)
      VAR_18->CombinedRes_Type = VAR_31;
    return VAR_31;
  }
}
