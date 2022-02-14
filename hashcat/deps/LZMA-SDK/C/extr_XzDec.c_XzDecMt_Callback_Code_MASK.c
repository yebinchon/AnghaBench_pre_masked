
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UInt64 ;
struct TYPE_8__ {size_t outDataWritten; int headerParsedOk; } ;
struct TYPE_5__ {scalar_t__ ignoreErrors; } ;
struct TYPE_7__ {TYPE_1__ props; TYPE_2__* coders; } ;
struct TYPE_6__ {size_t inCodeSize; size_t outCodeSize; scalar_t__ inPreHeaderSize; scalar_t__ codeRes; size_t outPreSize; size_t inPreSize; TYPE_4__ dec; int status; int outBuf; } ;
typedef scalar_t__ SRes ;
typedef int ECoderStatus ;
typedef TYPE_2__ CXzDecMtThread ;
typedef TYPE_3__ CXzDecMt ;
typedef int Byte ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int *,size_t*,int const*,size_t*,int,int ,int *) ;

__attribute__((used)) static SRes FUNC_1(void *VAR_6, unsigned VAR_7,
    const Byte *VAR_8, size_t VAR_9, int VAR_10,

    UInt64 *VAR_11, UInt64 *VAR_12, int *VAR_13)
{
  CXzDecMt *VAR_14 = (CXzDecMt *)VAR_6;
  CXzDecMtThread *VAR_15 = &VAR_14->coders[VAR_7];

  *VAR_11 = VAR_15->inCodeSize;
  *VAR_12 = VAR_15->outCodeSize;
  *VAR_13 = VAR_5;

  if (VAR_15->inCodeSize < VAR_15->inPreHeaderSize)
  {
    UInt64 VAR_16 = VAR_15->inPreHeaderSize - VAR_15->inCodeSize;
    size_t VAR_17 = VAR_9;
    if (VAR_17 > VAR_16)
      VAR_17 = (size_t)VAR_16;
    VAR_8 += VAR_17;
    VAR_9 -= VAR_17;
    VAR_15->inCodeSize += VAR_17;
    if (VAR_15->inCodeSize < VAR_15->inPreHeaderSize)
    {
      *VAR_13 = VAR_1;
      return VAR_3;
    }
  }

  if (!VAR_15->dec.headerParsedOk)
    return VAR_3;
  if (!VAR_15->outBuf)
    return VAR_3;

  if (VAR_15->codeRes == VAR_3)
  {
    ECoderStatus VAR_18;
    SRes VAR_19;
    size_t VAR_20 = VAR_9;
    size_t VAR_21 = VAR_15->outPreSize - VAR_15->dec.outDataWritten;



    VAR_19 = FUNC_0(&VAR_15->dec,
        ((void*)0), &VAR_21,
        VAR_8, &VAR_20, VAR_10,

        VAR_0,
        &VAR_18);



    VAR_15->codeRes = VAR_19;
    VAR_15->status = VAR_18;
    VAR_15->inCodeSize += VAR_20;
    VAR_15->outCodeSize = VAR_15->dec.outDataWritten;
    *VAR_11 = VAR_15->inCodeSize;
    *VAR_12 = VAR_15->outCodeSize;

    if (VAR_19 == VAR_3)
    {
      if (VAR_20 == VAR_9)
        *VAR_13 = VAR_1;
      return VAR_3;
    }
  }

  if (VAR_14->props.ignoreErrors && VAR_15->codeRes != VAR_2)
  {
    *VAR_11 = VAR_15->inPreSize;
    *VAR_12 = VAR_15->outPreSize;
    return VAR_4;
  }
  return VAR_15->codeRes;
}
