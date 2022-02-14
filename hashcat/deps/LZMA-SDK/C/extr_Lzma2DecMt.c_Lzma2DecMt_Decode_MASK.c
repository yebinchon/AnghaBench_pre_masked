
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ UInt64 ;
struct TYPE_12__ {scalar_t__ res; } ;
struct TYPE_16__ {int numThreadsMax; scalar_t__ readRes; scalar_t__ inProcessed; void* readWasFinished; void* needContinue; TYPE_2__ mtProgress; int inBufSize; TYPE_5__* mtCallbackObject; TYPE_3__* mtCallback; int * alloc; int * inStream; int * progress; } ;
struct TYPE_14__ {int numThreads; int inBufSize_MT; } ;
struct TYPE_11__ {int vt; } ;
struct TYPE_15__ {int prop; int finishMode; scalar_t__ readRes; scalar_t__ inProcessed; TYPE_6__ mtc; void* readWasFinished; TYPE_4__ props; TYPE_1__ alignOffsetAlloc; void* mtc_WasConstructed; scalar_t__ outProcessed_Parse; scalar_t__ outProcessed; scalar_t__ outSize; void* outSize_Defined; int * progress; int * outStream; int * inStream; } ;
struct TYPE_13__ {int Write; int Code; int PreCode; int Parse; } ;
typedef scalar_t__ SRes ;
typedef int ISeqOutStream ;
typedef int ISeqInStream ;
typedef TYPE_3__ IMtDecCallback ;
typedef int ICompressProgress ;
typedef TYPE_4__ CLzma2DecMtProps ;
typedef scalar_t__ CLzma2DecMtHandle ;
typedef TYPE_5__ CLzma2DecMt ;
typedef int Byte ;
typedef void* BoolInt ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_5__*,void*) ;
 scalar_t__ FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;

SRes FUNC_5(CLzma2DecMtHandle VAR_8,
    Byte VAR_9,
    const CLzma2DecMtProps *VAR_10,
    ISeqOutStream *VAR_11, const UInt64 *VAR_12, int VAR_13,

    ISeqInStream *VAR_14,

    UInt64 *VAR_15,

    int *VAR_16,
    ICompressProgress *VAR_17)
{
  CLzma2DecMt *VAR_18 = (CLzma2DecMt *)VAR_8;

  BoolInt VAR_19;


  *VAR_15 = 0;

  if (VAR_9 > 40)
    return VAR_5;

  VAR_18->prop = VAR_9;
  VAR_18->props = *VAR_10;

  VAR_18->inStream = VAR_14;
  VAR_18->outStream = VAR_11;
  VAR_18->progress = VAR_17;

  VAR_18->outSize = 0;
  VAR_18->outSize_Defined = VAR_0;
  if (VAR_12)
  {
    VAR_18->outSize_Defined = VAR_7;
    VAR_18->outSize = *VAR_12;
  }
  VAR_18->finishMode = VAR_13;

  VAR_18->outProcessed = 0;
  VAR_18->inProcessed = 0;

  VAR_18->readWasFinished = VAR_0;

  *VAR_16 = VAR_0;




  VAR_19 = VAR_0;
  if (VAR_18->props.numThreads > 1)
  {
    IMtDecCallback VAR_20;

    FUNC_0(VAR_18);

    VAR_18->outProcessed_Parse = 0;

    if (!VAR_18->mtc_WasConstructed)
    {
      VAR_18->mtc_WasConstructed = VAR_7;
      FUNC_3(&VAR_18->mtc);
    }

    VAR_18->mtc.progress = VAR_17;
    VAR_18->mtc.inStream = VAR_14;
    VAR_18->mtc.alloc = &VAR_18->alignOffsetAlloc.vt;



    VAR_18->mtc.mtCallback = &VAR_20;
    VAR_18->mtc.mtCallbackObject = VAR_18;

    VAR_18->mtc.inBufSize = VAR_18->props.inBufSize_MT;

    VAR_18->mtc.numThreadsMax = VAR_18->props.numThreads;

    *VAR_16 = VAR_7;

    VAR_20.Parse = VAR_2;
    VAR_20.PreCode = VAR_3;
    VAR_20.Code = VAR_1;
    VAR_20.Write = VAR_4;

    {
      BoolInt VAR_21 = VAR_0;

      SRes VAR_22 = FUNC_2(&VAR_18->mtc);






      *VAR_15 = VAR_18->mtc.inProcessed;

      VAR_21 = VAR_0;

      if (VAR_22 == VAR_6)
      {
        if (VAR_18->mtc.mtProgress.res != VAR_6)
          VAR_22 = VAR_18->mtc.mtProgress.res;
        else
          VAR_21 = VAR_18->mtc.needContinue;
      }

      if (!VAR_21)
      {
        if (VAR_22 == VAR_6)
          return VAR_18->mtc.readRes;
        return VAR_22;
      }

      VAR_19 = VAR_7;
      VAR_18->readRes = VAR_18->mtc.readRes;
      VAR_18->readWasFinished = VAR_18->mtc.readWasFinished;
      VAR_18->inProcessed = VAR_18->mtc.inProcessed;

      FUNC_4("----- decoding ST -----");
    }
  }




  *VAR_16 = VAR_0;

  {
    SRes VAR_23 = FUNC_1(VAR_18

        , VAR_19

        );

    *VAR_15 = VAR_18->inProcessed;


    if (VAR_23 == VAR_6 && VAR_18->readRes != VAR_6)
      VAR_23 = VAR_18->readRes;
    return VAR_23;
  }
}
