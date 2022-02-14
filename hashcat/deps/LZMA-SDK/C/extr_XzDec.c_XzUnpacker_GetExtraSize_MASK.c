
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UInt64 ;
struct TYPE_3__ {scalar_t__ state; scalar_t__ pos; scalar_t__ padSize; } ;
typedef TYPE_1__ CXzUnpacker ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

UInt64 FUNC_0(const CXzUnpacker *VAR_2)
{
  UInt64 VAR_3 = 0;
  if (VAR_2->state == VAR_1)
    VAR_3 = VAR_2->padSize;
  else if (VAR_2->state == VAR_0)
    VAR_3 = VAR_2->padSize + VAR_2->pos;
  return VAR_3;
}
