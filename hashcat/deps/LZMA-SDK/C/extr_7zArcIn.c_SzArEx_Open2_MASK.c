
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t UInt64 ;
typedef scalar_t__ UInt32 ;
struct TYPE_15__ {scalar_t__* data; int size; } ;
struct TYPE_14__ {int startPosAfterHeader; } ;
struct TYPE_13__ {scalar_t__* Data; int Size; } ;
typedef scalar_t__ SRes ;
typedef int Int64 ;
typedef int ISzAllocPtr ;
typedef int ILookInStream ;
typedef TYPE_1__ CSzData ;
typedef TYPE_2__ CSzArEx ;
typedef int CSzAr ;
typedef TYPE_3__ CBuf ;
typedef scalar_t__ Byte ;


 int FUNC_0 (TYPE_3__*,size_t,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (scalar_t__*,size_t) ;
 scalar_t__ FUNC_4 (scalar_t__*) ;
 size_t FUNC_5 (scalar_t__*) ;
 int FUNC_6 (int *,int*,int ) ;
 scalar_t__ FUNC_7 (int *,scalar_t__*,size_t) ;
 int FUNC_8 (int *,scalar_t__*,int,scalar_t__) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (TYPE_1__*,size_t*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *,TYPE_1__*,TYPE_3__*,int,int,int *,int ) ;
 scalar_t__ FUNC_15 (TYPE_2__*,TYPE_1__*,int *,int ,int ) ;
 int FUNC_16 (scalar_t__*) ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static SRes FUNC_17(
    CSzArEx *VAR_13,
    ILookInStream *VAR_14,
    ISzAllocPtr VAR_15,
    ISzAllocPtr VAR_16)
{
  Byte VAR_17[VAR_12];
  Int64 VAR_18;
  UInt64 VAR_19, VAR_20;
  size_t VAR_21;
  UInt32 VAR_22;
  CBuf VAR_23;
  SRes VAR_24;

  VAR_18 = 0;
  FUNC_10(FUNC_6(VAR_14, &VAR_18, VAR_7));

  FUNC_10(FUNC_8(VAR_14, VAR_17, VAR_12, VAR_4));

  if (!FUNC_16(VAR_17))
    return VAR_4;
  if (VAR_17[6] != VAR_11)
    return VAR_5;

  VAR_19 = FUNC_5(VAR_17 + 12);
  VAR_20 = FUNC_5(VAR_17 + 20);
  VAR_22 = FUNC_4(VAR_17 + 28);

  VAR_13->startPosAfterHeader = VAR_18 + VAR_12;

  if (FUNC_3(VAR_17 + 12, 20) != FUNC_4(VAR_17 + 8))
    return VAR_1;

  VAR_21 = (size_t)VAR_20;
  if (VAR_21 != VAR_20)
    return VAR_3;
  if (VAR_21 == 0)
    return VAR_6;
  if (VAR_19 > VAR_19 + VAR_20 ||
      VAR_19 > VAR_19 + VAR_20 + VAR_12)
    return VAR_4;

  {
    Int64 VAR_25 = 0;
    FUNC_10(FUNC_6(VAR_14, &VAR_25, VAR_8));
    if ((UInt64)VAR_25 < VAR_18 + VAR_19 ||
        (UInt64)VAR_25 < VAR_18 + VAR_12 + VAR_19 ||
        (UInt64)VAR_25 < VAR_18 + VAR_12 + VAR_19 + VAR_20)
      return VAR_2;
  }

  FUNC_10(FUNC_9(VAR_14, VAR_18 + VAR_12 + VAR_19));

  if (!FUNC_0(&VAR_23, VAR_21, VAR_16))
    return VAR_3;

  VAR_24 = FUNC_7(VAR_14, VAR_23.data, VAR_21);

  if (VAR_24 == VAR_6)
  {
    VAR_24 = VAR_0;
    if (FUNC_3(VAR_23.data, VAR_21) == VAR_22)
    {
      CSzData VAR_26;
      UInt64 VAR_27;
      VAR_26.Data = VAR_23.data;
      VAR_26.Size = VAR_23.size;

      VAR_24 = FUNC_11(&VAR_26, &VAR_27);

      if (VAR_24 == VAR_6 && VAR_27 == VAR_9)
      {
        CSzAr VAR_28;
        CBuf VAR_29;
        FUNC_2(&VAR_29);

        FUNC_13(&VAR_28);
        VAR_24 = FUNC_14(VAR_14, &VAR_26, &VAR_29, 1, VAR_13->startPosAfterHeader, &VAR_28, VAR_16);
        FUNC_12(&VAR_28, VAR_16);

        if (VAR_24 != VAR_6)
        {
          FUNC_1(&VAR_29, VAR_16);
        }
        else
        {
          FUNC_1(&VAR_23, VAR_16);
          VAR_23.data = VAR_29.data;
          VAR_23.size = VAR_29.size;
          VAR_26.Data = VAR_23.data;
          VAR_26.Size = VAR_23.size;
          VAR_24 = FUNC_11(&VAR_26, &VAR_27);
        }
      }

      if (VAR_24 == VAR_6)
      {
        if (VAR_27 == VAR_10)
        {
          VAR_24 = FUNC_15(VAR_13, &VAR_26, VAR_14, VAR_15, VAR_16);
        }
        else
          VAR_24 = VAR_5;
      }
    }
  }

  FUNC_1(&VAR_23, VAR_16);
  return VAR_24;
}
