
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_paddr_t ;
typedef size_t vm_offset_t ;
struct TYPE_4__ {int phys_addr; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (void*,void*,int) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (char*,int ) ;

void
FUNC_6(vm_page_t VAR_3[], vm_offset_t VAR_4, vm_page_t VAR_5[],
    vm_offset_t VAR_6, int VAR_7)
{
 void *VAR_8, *VAR_9;
 vm_page_t VAR_10, VAR_11;
 vm_paddr_t VAR_12, VAR_13;
 vm_offset_t VAR_14, VAR_15;
 int VAR_16;

 while (VAR_7 > 0) {
  VAR_14 = VAR_4 & VAR_0;
  VAR_10 = VAR_3[VAR_4 >> VAR_1];
  VAR_12 = VAR_10->phys_addr;
  VAR_15 = VAR_6 & VAR_0;
  VAR_11 = VAR_5[VAR_6 >> VAR_1];
  VAR_13 = VAR_11->phys_addr;
  VAR_16 = FUNC_4(VAR_7, VAR_2 - VAR_14);
  VAR_16 = FUNC_4(VAR_16, VAR_2 - VAR_15);
  if (FUNC_2(!FUNC_0(VAR_12))) {
   FUNC_5("!DMAP a %lx", VAR_12);
  } else {
   VAR_8 = (char *)FUNC_1(VAR_12) + VAR_14;
  }
  if (FUNC_2(!FUNC_0(VAR_13))) {
   FUNC_5("!DMAP b %lx", VAR_13);
  } else {
   VAR_9 = (char *)FUNC_1(VAR_13) + VAR_15;
  }
  FUNC_3(VAR_8, VAR_9, VAR_16);
  VAR_4 += VAR_16;
  VAR_6 += VAR_16;
  VAR_7 -= VAR_16;
 }
}
