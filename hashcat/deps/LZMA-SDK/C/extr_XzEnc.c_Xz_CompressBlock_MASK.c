
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_26__ ;
typedef struct TYPE_30__ TYPE_23__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_19__ ;
typedef struct TYPE_27__ TYPE_13__ ;


typedef scalar_t__ UInt64 ;
struct TYPE_31__ {int Read; } ;
struct TYPE_28__ {TYPE_26__ p; TYPE_26__* realStream; } ;
struct TYPE_30__ {TYPE_26__ vt; TYPE_26__* inStream; } ;
struct TYPE_38__ {TYPE_19__ filter; TYPE_23__ sb; int lzma2; } ;
struct TYPE_37__ {size_t limit; size_t processed; int realStreamFinished; TYPE_26__ vt; int check; scalar_t__ const* data; int * realStream; } ;
struct TYPE_27__ {int Write; } ;
struct TYPE_36__ {size_t outBufLimit; scalar_t__ processed; TYPE_13__ vt; scalar_t__* outBuf; int * realStream; } ;
struct TYPE_35__ {size_t unpackSize; scalar_t__ packSize; TYPE_3__* filters; } ;
struct TYPE_34__ {size_t unpackSize; size_t headerSize; scalar_t__ totalSize; } ;
struct TYPE_33__ {scalar_t__ id; int propsSize; scalar_t__* props; } ;
struct TYPE_32__ {scalar_t__ id; int delta; int ip; scalar_t__ ipDefined; } ;
struct TYPE_29__ {size_t blockSize; scalar_t__ checkId; int lzma2Props; TYPE_2__ filterProps; } ;
typedef int SRes ;
typedef int ISzAllocPtr ;
typedef int ISeqOutStream ;
typedef int ISeqInStream ;
typedef int ICompressProgress ;
typedef int CXzStreamFlags ;
typedef TYPE_1__ CXzProps ;
typedef TYPE_2__ CXzFilterProps ;
typedef TYPE_3__ CXzFilter ;
typedef TYPE_4__ CXzEncBlockInfo ;
typedef TYPE_5__ CXzBlock ;
typedef TYPE_6__ CSeqSizeOutStream ;
typedef TYPE_7__ CSeqCheckInStream ;
typedef TYPE_8__ CLzma2WithFilters ;
typedef scalar_t__ Byte ;
typedef int BoolInt ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_13__*,scalar_t__*,size_t*,TYPE_26__*,scalar_t__ const*,size_t,int *) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_8__*,int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (TYPE_23__*) ;
 int FUNC_6 (TYPE_7__*,scalar_t__*) ;
 int FUNC_7 (TYPE_7__*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_8 (TYPE_19__*,TYPE_3__*,int ) ;
 int VAR_4 ;
 int FUNC_9 (scalar_t__*,int ) ;
 int FUNC_10 (TYPE_13__*,scalar_t__*,scalar_t__) ;
 size_t VAR_5 ;
 unsigned int FUNC_11 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (TYPE_5__*,int) ;
 int FUNC_16 (TYPE_5__*,TYPE_13__*) ;
 int FUNC_17 (int *,scalar_t__ const*,size_t) ;
 scalar_t__ FUNC_18 (int ) ;

__attribute__((used)) static SRes FUNC_19(
    CLzma2WithFilters *VAR_9,

    ISeqOutStream *VAR_10,
    Byte *VAR_11,
    Byte *VAR_12, size_t VAR_13,

    ISeqInStream *VAR_14,

    const Byte *VAR_15,
    size_t VAR_16,

    const CXzProps *VAR_17,
    ICompressProgress *VAR_18,
    int *VAR_19,
    CXzEncBlockInfo *VAR_20,
    ISzAllocPtr VAR_21,
    ISzAllocPtr VAR_22)
{
  CSeqCheckInStream VAR_23;
  CSeqSizeOutStream VAR_24;
  CXzBlock VAR_25;
  unsigned VAR_26 = 0;
  CXzFilter *VAR_27 = ((void*)0);
  const CXzFilterProps *VAR_28 = &VAR_17->filterProps;
  if (VAR_28->id == 0)
    VAR_28 = ((void*)0);

  *VAR_19 = VAR_0;

  FUNC_4(FUNC_3(VAR_9, VAR_21, VAR_22));

  FUNC_4(FUNC_1(VAR_9->lzma2, &VAR_17->lzma2Props));

  FUNC_12(&VAR_25);
  FUNC_15(&VAR_25, 1 + (VAR_28 ? 1 : 0));

  if (VAR_28)
  {
    VAR_27 = &VAR_25.filters[VAR_26++];
    VAR_27->id = VAR_28->id;
    VAR_27->propsSize = 0;

    if (VAR_28->id == VAR_6)
    {
      VAR_27->props[0] = (Byte)(VAR_28->delta - 1);
      VAR_27->propsSize = 1;
    }
    else if (VAR_28->ipDefined)
    {
      FUNC_9(VAR_27->props, VAR_28->ip);
      VAR_27->propsSize = 4;
    }
  }

  {
    CXzFilter *VAR_29 = &VAR_25.filters[VAR_26++];
    VAR_29->id = VAR_7;
    VAR_29->propsSize = 1;
    VAR_29->props[0] = FUNC_2(VAR_9->lzma2);
  }

  VAR_24.vt.Write = VAR_4;
  VAR_24.realStream = VAR_10;
  VAR_24.outBuf = VAR_12;
  VAR_24.outBufLimit = VAR_13;
  VAR_24.processed = 0;
  if (VAR_10)
  {
    FUNC_4(FUNC_16(&VAR_25, &VAR_24.vt));
  }

  VAR_23.vt.Read = VAR_3;
  FUNC_7(&VAR_23, VAR_17->checkId);

  VAR_23.realStream = VAR_14;
  VAR_23.data = VAR_15;
  VAR_23.limit = VAR_17->blockSize;
  if (!VAR_14)
    VAR_23.limit = VAR_16;

  if (VAR_28)
  {
    {
      VAR_9->filter.realStream = &VAR_23.vt;
      FUNC_4(FUNC_8(&VAR_9->filter, VAR_27, VAR_21));
    }
  }

  {
    SRes VAR_30;
    Byte *VAR_31 = ((void*)0);
    size_t VAR_32 = 0;
    BoolInt VAR_33 = (VAR_28 || VAR_14);


    if (!VAR_33)
    {
      FUNC_17(&VAR_23.check, VAR_15, VAR_16);
      VAR_23.processed = VAR_16;
    }

    if (!VAR_10)
    {
      VAR_31 = VAR_24.outBuf;
      VAR_32 = VAR_24.outBufLimit;
    }

    VAR_30 = FUNC_0(VAR_9->lzma2,
        VAR_31 ? ((void*)0) : &VAR_24.vt,
        VAR_31,
        VAR_31 ? &VAR_32 : ((void*)0),

        VAR_33 ?
          (VAR_28 ?
            (



            &VAR_9->filter.p) :
            &VAR_23.vt) : ((void*)0),

        VAR_33 ? ((void*)0) : VAR_15,
        VAR_33 ? 0 : VAR_16,

        VAR_18);

    if (VAR_31)
      VAR_24.processed += VAR_32;

    FUNC_4(VAR_30);
    VAR_20->unpackSize = VAR_23.processed;
  }
  {
    Byte VAR_34[4 + 64];
    unsigned VAR_35 = FUNC_11(VAR_24.processed);
    UInt64 VAR_36 = VAR_24.processed;

    VAR_34[0] = 0;
    VAR_34[1] = 0;
    VAR_34[2] = 0;
    VAR_34[3] = 0;

    FUNC_6(&VAR_23, VAR_34 + 4);
    FUNC_4(FUNC_10(&VAR_24.vt, VAR_34 + (4 - VAR_35), VAR_35 + FUNC_18((CXzStreamFlags)VAR_17->checkId)));

    VAR_20->totalSize = VAR_24.processed - VAR_35;

    if (!VAR_10)
    {
      VAR_24.outBuf = VAR_11;
      VAR_24.outBufLimit = VAR_5;
      VAR_24.processed = 0;

      VAR_25.unpackSize = VAR_20->unpackSize;
      FUNC_14(&VAR_25);

      VAR_25.packSize = VAR_36;
      FUNC_13(&VAR_25);

      FUNC_4(FUNC_16(&VAR_25, &VAR_24.vt));

      VAR_20->headerSize = (size_t)VAR_24.processed;
      VAR_20->totalSize += VAR_24.processed;
    }
  }

  if (VAR_14)
    *VAR_19 = VAR_23.realStreamFinished;
  else
  {
    *VAR_19 = VAR_0;
    if (VAR_23.processed != VAR_16)
      return VAR_1;
  }

  return VAR_2;
}
