
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int block; int decoder; int headerParsedOk; } ;
struct TYPE_5__ {scalar_t__ ignoreErrors; } ;
struct TYPE_7__ {size_t unpackBlockMaxSize; TYPE_1__ props; int allocMid; TYPE_2__* coders; } ;
struct TYPE_6__ {size_t outBufSize; size_t outPreSize; scalar_t__ codeRes; int * outBuf; TYPE_4__ dec; } ;
typedef scalar_t__ SRes ;
typedef TYPE_2__ CXzDecMtThread ;
typedef TYPE_3__ CXzDecMt ;
typedef int Byte ;


 scalar_t__ FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int *,int *,int *,size_t) ;
 int FUNC_3 (TYPE_4__*,int *,size_t) ;

__attribute__((used)) static SRes FUNC_4(void *VAR_3, unsigned VAR_4)
{
  CXzDecMt *VAR_5 = (CXzDecMt *)VAR_3;
  CXzDecMtThread *VAR_6 = &VAR_5->coders[VAR_4];
  Byte *VAR_7;

  if (!VAR_6->dec.headerParsedOk)
    return VAR_1;

  VAR_7 = VAR_6->outBuf;

  if (!VAR_7 || VAR_6->outBufSize < VAR_6->outPreSize)
  {
    if (VAR_7)
    {
      FUNC_1(VAR_5->allocMid, VAR_7);
      VAR_6->outBuf = ((void*)0);
      VAR_6->outBufSize = 0;
    }
    {
      size_t VAR_8 = VAR_6->outPreSize;
      if (VAR_8 == 0)
        VAR_8 = 1;
      VAR_7 = (Byte *)FUNC_0(VAR_5->allocMid, VAR_8);
    }
    if (!VAR_7)
      return VAR_0;
    VAR_6->outBuf = VAR_7;
    VAR_6->outBufSize = VAR_6->outPreSize;

    if (VAR_6->outBufSize > VAR_5->unpackBlockMaxSize)
      VAR_5->unpackBlockMaxSize = VAR_6->outBufSize;
  }



  FUNC_3(&VAR_6->dec, VAR_6->outBuf, VAR_6->outBufSize);

  {
    SRes VAR_9 = FUNC_2(&VAR_6->dec.decoder, &VAR_6->dec.block, VAR_6->outBuf, VAR_6->outBufSize);

    VAR_6->codeRes = VAR_9;
    if (VAR_9 != VAR_1)
    {

      if (VAR_5->props.ignoreErrors && VAR_9 != VAR_0)
        return VAR_2;
      return VAR_9;
    }
  }

  return VAR_1;
}
