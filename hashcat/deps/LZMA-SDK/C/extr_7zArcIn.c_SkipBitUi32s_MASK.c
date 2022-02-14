
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_4__ {size_t Size; int Data; } ;
typedef int SRes ;
typedef TYPE_1__ CSzData ;
typedef int Byte ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static SRes FUNC_3(CSzData *VAR_2, UInt32 VAR_3)
{
  Byte VAR_4;
  UInt32 VAR_5 = VAR_3;
  FUNC_2(VAR_4);
  if (!VAR_4)
  {
    size_t VAR_6 = (VAR_3 + 7) >> 3;
    if (VAR_6 > VAR_2->Size)
      return VAR_0;
    VAR_5 = FUNC_0(VAR_2->Data, VAR_3);
    FUNC_1(VAR_2, VAR_6);
  }
  if (VAR_5 > (VAR_2->Size >> 2))
    return VAR_0;
  FUNC_1(VAR_2, (size_t)VAR_5 * 4);
  return VAR_1;
}
