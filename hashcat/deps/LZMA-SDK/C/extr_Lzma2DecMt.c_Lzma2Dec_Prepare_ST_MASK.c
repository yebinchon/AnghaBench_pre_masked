
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ inBufSize_ST; } ;
struct TYPE_5__ {int vt; } ;
struct TYPE_7__ {scalar_t__ inBufSize; int dec; TYPE_2__ props; int * inBuf; int allocMid; TYPE_1__ alignOffsetAlloc; int prop; scalar_t__ dec_created; } ;
typedef int SRes ;
typedef TYPE_3__ CLzma2DecMt ;
typedef int Byte ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static SRes FUNC_6(CLzma2DecMt *VAR_3)
{
  if (!VAR_3->dec_created)
  {
    FUNC_3(&VAR_3->dec);
    VAR_3->dec_created = VAR_2;
  }

  FUNC_5(FUNC_2(&VAR_3->dec, VAR_3->prop, &VAR_3->alignOffsetAlloc.vt));

  if (!VAR_3->inBuf || VAR_3->inBufSize != VAR_3->props.inBufSize_ST)
  {
    FUNC_1(VAR_3->allocMid, VAR_3->inBuf);
    VAR_3->inBufSize = 0;
    VAR_3->inBuf = (Byte *)FUNC_0(VAR_3->allocMid, VAR_3->props.inBufSize_ST);
    if (!VAR_3->inBuf)
      return VAR_0;
    VAR_3->inBufSize = VAR_3->props.inBufSize_ST;
  }

  FUNC_4(&VAR_3->dec);

  return VAR_1;
}
