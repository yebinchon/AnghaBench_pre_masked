
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
struct vm_phys_seg {scalar_t__ start; int domain; scalar_t__ end; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct vm_phys_seg* VAR_3 ;

__attribute__((used)) static void
FUNC_1(vm_paddr_t VAR_4, vm_paddr_t VAR_5, int VAR_6)
{
 struct vm_phys_seg *VAR_7;

 FUNC_0(VAR_2 < VAR_0,
     ("vm_phys_create_seg: increase VM_PHYSSEG_MAX"));
 FUNC_0(VAR_6 >= 0 && VAR_6 < VAR_1,
     ("vm_phys_create_seg: invalid domain provided"));
 VAR_7 = &VAR_3[VAR_2++];
 while (VAR_7 > VAR_3 && (VAR_7 - 1)->start >= VAR_5) {
  *VAR_7 = *(VAR_7 - 1);
  VAR_7--;
 }
 VAR_7->start = VAR_4;
 VAR_7->end = VAR_5;
 VAR_7->domain = VAR_6;
}
