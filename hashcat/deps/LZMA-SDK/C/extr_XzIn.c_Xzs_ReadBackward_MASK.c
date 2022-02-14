
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UInt64 ;
struct TYPE_9__ {scalar_t__ startOffset; } ;
struct TYPE_8__ {scalar_t__ num; scalar_t__ numAllocated; TYPE_2__* streams; } ;
typedef scalar_t__ SRes ;
typedef scalar_t__ Int64 ;
typedef int ISzAllocPtr ;
typedef int ILookInStream ;
typedef int ICompressProgress ;
typedef TYPE_1__ CXzs ;
typedef TYPE_2__ CXzStream ;
typedef int Byte ;


 scalar_t__ FUNC_0 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int *,scalar_t__*,int ) ;
 scalar_t__ FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int *,scalar_t__*,int ) ;
 int FUNC_8 (int *,TYPE_2__*,int) ;

SRes FUNC_9(CXzs *VAR_4, ILookInStream *VAR_5, Int64 *VAR_6, ICompressProgress *VAR_7, ISzAllocPtr VAR_8)
{
  Int64 VAR_9 = 0;
  FUNC_5(FUNC_1(VAR_5, &VAR_9, VAR_3));
  *VAR_6 = VAR_9;
  for (;;)
  {
    CXzStream VAR_10;
    SRes VAR_11;
    FUNC_6(&VAR_10);
    VAR_11 = FUNC_7(&VAR_10, VAR_5, VAR_6, VAR_8);
    VAR_10.startOffset = *VAR_6;
    FUNC_5(VAR_11);
    if (VAR_4->num == VAR_4->numAllocated)
    {
      size_t VAR_12 = VAR_4->num + VAR_4->num / 4 + 1;
      Byte *VAR_13 = (Byte *)FUNC_2(VAR_8, VAR_12 * sizeof(CXzStream));
      if (!VAR_13)
        return VAR_0;
      VAR_4->numAllocated = VAR_12;
      if (VAR_4->num != 0)
        FUNC_8(VAR_13, VAR_4->streams, VAR_4->num * sizeof(CXzStream));
      FUNC_3(VAR_8, VAR_4->streams);
      VAR_4->streams = (CXzStream *)VAR_13;
    }
    VAR_4->streams[VAR_4->num++] = VAR_10;
    if (*VAR_6 == 0)
      break;
    FUNC_5(FUNC_4(VAR_5, *VAR_6));
    if (VAR_7 && FUNC_0(VAR_7, VAR_9 - *VAR_6, (UInt64)(Int64)-1) != VAR_2)
      return VAR_1;
  }
  return VAR_2;
}
