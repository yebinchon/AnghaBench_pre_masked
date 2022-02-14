
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ handle; unsigned long long size; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;

u64 FUNC_0(u16 VAR_2)
{
 int VAR_3;

 if (VAR_0) {
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
   if (VAR_2 == VAR_0[VAR_3].handle)
    return VAR_0[VAR_3].size;
  }
 }
 return ~0ull;
}
