
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ dicBufSize; int * dic; } ;
struct TYPE_10__ {TYPE_1__ decoder; } ;
struct TYPE_9__ {int prop; int allocMid; TYPE_3__* coders; } ;
struct TYPE_7__ {int vt; } ;
struct TYPE_8__ {scalar_t__ inPreSize; scalar_t__ outBufSize; scalar_t__ outPreSize; TYPE_2__ alloc; TYPE_5__ dec; int needInit; int * outBuf; int codeRes; } ;
typedef int SRes ;
typedef TYPE_3__ CLzma2DecMtThread ;
typedef TYPE_4__ CLzma2DecMt ;
typedef int Byte ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_5__*,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static SRes FUNC_3(void *VAR_3, unsigned VAR_4)
{
  CLzma2DecMt *VAR_5 = (CLzma2DecMt *)VAR_3;
  CLzma2DecMtThread *VAR_6 = &VAR_5->coders[VAR_4];
  Byte *VAR_7 = VAR_6->outBuf;

  if (VAR_6->inPreSize == 0)
  {
    VAR_6->codeRes = VAR_0;
    return VAR_6->codeRes;
  }

  if (!VAR_7 || VAR_6->outBufSize < VAR_6->outPreSize)
  {
    if (VAR_7)
    {
      FUNC_1(VAR_5->allocMid, VAR_7);
      VAR_6->outBuf = ((void*)0);
      VAR_6->outBufSize = 0;
    }

    VAR_7 = (Byte *)FUNC_0(VAR_5->allocMid, VAR_6->outPreSize

        );

    if (!VAR_7)
      return VAR_1;
    VAR_6->outBuf = VAR_7;
    VAR_6->outBufSize = VAR_6->outPreSize;
  }

  VAR_6->dec.decoder.dic = VAR_7;
  VAR_6->dec.decoder.dicBufSize = VAR_6->outPreSize;

  VAR_6->needInit = VAR_2;

  return FUNC_2(&VAR_6->dec, VAR_5->prop, &VAR_6->alloc.vt);
}
