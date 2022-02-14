
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UInt64 ;
typedef size_t UInt32 ;
struct TYPE_3__ {size_t* FoToCoderUnpackSizes; size_t* FoToMainUnpackSizeIndex; int * CoderUnpackSizes; } ;
typedef TYPE_1__ CSzAr ;



UInt64 FUNC_0(const CSzAr *VAR_0, UInt32 VAR_1)
{
  return VAR_0->CoderUnpackSizes[VAR_0->FoToCoderUnpackSizes[VAR_1] + VAR_0->FoToMainUnpackSizeIndex[VAR_1]];
}
