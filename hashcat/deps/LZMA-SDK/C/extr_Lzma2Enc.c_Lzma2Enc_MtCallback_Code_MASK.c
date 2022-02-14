
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int mtProgress; } ;
struct TYPE_8__ {size_t outBufSize; size_t* outBufsDataSizes; int * coders; TYPE_1__ mtCoder; int ** outBufs; int alloc; } ;
struct TYPE_7__ {int vt; scalar_t__ outSize; scalar_t__ inSize; int * mtProgress; } ;
typedef int SRes ;
typedef TYPE_2__ CMtProgressThunk ;
typedef TYPE_3__ CLzma2Enc ;
typedef int Byte ;


 scalar_t__ FUNC_0 (int ,size_t) ;
 int FUNC_1 (TYPE_3__*,int *,int *,int *,size_t*,int *,int const*,size_t,int,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;

__attribute__((used)) static SRes FUNC_3(void *VAR_1, unsigned VAR_2, unsigned VAR_3,
    const Byte *VAR_4, size_t VAR_5, int VAR_6)
{
  CLzma2Enc *VAR_7 = (CLzma2Enc *)VAR_1;
  size_t VAR_8 = VAR_7->outBufSize;
  SRes VAR_9;
  CMtProgressThunk VAR_10;

  Byte *VAR_11 = VAR_7->outBufs[VAR_3];

  VAR_7->outBufsDataSizes[VAR_3] = 0;

  if (!VAR_11)
  {
    VAR_11 = (Byte *)FUNC_0(VAR_7->alloc, VAR_7->outBufSize);
    if (!VAR_11)
      return VAR_0;
    VAR_7->outBufs[VAR_3] = VAR_11;
  }

  FUNC_2(&VAR_10);
  VAR_10.mtProgress = &VAR_7->mtCoder.mtProgress;
  VAR_10.inSize = 0;
  VAR_10.outSize = 0;

  VAR_9 = FUNC_1(VAR_7,
      &VAR_7->coders[VAR_2],
      ((void*)0), VAR_11, &VAR_8,
      ((void*)0), VAR_4, VAR_5,
      VAR_6,
      &VAR_10.vt);

  VAR_7->outBufsDataSizes[VAR_3] = VAR_8;

  return VAR_9;
}
