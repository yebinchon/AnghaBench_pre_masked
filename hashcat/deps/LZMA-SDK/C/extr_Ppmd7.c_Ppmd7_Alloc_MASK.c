
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_4__ {int Size; int AlignOffset; int * Base; } ;
typedef int ISzAllocPtr ;
typedef TYPE_1__ CPpmd7 ;
typedef int Byte ;
typedef int BoolInt ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

BoolInt FUNC_2(CPpmd7 *VAR_3, UInt32 VAR_4, ISzAllocPtr VAR_5)
{
  if (!VAR_3->Base || VAR_3->Size != VAR_4)
  {
    size_t VAR_6;
    FUNC_1(VAR_3, VAR_5);
    VAR_6 = 0

      + VAR_2

      ;
    VAR_3->AlignOffset =



        4 - (VAR_4 & 3);

    if ((VAR_3->Base = (Byte *)FUNC_0(VAR_5, VAR_3->AlignOffset + VAR_4 + VAR_6)) == 0)
      return VAR_0;
    VAR_3->Size = VAR_4;
  }
  return VAR_1;
}
