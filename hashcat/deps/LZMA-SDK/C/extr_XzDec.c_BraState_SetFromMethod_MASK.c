
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UInt64 ;
typedef scalar_t__ UInt32 ;
struct TYPE_5__ {int encodeMode; scalar_t__ methodId; } ;
struct TYPE_4__ {int Filter; int Code2; int Init; int SetProps; int Free; TYPE_2__* p; } ;
typedef int SRes ;
typedef int ISzAllocPtr ;
typedef TYPE_1__ IStateCoder ;
typedef TYPE_2__ CBraState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

SRes FUNC_1(IStateCoder *VAR_10, UInt64 VAR_11, int VAR_12, ISzAllocPtr VAR_13)
{
  CBraState *VAR_14;
  if (VAR_11 < VAR_8 || VAR_11 > VAR_9)
    return VAR_6;
  VAR_14 = (CBraState *)VAR_10->p;
  if (!VAR_14)
  {
    VAR_14 = (CBraState *)FUNC_0(VAR_13, sizeof(CBraState));
    if (!VAR_14)
      return VAR_5;
    VAR_10->p = VAR_14;
    VAR_10->Free = VAR_2;
    VAR_10->SetProps = VAR_4;
    VAR_10->Init = VAR_3;
    VAR_10->Code2 = VAR_0;
    VAR_10->Filter = VAR_1;
  }
  VAR_14->methodId = (UInt32)VAR_11;
  VAR_14->encodeMode = VAR_12;
  return VAR_7;
}
