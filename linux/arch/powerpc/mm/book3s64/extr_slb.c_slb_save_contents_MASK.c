
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slb_entry {unsigned long esid; unsigned long vsid; } ;
struct TYPE_2__ {int slb_cache_ptr; int slb_save_cache_ptr; } ;


 TYPE_1__* FUNC_0 () ;
 int VAR_0 ;

void FUNC_1(struct slb_entry *VAR_1)
{
 int VAR_2;
 unsigned long VAR_3, VAR_4;


 FUNC_0()->slb_save_cache_ptr = FUNC_0()->slb_cache_ptr;

 if (!VAR_1)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  asm volatile("slbmfee  %0,%1" : "=r" (VAR_3) : "r" (VAR_2));
  asm volatile("slbmfev  %0,%1" : "=r" (VAR_4) : "r" (VAR_2));
  VAR_1->esid = VAR_3;
  VAR_1->vsid = VAR_4;
  VAR_1++;
 }
}
