
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vm_page_t ;
typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ u_long ;
struct vm_domain {scalar_t__ vmd_free_count; scalar_t__ vmd_free_reserved; scalar_t__ vmd_interrupt_free_min; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct vm_domain* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,int,scalar_t__,int *,scalar_t__) ;
 int * FUNC_7 (int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;

bool
FUNC_8(int VAR_10, int VAR_11, u_long VAR_12,
    vm_paddr_t VAR_13, vm_paddr_t VAR_14, u_long VAR_15, vm_paddr_t VAR_16)
{
 struct vm_domain *VAR_17;
 vm_paddr_t VAR_18;
 vm_page_t VAR_19, VAR_20[VAR_1];
 u_long VAR_21, VAR_22;
 int VAR_23, VAR_24, VAR_25, VAR_26;

 FUNC_0(VAR_12 > 0, ("npages is 0"));
 FUNC_0(FUNC_4(VAR_15), ("alignment is not a power of 2"));
 FUNC_0(FUNC_4(VAR_16), ("boundary is not a power of 2"));
 VAR_26 = VAR_11 & VAR_2;




 if (VAR_8 == VAR_9 && VAR_26 != VAR_3)
  VAR_26 = VAR_4;





 VAR_17 = FUNC_2(VAR_10);
 VAR_21 = VAR_17->vmd_free_count;
 if (VAR_21 < VAR_12 + VAR_17->vmd_free_reserved || (VAR_21 < VAR_12 +
     VAR_17->vmd_interrupt_free_min && VAR_26 == VAR_4) ||
     (VAR_21 < VAR_12 && VAR_26 == VAR_3))
  return (0);





 for (VAR_25 = VAR_6;;) {




  VAR_18 = VAR_13;
  VAR_21 = 0;
  for (;;) {
   VAR_19 = FUNC_7(VAR_10, VAR_12, VAR_18,
       VAR_14, VAR_15, VAR_16, VAR_25);
   if (VAR_19 == ((void*)0))
    break;
   VAR_18 = FUNC_3(VAR_19) + FUNC_5(VAR_12);
   VAR_20[FUNC_1(VAR_21)] = VAR_19;
   VAR_21++;
  }
  VAR_22 = 0;
  for (VAR_24 = 0; VAR_21 > 0 && VAR_24 < VAR_1; VAR_24++) {
   VAR_21--;
   VAR_19 = VAR_20[FUNC_1(VAR_21)];
   VAR_23 = FUNC_6(VAR_26, VAR_10, VAR_12,
       VAR_19, VAR_14);
   if (VAR_23 == 0) {
    VAR_22 += VAR_12;
    if (VAR_22 >= VAR_0)
     return (1);
   }
  }





  if (VAR_25 == VAR_6)
   VAR_25 = VAR_7;
  else if (VAR_25 == VAR_7)
   VAR_25 = VAR_5;
  else if (VAR_25 == VAR_5)
   return (VAR_22 != 0);
 }
}
