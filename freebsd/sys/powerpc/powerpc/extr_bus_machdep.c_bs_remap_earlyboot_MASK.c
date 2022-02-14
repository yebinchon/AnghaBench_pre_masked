
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_paddr_t ;
typedef void* vm_offset_t ;
typedef int vm_memattr_t ;
struct TYPE_2__ {scalar_t__ addr; scalar_t__ virt; scalar_t__ size; int flags; } ;




 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (void*,scalar_t__,int ) ;
 void* FUNC_3 (scalar_t__) ;

void
FUNC_4(void)
{
 vm_paddr_t VAR_7, VAR_8;
 vm_offset_t VAR_9;
 int VAR_10;
 vm_memattr_t VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_8 = VAR_5[VAR_10].addr;

  if (VAR_6 &&
     FUNC_0(VAR_8) == VAR_5[VAR_10].virt &&
     FUNC_1(VAR_8, VAR_5[VAR_10].size) == 0)
   continue;

  VAR_11 = VAR_2;
  switch (VAR_5[VAR_10].flags) {
   case 129:
    VAR_11 = VAR_1;
    break;
   case 128:
    VAR_11 = VAR_3;
    break;
  }

  VAR_7 = FUNC_3(VAR_8);
  VAR_9 = FUNC_3(VAR_5[VAR_10].virt);
  while (VAR_7 < VAR_8 + VAR_5[VAR_10].size) {
   FUNC_2(VAR_9, VAR_7, VAR_11);
   VAR_9 += VAR_0;
   VAR_7 += VAR_0;
  }
 }
}
