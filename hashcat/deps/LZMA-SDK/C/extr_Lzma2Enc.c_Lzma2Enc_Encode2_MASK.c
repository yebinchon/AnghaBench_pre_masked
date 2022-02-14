
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int propsAreSet; } ;
struct TYPE_12__ {size_t inDataSize; size_t blockSize; int expectedDataSize; int numThreadsMax; TYPE_3__* mtCallbackObject; TYPE_2__* mtCallback; int const* inData; int * inStream; int * progress; int allocBig; } ;
struct TYPE_9__ {int numBlockThreads_Reduced; size_t blockSize; int numBlockThreads_Max; } ;
struct TYPE_11__ {size_t outBuf_Rem; size_t outBufSize; TYPE_8__* coders; int * outBuf; TYPE_4__ mtCoder; int expectedDataSize; TYPE_1__ props; int allocBig; int * outStream; scalar_t__ mtCoder_WasConstructed; } ;
struct TYPE_10__ {int Write; int Code; } ;
typedef int SRes ;
typedef int ISeqOutStream ;
typedef int ISeqInStream ;
typedef TYPE_2__ IMtCoderCallback2 ;
typedef int ICompressProgress ;
typedef scalar_t__ CLzma2EncHandle ;
typedef TYPE_3__ CLzma2Enc ;
typedef int Byte ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_8__*,int *,int *,size_t*,int *,int const*,size_t,scalar_t__,int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

SRes FUNC_4(CLzma2EncHandle VAR_6,
    ISeqOutStream *VAR_7,
    Byte *VAR_8, size_t *VAR_9,
    ISeqInStream *VAR_10,
    const Byte *VAR_11, size_t VAR_12,
    ICompressProgress *VAR_13)
{
  CLzma2Enc *VAR_14 = (CLzma2Enc *)VAR_6;

  if (VAR_10 && VAR_11)
    return VAR_4;

  if (VAR_7 && VAR_8)
    return VAR_4;

  {
    unsigned VAR_15;
    for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++)
      VAR_14->coders[VAR_15].propsAreSet = VAR_0;
  }



  if (VAR_14->props.numBlockThreads_Reduced > 1)
  {
    IMtCoderCallback2 VAR_16;

    if (!VAR_14->mtCoder_WasConstructed)
    {
      VAR_14->mtCoder_WasConstructed = VAR_5;
      FUNC_3(&VAR_14->mtCoder);
    }

    VAR_16.Code = VAR_1;
    VAR_16.Write = VAR_2;

    VAR_14->outStream = VAR_7;
    VAR_14->outBuf = ((void*)0);
    VAR_14->outBuf_Rem = 0;
    if (!VAR_7)
    {
      VAR_14->outBuf = VAR_8;
      VAR_14->outBuf_Rem = *VAR_9;
      *VAR_9 = 0;
    }

    VAR_14->mtCoder.allocBig = VAR_14->allocBig;
    VAR_14->mtCoder.progress = VAR_13;
    VAR_14->mtCoder.inStream = VAR_10;
    VAR_14->mtCoder.inData = VAR_11;
    VAR_14->mtCoder.inDataSize = VAR_12;
    VAR_14->mtCoder.mtCallback = &VAR_16;
    VAR_14->mtCoder.mtCallbackObject = VAR_14;

    VAR_14->mtCoder.blockSize = (size_t)VAR_14->props.blockSize;
    if (VAR_14->mtCoder.blockSize != VAR_14->props.blockSize)
      return VAR_4;

    {
      size_t VAR_17 = VAR_14->mtCoder.blockSize + (VAR_14->mtCoder.blockSize >> 10) + 16;
      if (VAR_17 < VAR_14->mtCoder.blockSize)
        return VAR_4;
      if (VAR_14->outBufSize != VAR_17)
        FUNC_1(VAR_14);
      VAR_14->outBufSize = VAR_17;
    }

    VAR_14->mtCoder.numThreadsMax = VAR_14->props.numBlockThreads_Max;
    VAR_14->mtCoder.expectedDataSize = VAR_14->expectedDataSize;

    {
      SRes VAR_18 = FUNC_2(&VAR_14->mtCoder);
      if (!VAR_7)
        *VAR_9 = VAR_14->outBuf - VAR_8;
      return VAR_18;
    }
  }




  return FUNC_0(VAR_14,
      &VAR_14->coders[0],
      VAR_7, VAR_8, VAR_9,
      VAR_10, VAR_11, VAR_12,
      VAR_5,
      VAR_13);
}
