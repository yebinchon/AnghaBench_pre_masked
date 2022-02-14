
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_long ;
struct vm_phys_seg {scalar_t__ end; scalar_t__ start; size_t domain; struct vm_freelist*** free_queues; int * first_page; } ;
struct vm_freelist {int pl; } ;


 int FUNC_0 (int,char*) ;
 int * FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,char*) ;
 int* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;
 struct vm_freelist**** VAR_14 ;
 int VAR_15 ;
 struct vm_phys_seg* VAR_16 ;

void
FUNC_5(void)
{
 struct vm_freelist *VAR_17;
 struct vm_phys_seg *VAR_18, *VAR_19, *VAR_20, *VAR_21;
 u_long VAR_22;
 int VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 VAR_22 = 0;
 for (VAR_28 = VAR_15 - 1; VAR_28 >= 0; VAR_28--) {
  VAR_20 = &VAR_16[VAR_28];
  {
   VAR_22 += FUNC_3(VAR_20->end - VAR_20->start);
   VAR_9[VAR_2] = 1;
  }
 }

 for (VAR_25 = 1; VAR_25 < VAR_6; VAR_25++) {
  VAR_9[VAR_25] +=
      VAR_9[VAR_25 - 1];
 }
 VAR_11 = VAR_9[VAR_6 - 1];
 FUNC_0(VAR_11 > 0, ("vm_phys_init: no free lists"));

 for (VAR_25 = 0; VAR_25 < VAR_6; VAR_25++)
  VAR_9[VAR_25]--;
 for (VAR_28 = 0; VAR_28 < VAR_15; VAR_28++) {
  VAR_20 = &VAR_16[VAR_28];




  VAR_20->first_page = FUNC_1(VAR_20->start);
  {
   VAR_24 = VAR_9[VAR_2];
   FUNC_0(VAR_24 >= 0,
       ("vm_phys_init: DEFAULT flind < 0"));
  }
  VAR_20->free_queues = &VAR_14[VAR_20->domain][VAR_24];
 }





 VAR_19 = VAR_16;
 VAR_20 = &VAR_16[1];
 VAR_18 = &VAR_16[VAR_15];
 while (VAR_20 < VAR_18) {
  if (VAR_19->end == VAR_20->start &&
      VAR_19->free_queues == VAR_20->free_queues) {
   VAR_19->end = VAR_20->end;
   FUNC_0(VAR_19->domain == VAR_20->domain,
       ("vm_phys_init: free queues cannot span domains"));
   VAR_15--;
   VAR_18--;
   for (VAR_21 = VAR_20; VAR_21 < VAR_18; VAR_21++)
    *VAR_21 = *(VAR_21 + 1);
  } else {
   VAR_19 = VAR_20;
   VAR_20++;
  }
 }




 for (VAR_23 = 0; VAR_23 < VAR_10; VAR_23++) {
  for (VAR_24 = 0; VAR_24 < VAR_11; VAR_24++) {
   for (VAR_27 = 0; VAR_27 < VAR_8; VAR_27++) {
    VAR_17 = VAR_14[VAR_23][VAR_24][VAR_27];
    for (VAR_26 = 0; VAR_26 < VAR_7; VAR_26++)
     FUNC_2(&VAR_17[VAR_26].pl);
   }
  }
 }

 FUNC_4(&VAR_13, "vmfctr");
}
