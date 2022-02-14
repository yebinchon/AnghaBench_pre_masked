
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ UInt64 ;
struct TYPE_16__ {scalar_t__ blockSize; } ;
struct TYPE_15__ {int Read; } ;
struct TYPE_14__ {scalar_t__ limit; size_t processed; int finished; TYPE_4__ vt; int * realStream; } ;
struct TYPE_13__ {scalar_t__ expectedDataSize; scalar_t__* tempBufLzma; int allocBig; int alloc; TYPE_8__ props; } ;
struct TYPE_12__ {size_t srcPos; scalar_t__ enc; int propsAreSet; } ;
typedef int SRes ;
typedef scalar_t__ Int64 ;
typedef int ISeqOutStream ;
typedef int ISeqInStream ;
typedef int ICompressProgress ;
typedef TYPE_1__ CLzma2EncInt ;
typedef TYPE_2__ CLzma2Enc ;
typedef TYPE_3__ CLimitedSeqInStream ;
typedef scalar_t__ Byte ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__*,int) ;
 scalar_t__ FUNC_1 (int ,size_t) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*,scalar_t__*,size_t*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_8__*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,scalar_t__ const*,size_t,int ,int ,int ) ;
 int FUNC_9 (scalar_t__,TYPE_4__*,int ,int ,int ) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (int *,scalar_t__,scalar_t__) ;
 int FUNC_12 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static SRes FUNC_13(
    CLzma2Enc *VAR_10,
    CLzma2EncInt *VAR_11,
    ISeqOutStream *VAR_12,
    Byte *VAR_13, size_t *VAR_14,
    ISeqInStream *VAR_15,
    const Byte *VAR_16, size_t VAR_17,
    int VAR_18,
    ICompressProgress *VAR_19)
{
  UInt64 VAR_20 = 0;
  UInt64 VAR_21 = 0;
  size_t VAR_22 = 0;
  CLimitedSeqInStream VAR_23;

  if (VAR_13)
  {
    VAR_22 = *VAR_14;
    *VAR_14 = 0;
  }

  if (!VAR_11->enc)
  {
    VAR_11->propsAreSet = VAR_0;
    VAR_11->enc = FUNC_6(VAR_10->alloc);
    if (!VAR_11->enc)
      return VAR_6;
  }

  VAR_23.realStream = VAR_15;
  if (VAR_15)
  {
    VAR_23.vt.Read = VAR_4;
  }

  if (!VAR_13)
  {

    if (!VAR_10->tempBufLzma)
    {
      VAR_10->tempBufLzma = (Byte *)FUNC_1(VAR_10->alloc, VAR_1);
      if (!VAR_10->tempBufLzma)
        return VAR_6;
    }
  }

  FUNC_12(FUNC_5(VAR_11, &VAR_10->props));

  for (;;)
  {
    SRes VAR_24 = VAR_9;
    size_t VAR_25 = 0;

    FUNC_4(VAR_11);

    FUNC_2(&VAR_23);
    VAR_23.limit = VAR_10->props.blockSize;

    if (VAR_15)
    {
      UInt64 VAR_26 = (UInt64)(Int64)-1;

      if (VAR_10->expectedDataSize != (UInt64)(Int64)-1
          && VAR_10->expectedDataSize >= VAR_20)
        VAR_26 = VAR_10->expectedDataSize - VAR_20;
      if (VAR_10->props.blockSize != VAR_2
          && VAR_26 > VAR_10->props.blockSize)
        VAR_26 = (size_t)VAR_10->props.blockSize;

      FUNC_10(VAR_11->enc, VAR_26);

      FUNC_12(FUNC_9(VAR_11->enc,
          &VAR_23.vt,
          VAR_3,
          VAR_10->alloc,
          VAR_10->allocBig));
    }
    else
    {
      VAR_25 = VAR_17 - (size_t)VAR_20;
      if (VAR_10->props.blockSize != VAR_2
          && VAR_25 > VAR_10->props.blockSize)
        VAR_25 = (size_t)VAR_10->props.blockSize;



      FUNC_12(FUNC_8(VAR_11->enc,
          VAR_16 + (size_t)VAR_20, VAR_25,
          VAR_3,
          VAR_10->alloc,
          VAR_10->allocBig));
    }

    for (;;)
    {
      size_t VAR_27 = VAR_1;
      if (VAR_13)
        VAR_27 = VAR_22 - (size_t)VAR_21;

      VAR_24 = FUNC_3(VAR_11,
          VAR_13 ? VAR_13 + (size_t)VAR_21 : VAR_10->tempBufLzma, &VAR_27,
          VAR_13 ? ((void*)0) : VAR_12);

      if (VAR_24 != VAR_9)
        break;

      VAR_21 += VAR_27;
      if (VAR_13)
        *VAR_14 = (size_t)VAR_21;

      VAR_24 = FUNC_11(VAR_19, VAR_20 + VAR_11->srcPos, VAR_21);
      if (VAR_24 != VAR_9)
        break;






      if (VAR_27 == 0)
        break;
    }

    FUNC_7(VAR_11->enc);

    VAR_20 += VAR_11->srcPos;

    FUNC_12(VAR_24);

    if (VAR_11->srcPos != (VAR_15 ? VAR_23.processed : VAR_25))
      return VAR_5;

    if (VAR_15 ? VAR_23.finished : (VAR_20 == VAR_17))
    {
      if (VAR_18)
      {
        if (VAR_13)
        {
          size_t VAR_28 = *VAR_14;
          if (VAR_28 >= VAR_22)
            return VAR_7;
          VAR_13[VAR_28] = 0;
          *VAR_14 = VAR_28 + 1;
        }
        else
        {
          Byte VAR_29 = 0;
          if (FUNC_0(VAR_12, &VAR_29, 1) != 1)
            return VAR_8;
        }
      }
      return VAR_9;
    }
  }
}
