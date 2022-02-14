
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int id ;
typedef int UInt64 ;
typedef scalar_t__ UInt32 ;
struct TYPE_11__ {scalar_t__ InIndex; scalar_t__ OutIndex; } ;
struct TYPE_10__ {int NumStreams; int PropsOffset; int PropsSize; scalar_t__ MethodID; } ;
struct TYPE_9__ {int* Data; unsigned int Size; } ;
struct TYPE_8__ {scalar_t__ NumCoders; scalar_t__* PackStreams; scalar_t__ UnpackStream; TYPE_4__* Bonds; scalar_t__ NumPackStreams; scalar_t__ NumBonds; TYPE_3__* Coders; } ;
typedef int SRes ;
typedef TYPE_1__ CSzFolder ;
typedef TYPE_2__ CSzData ;
typedef TYPE_3__ CSzCoderInfo ;
typedef TYPE_4__ CSzBond ;
typedef int Byte ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,scalar_t__*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

SRes FUNC_3(CSzFolder *VAR_9, CSzData *VAR_10)
{
  UInt32 VAR_11, VAR_12;
  UInt32 VAR_13 = 0;
  const Byte *VAR_14 = VAR_10->Data;

  VAR_9->NumCoders = 0;
  VAR_9->NumBonds = 0;
  VAR_9->NumPackStreams = 0;
  VAR_9->UnpackStream = 0;

  FUNC_0(FUNC_2(VAR_10, &VAR_11));
  if (VAR_11 == 0 || VAR_11 > VAR_4)
    return VAR_2;

  for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
  {
    Byte VAR_15;
    CSzCoderInfo *VAR_16 = VAR_9->Coders + VAR_12;
    unsigned VAR_17, VAR_18;
    UInt64 VAR_19;

    FUNC_1(VAR_15);
    if ((VAR_15 & 0xC0) != 0)
      return VAR_2;

    VAR_17 = (unsigned)(VAR_15 & 0xF);
    if (VAR_17 > sizeof(VAR_19))
      return VAR_2;
    if (VAR_17 > VAR_10->Size)
      return VAR_1;
    VAR_19 = 0;
    for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++)
    {
      VAR_19 = ((VAR_19 << 8) | *VAR_10->Data);
      VAR_10->Data++;
      VAR_10->Size--;
    }
    if (VAR_19 > (UInt32)0xFFFFFFFF)
      return VAR_2;
    VAR_16->MethodID = (UInt32)VAR_19;

    VAR_16->NumStreams = 1;
    VAR_16->PropsOffset = 0;
    VAR_16->PropsSize = 0;

    if ((VAR_15 & 0x10) != 0)
    {
      UInt32 VAR_20;

      FUNC_0(FUNC_2(VAR_10, &VAR_20));
      if (VAR_20 > VAR_8)
        return VAR_2;
      VAR_16->NumStreams = (Byte)VAR_20;

      FUNC_0(FUNC_2(VAR_10, &VAR_20));
      if (VAR_20 != 1)
        return VAR_2;
    }

    VAR_13 += VAR_16->NumStreams;

    if (VAR_13 > VAR_8)
      return VAR_2;

    if ((VAR_15 & 0x20) != 0)
    {
      UInt32 VAR_21 = 0;
      FUNC_0(FUNC_2(VAR_10, &VAR_21));
      if (VAR_21 > VAR_10->Size)
        return VAR_1;
      if (VAR_21 >= 0x80)
        return VAR_2;
      VAR_16->PropsOffset = VAR_10->Data - VAR_14;
      VAR_16->PropsSize = (Byte)VAR_21;
      VAR_10->Data += (size_t)VAR_21;
      VAR_10->Size -= (size_t)VAR_21;
    }
  }
  {
    Byte VAR_22[VAR_8];
    UInt32 VAR_23, VAR_24;

    VAR_23 = VAR_11 - 1;
    if (VAR_13 < VAR_23)
      return VAR_1;
    if (VAR_23 > VAR_3)
      return VAR_2;
    VAR_9->NumBonds = VAR_23;

    VAR_24 = VAR_13 - VAR_23;
    if (VAR_24 > VAR_5)
      return VAR_2;
    VAR_9->NumPackStreams = VAR_24;

    for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
      VAR_22[VAR_12] = VAR_0;

    if (VAR_23 != 0)
    {
      Byte VAR_25[VAR_4];

      for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
        VAR_25[VAR_12] = VAR_0;

      for (VAR_12 = 0; VAR_12 < VAR_23; VAR_12++)
      {
        CSzBond *VAR_26 = VAR_9->Bonds + VAR_12;

        FUNC_0(FUNC_2(VAR_10, &VAR_26->InIndex));
        if (VAR_26->InIndex >= VAR_13 || VAR_22[VAR_26->InIndex])
          return VAR_1;
        VAR_22[VAR_26->InIndex] = VAR_7;

        FUNC_0(FUNC_2(VAR_10, &VAR_26->OutIndex));
        if (VAR_26->OutIndex >= VAR_11 || VAR_25[VAR_26->OutIndex])
          return VAR_1;
        VAR_25[VAR_26->OutIndex] = VAR_7;
      }

      for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
        if (!VAR_25[VAR_12])
        {
          VAR_9->UnpackStream = VAR_12;
          break;
        }

      if (VAR_12 == VAR_11)
        return VAR_1;
    }

    if (VAR_24 == 1)
    {
      for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
        if (!VAR_22[VAR_12])
          break;
      if (VAR_12 == VAR_13)
        return VAR_1;
      VAR_9->PackStreams[0] = VAR_12;
    }
    else
      for (VAR_12 = 0; VAR_12 < VAR_24; VAR_12++)
      {
        UInt32 VAR_27;
        FUNC_0(FUNC_2(VAR_10, &VAR_27));
        if (VAR_27 >= VAR_13 || VAR_22[VAR_27])
          return VAR_1;
        VAR_22[VAR_27] = VAR_7;
        VAR_9->PackStreams[VAR_12] = VAR_27;
      }
  }

  VAR_9->NumCoders = VAR_11;

  return VAR_6;
}
