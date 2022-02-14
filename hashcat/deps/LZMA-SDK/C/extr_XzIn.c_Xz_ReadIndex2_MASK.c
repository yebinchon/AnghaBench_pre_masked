
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UInt64 ;
typedef scalar_t__ UInt32 ;
struct TYPE_6__ {size_t totalSize; size_t unpackSize; } ;
struct TYPE_5__ {size_t numBlocks; TYPE_2__* blocks; } ;
typedef int SRes ;
typedef int ISzAllocPtr ;
typedef TYPE_1__ CXzStream ;
typedef TYPE_2__ CXzBlockSizes ;
typedef scalar_t__ Byte ;


 scalar_t__ FUNC_0 (scalar_t__ const*,size_t) ;
 scalar_t__ FUNC_1 (scalar_t__ const*) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (scalar_t__ const*,size_t,size_t,size_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static SRes FUNC_5(CXzStream *VAR_3, const Byte *VAR_4, size_t VAR_5, ISzAllocPtr VAR_6)
{
  size_t VAR_7, VAR_8 = 1;
  UInt32 VAR_9;

  if (VAR_5 < 5 || VAR_4[0] != 0)
    return VAR_0;

  VAR_5 -= 4;
  VAR_9 = FUNC_0(VAR_4, VAR_5);
  if (VAR_9 != FUNC_1(VAR_4 + VAR_5))
    return VAR_0;

  {
    UInt64 VAR_10;
    FUNC_3(VAR_4, VAR_8, VAR_5, &VAR_10);
    VAR_7 = (size_t)VAR_10;
    if (VAR_7 != VAR_10 || VAR_7 * 2 > VAR_5)
      return VAR_0;
  }

  FUNC_4(VAR_3, VAR_6);
  if (VAR_7 != 0)
  {
    size_t VAR_11;
    VAR_3->numBlocks = VAR_7;
    VAR_3->blocks = (CXzBlockSizes *)FUNC_2(VAR_6, sizeof(CXzBlockSizes) * VAR_7);
    if (!VAR_3->blocks)
      return VAR_1;
    for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
    {
      CXzBlockSizes *VAR_12 = &VAR_3->blocks[VAR_11];
      FUNC_3(VAR_4, VAR_8, VAR_5, &VAR_12->totalSize);
      FUNC_3(VAR_4, VAR_8, VAR_5, &VAR_12->unpackSize);
      if (VAR_12->totalSize == 0)
        return VAR_0;
    }
  }
  while ((VAR_8 & 3) != 0)
    if (VAR_4[VAR_8++] != 0)
      return VAR_0;
  return (VAR_8 == VAR_5) ? VAR_2 : VAR_0;
}
