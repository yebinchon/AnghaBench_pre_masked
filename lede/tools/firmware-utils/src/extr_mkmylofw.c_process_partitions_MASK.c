
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mylo_partition {scalar_t__ addr; scalar_t__ size; } ;
struct TYPE_2__ {struct mylo_partition mylo; } ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

int
FUNC_1(void)
{
 struct mylo_partition *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3 = &VAR_2[VAR_4].mylo;

  if (VAR_3->addr > VAR_0) {
   FUNC_0(0, "invalid partition at 0x%08X", VAR_3->addr);
   return -1;
  }

  if ((VAR_3->addr + VAR_3->size) > VAR_0) {
   FUNC_0(0, "partition at 0x%08X is too big", VAR_3->addr);
   return -1;
  }
 }

 return 0;
}
