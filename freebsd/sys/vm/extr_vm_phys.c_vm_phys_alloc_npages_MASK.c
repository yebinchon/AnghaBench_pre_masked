
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vm_page_t ;
struct vm_freelist {int pl; } ;


 int FUNC_0 (int,char*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct vm_freelist*,int *,int) ;
 int* VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *,int,struct vm_freelist*,int) ;
 struct vm_freelist**** VAR_5 ;
 int FUNC_7 (int,int *,int) ;

int
FUNC_8(int VAR_6, int VAR_7, int VAR_8, vm_page_t VAR_9[])
{
 struct vm_freelist *VAR_10, *VAR_11;
 vm_page_t VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;

 FUNC_0(VAR_6 >= 0 && VAR_6 < VAR_4,
     ("vm_phys_alloc_npages: domain %d is out of range", VAR_6));
 FUNC_0(VAR_7 < VAR_2,
     ("vm_phys_alloc_npages: pool %d is out of range", VAR_7));
 FUNC_0(VAR_8 <= 1 << (VAR_1 - 1),
     ("vm_phys_alloc_npages: npages %d is out of range", VAR_8));
 FUNC_4(FUNC_2(VAR_6));
 VAR_17 = 0;
 for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++) {
  VAR_15 = VAR_3[VAR_16];
  if (VAR_15 < 0)
   continue;
  VAR_11 = VAR_5[VAR_6][VAR_15][VAR_7];
  for (VAR_19 = 0; VAR_19 < VAR_1; VAR_19++) {
   while ((VAR_12 = FUNC_1(&VAR_11[VAR_19].pl)) != ((void*)0)) {
    FUNC_5(VAR_11, VAR_12, VAR_19);
    VAR_13 = 1 << VAR_19;
    VAR_18 = FUNC_3(VAR_8 - VAR_17, VAR_13);
    for (VAR_14 = VAR_17 + VAR_18; VAR_17 < VAR_14;)
     VAR_9[VAR_17++] = VAR_12++;
    if (VAR_18 < VAR_13) {




     FUNC_6(VAR_12, VAR_13 - VAR_18, VAR_11,
         1);
     return (VAR_8);
    } else if (VAR_17 == VAR_8)
     return (VAR_8);
   }
  }
  for (VAR_19 = VAR_1 - 1; VAR_19 >= 0; VAR_19--) {
   for (VAR_20 = 0; VAR_20 < VAR_2; VAR_20++) {
    VAR_10 = VAR_5[VAR_6][VAR_15][VAR_20];
    while ((VAR_12 = FUNC_1(&VAR_10[VAR_19].pl)) !=
        ((void*)0)) {
     FUNC_5(VAR_10, VAR_12, VAR_19);
     FUNC_7(VAR_7, VAR_12, VAR_19);
     VAR_13 = 1 << VAR_19;
     VAR_18 = FUNC_3(VAR_8 - VAR_17, VAR_13);
     for (VAR_14 = VAR_17 + VAR_18; VAR_17 < VAR_14;)
      VAR_9[VAR_17++] = VAR_12++;
     if (VAR_18 < VAR_13) {





      FUNC_6(VAR_12, VAR_13 -
          VAR_18, VAR_11, 1);
      return (VAR_8);
     } else if (VAR_17 == VAR_8)
      return (VAR_8);
    }
   }
  }
 }
 return (VAR_17);
}
