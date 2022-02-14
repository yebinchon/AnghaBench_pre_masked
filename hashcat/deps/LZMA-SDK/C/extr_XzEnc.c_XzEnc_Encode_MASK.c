
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef scalar_t__ UInt64 ;
struct TYPE_18__ {int Progress; } ;
struct TYPE_17__ {scalar_t__ outOffset; scalar_t__ inOffset; TYPE_7__ vt; int * progress; } ;
struct TYPE_12__ {size_t blockSize; int expectedDataSize; int numThreadsMax; TYPE_4__* mtCallbackObject; TYPE_1__* mtCallback; scalar_t__ inDataSize; int * inData; int * inStream; int * progress; int allocBig; } ;
struct TYPE_14__ {scalar_t__ blockSize; scalar_t__ reduceSize; int numBlockThreads_Reduced; scalar_t__ forceWriteSizesInHeader; scalar_t__ checkId; int numBlockThreads_Max; } ;
struct TYPE_16__ {size_t outBufSize; int xzIndex; int alloc; int ** outBufs; int allocBig; int * lzmaf_Items; TYPE_10__ mtCoder; int expectedDataSize; int * outStream; TYPE_2__ xzProps; scalar_t__ checkType; scalar_t__ mtCoder_WasConstructed; } ;
struct TYPE_15__ {scalar_t__ totalSize; scalar_t__ unpackSize; scalar_t__ headerSize; } ;
struct TYPE_13__ {int Write; int Code; } ;
typedef int SRes ;
typedef scalar_t__ Int64 ;
typedef int ISeqOutStream ;
typedef int ISeqInStream ;
typedef TYPE_1__ IMtCoderCallback2 ;
typedef int ICompressProgress ;
typedef int CXzStreamFlags ;
typedef TYPE_2__ CXzProps ;
typedef scalar_t__ CXzEncHandle ;
typedef TYPE_3__ CXzEncBlockInfo ;
typedef TYPE_4__ CXzEnc ;
typedef TYPE_5__ CCompressProgress_XzEncOffset ;
typedef int Byte ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,size_t) ;
 int FUNC_1 (TYPE_10__*) ;
 int FUNC_2 (TYPE_10__*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *,int *,scalar_t__) ;
 size_t VAR_5 ;
 int FUNC_5 (scalar_t__) ;
 size_t FUNC_6 (size_t) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_11 (int *,int ,int *) ;
 int FUNC_12 (TYPE_4__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_13 (int *,int *,int *,int *,size_t,int *,int *,int ,TYPE_2__ const*,TYPE_7__*,int*,TYPE_3__*,int ,int ) ;
 int FUNC_14 (int ,int *) ;

SRes FUNC_15(CXzEncHandle VAR_10, ISeqOutStream *VAR_11, ISeqInStream *VAR_12, ICompressProgress *VAR_13)
{
  CXzEnc *VAR_14 = (CXzEnc *)VAR_10;

  const CXzProps *VAR_15 = &VAR_14->xzProps;

  FUNC_9(&VAR_14->xzIndex);
  {
    UInt64 VAR_16 = 1;
    UInt64 VAR_17 = VAR_15->blockSize;

    if (VAR_17 != VAR_7
        && VAR_15->reduceSize != (UInt64)(Int64)-1)
    {
      VAR_16 = VAR_15->reduceSize / VAR_17;
      if (VAR_16 * VAR_17 != VAR_15->reduceSize)
        VAR_16++;
    }
    else
      VAR_17 = (UInt64)1 << 62;

    FUNC_3(FUNC_10(&VAR_14->xzIndex, VAR_16, VAR_17, FUNC_5(VAR_17), VAR_14->alloc));
  }

  FUNC_3(FUNC_14((CXzStreamFlags)VAR_15->checkId, VAR_11));



  if (VAR_15->numBlockThreads_Reduced > 1)
  {
    IMtCoderCallback2 VAR_18;

    if (!VAR_14->mtCoder_WasConstructed)
    {
      VAR_14->mtCoder_WasConstructed = VAR_4;
      FUNC_2(&VAR_14->mtCoder);
    }

    VAR_18.Code = VAR_8;
    VAR_18.Write = VAR_9;

    VAR_14->checkType = VAR_15->checkId;
    VAR_14->xzProps = *VAR_15;

    VAR_14->outStream = VAR_11;

    VAR_14->mtCoder.allocBig = VAR_14->allocBig;
    VAR_14->mtCoder.progress = VAR_13;
    VAR_14->mtCoder.inStream = VAR_12;
    VAR_14->mtCoder.inData = ((void*)0);
    VAR_14->mtCoder.inDataSize = 0;
    VAR_14->mtCoder.mtCallback = &VAR_18;
    VAR_14->mtCoder.mtCallbackObject = VAR_14;

    if ( VAR_15->blockSize == VAR_7
        || VAR_15->blockSize == VAR_6)
      return VAR_1;

    VAR_14->mtCoder.blockSize = (size_t)VAR_15->blockSize;
    if (VAR_14->mtCoder.blockSize != VAR_15->blockSize)
      return VAR_3;

    {
      size_t VAR_19 = VAR_5 + FUNC_6(VAR_14->mtCoder.blockSize);
      if (VAR_19 < VAR_14->mtCoder.blockSize)
        return VAR_3;
      if (VAR_14->outBufSize != VAR_19)
        FUNC_12(VAR_14);
      VAR_14->outBufSize = VAR_19;
    }

    VAR_14->mtCoder.numThreadsMax = VAR_15->numBlockThreads_Max;
    VAR_14->mtCoder.expectedDataSize = VAR_14->expectedDataSize;

    FUNC_3(FUNC_1(&VAR_14->mtCoder));
  }
  else

  {
    int VAR_20;
    CCompressProgress_XzEncOffset VAR_21;
    Byte *VAR_22 = ((void*)0);
    size_t VAR_23 = 0;

    VAR_21 = VAR_0;
    VAR_21 = 0;
    VAR_21 = 0;
    VAR_21 = VAR_13;

    VAR_20 = 0;

    if (VAR_15->blockSize != VAR_7)
    {
      VAR_20 = (VAR_15->forceWriteSizesInHeader > 0);

      if (VAR_20)
      {
        size_t VAR_24;
        size_t VAR_25 = (size_t)VAR_15->blockSize;
        if (VAR_25 != VAR_15->blockSize)
          return VAR_3;
        VAR_25 = FUNC_6(VAR_25);
        if (VAR_25 < VAR_15->blockSize)
          return VAR_3;
        VAR_24 = VAR_5 + VAR_25;
        if (!VAR_14->outBufs[0] || VAR_24 != VAR_14->outBufSize)
        {
          FUNC_12(VAR_14);
          VAR_14->outBufs[0] = (Byte *)FUNC_0(VAR_14->alloc, VAR_24);
          if (!VAR_14->outBufs[0])
            return VAR_2;
          VAR_14->outBufSize = VAR_24;
        }
        VAR_22 = VAR_14->outBufs[0] + VAR_5;
        VAR_23 = VAR_25;
      }
    }

    for (;;)
    {
      CXzEncBlockInfo VAR_26;
      int VAR_27;
      VAR_26.headerSize = 0;

      FUNC_3(FUNC_13(
          &VAR_14->lzmaf_Items[0],

          VAR_20 ? ((void*)0) : VAR_11,
          VAR_20 ? VAR_14->outBufs[0] : ((void*)0),
          VAR_22, VAR_23,

          VAR_12,

          ((void*)0), 0,

          VAR_15,
          VAR_13 ? &VAR_21 : ((void*)0),
          &VAR_27,
          &VAR_26,
          VAR_14->alloc,
          VAR_14->allocBig));

      {
        UInt64 VAR_28 = VAR_26.totalSize + FUNC_7(VAR_26.totalSize);

        if (VAR_20)
        {
          FUNC_3(FUNC_4(VAR_11, VAR_14->outBufs[0], VAR_26.headerSize));
          FUNC_3(FUNC_4(VAR_11, VAR_22, (size_t)VAR_28 - VAR_26.headerSize));
        }

        FUNC_3(FUNC_8(&VAR_14->xzIndex, VAR_26.unpackSize, VAR_26.totalSize, VAR_14->alloc));

        VAR_21 += VAR_26.unpackSize;
        VAR_21 += VAR_28;
      }

      if (VAR_27)
        break;
    }
  }

  return FUNC_11(&VAR_14->xzIndex, (CXzStreamFlags)VAR_15->checkId, VAR_11);
}
