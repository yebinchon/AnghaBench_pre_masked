
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_4__ {int Size; int * Data; } ;
typedef int SRes ;
typedef TYPE_1__ CSzData ;
typedef int Byte ;


 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static SRes FUNC_1(CSzData *VAR_2, UInt32 VAR_3, const Byte **VAR_4)
{
  UInt32 VAR_5 = (VAR_3 + 7) >> 3;
  if (VAR_5 > VAR_2->Size)
    return VAR_0;
  *VAR_4 = VAR_2->Data;
  FUNC_0(VAR_2, VAR_5);
  return VAR_1;
}
