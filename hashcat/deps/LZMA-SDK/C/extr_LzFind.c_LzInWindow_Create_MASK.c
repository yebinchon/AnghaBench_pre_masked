
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UInt32 ;
struct TYPE_4__ {scalar_t__ keepSizeBefore; scalar_t__ keepSizeAfter; scalar_t__ blockSize; int * bufferBase; scalar_t__ directInput; } ;
typedef int ISzAllocPtr ;
typedef TYPE_1__ CMatchFinder ;
typedef int Byte ;


 scalar_t__ FUNC_0 (int ,size_t) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_2(CMatchFinder *VAR_0, UInt32 VAR_1, ISzAllocPtr VAR_2)
{
  UInt32 VAR_3 = VAR_0->keepSizeBefore + VAR_0->keepSizeAfter + VAR_1;
  if (VAR_0->directInput)
  {
    VAR_0->blockSize = VAR_3;
    return 1;
  }
  if (!VAR_0->bufferBase || VAR_0->blockSize != VAR_3)
  {
    FUNC_1(VAR_0, VAR_2);
    VAR_0->blockSize = VAR_3;
    VAR_0->bufferBase = (Byte *)FUNC_0(VAR_2, (size_t)VAR_3);
  }
  return (VAR_0->bufferBase != ((void*)0));
}
