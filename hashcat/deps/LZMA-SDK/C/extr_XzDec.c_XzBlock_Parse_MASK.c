
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UInt64 ;
typedef scalar_t__ UInt32 ;
struct TYPE_9__ {scalar_t__ flags; scalar_t__ packSize; scalar_t__ unpackSize; TYPE_1__* filters; } ;
struct TYPE_8__ {scalar_t__ id; int* props; scalar_t__ propsSize; } ;
typedef int SRes ;
typedef scalar_t__ Int64 ;
typedef TYPE_1__ CXzFilter ;
typedef TYPE_2__ CXzBlock ;
typedef scalar_t__ Byte ;


 scalar_t__ FUNC_0 (scalar_t__ const*,unsigned int) ;
 scalar_t__ FUNC_1 (scalar_t__ const*) ;
 int FUNC_2 (scalar_t__ const*,unsigned int,unsigned int,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int*,scalar_t__ const*,size_t) ;
 int FUNC_8 (char*,int,...) ;

SRes FUNC_9(CXzBlock *VAR_4, const Byte *VAR_5)
{
  unsigned VAR_6;
  unsigned VAR_7, VAR_8;
  unsigned VAR_9 = (unsigned)VAR_5[0] << 2;



  if (FUNC_0(VAR_5, VAR_9) != FUNC_1(VAR_5 + VAR_9))
    return VAR_0;

  VAR_6 = 1;
  VAR_4->flags = VAR_5[VAR_6++];

  VAR_4->packSize = (UInt64)(Int64)-1;
  if (FUNC_4(VAR_4))
  {
    FUNC_2(VAR_5, VAR_6, VAR_9, &VAR_4->packSize);
    if (VAR_4->packSize == 0 || VAR_4->packSize + VAR_9 >= (UInt64)1 << 63)
      return VAR_0;
  }

  VAR_4->unpackSize = (UInt64)(Int64)-1;
  if (FUNC_5(VAR_4))
    FUNC_2(VAR_5, VAR_6, VAR_9, &VAR_4->unpackSize);

  VAR_7 = FUNC_3(VAR_4);
  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  {
    CXzFilter *VAR_10 = VAR_4->filters + VAR_8;
    UInt64 VAR_11;
    FUNC_2(VAR_5, VAR_6, VAR_9, &VAR_10->id);
    FUNC_2(VAR_5, VAR_6, VAR_9, &VAR_11);
    if (VAR_11 > VAR_9 - VAR_6 || VAR_11 > VAR_3)
      return VAR_0;
    VAR_10->propsSize = (UInt32)VAR_11;
    FUNC_7(VAR_10->props, VAR_5 + VAR_6, (size_t)VAR_11);
    VAR_6 += (unsigned)VAR_11;
  }

  if (FUNC_6(VAR_4))
    return VAR_1;

  while (VAR_6 < VAR_9)
    if (VAR_5[VAR_6++] != 0)
      return VAR_0;
  return VAR_2;
}
