
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_3__ {scalar_t__ state; scalar_t__ padSize; } ;
typedef TYPE_1__ CXzUnpacker ;
typedef int BoolInt ;


 scalar_t__ VAR_0 ;

BoolInt FUNC_0(const CXzUnpacker *VAR_1)
{
  return (VAR_1->state == VAR_0) && (((UInt32)VAR_1->padSize & 3) == 0);
}
