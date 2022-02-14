
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct tlb_info {unsigned long long next; unsigned long long last; unsigned long long first; } ;
struct TYPE_4__ {unsigned long long pte_low; } ;
typedef TYPE_1__ pte_t ;
struct TYPE_5__ {struct tlb_info dtlb; struct tlb_info itlb; } ;


 unsigned int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 int FUNC_0 (unsigned long long) ;
 TYPE_2__* VAR_6 ;
 unsigned long long FUNC_1 () ;
 unsigned int FUNC_2 () ;
 unsigned long long FUNC_3 (unsigned long) ;

void FUNC_4(struct vm_area_struct *VAR_7, unsigned long VAR_8, pte_t VAR_9)
{
 unsigned long long VAR_10;
 unsigned long long VAR_11=0;
 struct tlb_info *VAR_12;
 unsigned long long VAR_13;
 unsigned int VAR_14 = FUNC_2();


 VAR_10 = VAR_9.pte_low;




 VAR_11 = FUNC_3(VAR_8 & VAR_1);


 VAR_11 |= FUNC_1() << VAR_2;
 VAR_11 |= VAR_3;


 VAR_10 &= VAR_5;

 if (VAR_14 & VAR_0)
  VAR_12 = &VAR_6->itlb;
 else
  VAR_12 = &VAR_6->dtlb;

 VAR_13 = VAR_12->next;
 FUNC_0(VAR_13);
 asm volatile ("putcfg %0,1,%2\n\n\t"
        "putcfg %0,0,%1\n"
        : : "r" (VAR_13), "r" (VAR_11), "r" (VAR_10) );

 VAR_13 += VAR_4;
 if (VAR_13 > VAR_12->last)
  VAR_13 = VAR_12->first;
 VAR_12->next = VAR_13;
}
