
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UInt64 ;
struct TYPE_6__ {scalar_t__ outBufSize; int ** outBufs; int mtCoder_WasConstructed; TYPE_1__* coders; void* allocBig; void* alloc; int * tempBufLzma; scalar_t__ expectedDataSize; int props; } ;
struct TYPE_5__ {int * enc; } ;
typedef scalar_t__ Int64 ;
typedef void* ISzAllocPtr ;
typedef TYPE_2__* CLzma2EncHandle ;
typedef TYPE_2__ CLzma2Enc ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

CLzma2EncHandle FUNC_3(ISzAllocPtr VAR_3, ISzAllocPtr VAR_4)
{
  CLzma2Enc *VAR_5 = (CLzma2Enc *)FUNC_0(VAR_3, sizeof(CLzma2Enc));
  if (!VAR_5)
    return ((void*)0);
  FUNC_1(&VAR_5->props);
  FUNC_2(&VAR_5->props);
  VAR_5->expectedDataSize = (UInt64)(Int64)-1;
  VAR_5->tempBufLzma = ((void*)0);
  VAR_5->alloc = VAR_3;
  VAR_5->allocBig = VAR_4;
  {
    unsigned VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
      VAR_5->coders[VAR_6].enc = ((void*)0);
  }


  VAR_5->mtCoder_WasConstructed = VAR_0;
  {
    unsigned VAR_7;
    for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
      VAR_5->outBufs[VAR_7] = ((void*)0);
    VAR_5->outBufSize = 0;
  }


  return VAR_5;
}
