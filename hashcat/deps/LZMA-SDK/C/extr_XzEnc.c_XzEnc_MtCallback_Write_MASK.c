
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UInt64 ;
struct TYPE_4__ {int alloc; int xzIndex; int outStream; int ** outBufs; TYPE_1__* EncBlocks; } ;
struct TYPE_3__ {scalar_t__ totalSize; int unpackSize; scalar_t__ headerSize; } ;
typedef int SRes ;
typedef TYPE_1__ CXzEncBlockInfo ;
typedef TYPE_2__ CXzEnc ;
typedef int Byte ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int const*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ,scalar_t__,int ) ;

__attribute__((used)) static SRes FUNC_4(void *VAR_1, unsigned VAR_2)
{
  CXzEnc *VAR_3 = (CXzEnc *)VAR_1;

  const CXzEncBlockInfo *VAR_4 = &VAR_3->EncBlocks[VAR_2];
  const Byte *VAR_5 = VAR_3->outBufs[VAR_2];

  FUNC_0(FUNC_1(VAR_3->outStream, VAR_5, VAR_4->headerSize));

  {
    UInt64 VAR_6 = VAR_4->totalSize + FUNC_2(VAR_4->totalSize);
    FUNC_0(FUNC_1(VAR_3->outStream, VAR_5 + VAR_0, (size_t)VAR_6 - VAR_4->headerSize));
  }

  return FUNC_3(&VAR_3->xzIndex, VAR_4->unpackSize, VAR_4->totalSize, VAR_3->alloc);
}
