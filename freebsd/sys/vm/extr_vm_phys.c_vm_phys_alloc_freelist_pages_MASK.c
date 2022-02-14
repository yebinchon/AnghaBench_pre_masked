
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
 int FUNC_3 (int ) ;
 int FUNC_4 (struct vm_freelist*,int *,int) ;
 int* VAR_3 ;
 int VAR_4 ;
 struct vm_freelist**** VAR_5 ;
 int FUNC_5 (int,int *,int) ;
 int FUNC_6 (int *,int,struct vm_freelist*,int,int) ;

vm_page_t
FUNC_7(int VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
 struct vm_freelist *VAR_10, *VAR_11;
 vm_page_t VAR_12;
 int VAR_13, VAR_14, VAR_15;

 FUNC_0(VAR_6 >= 0 && VAR_6 < VAR_4,
     ("vm_phys_alloc_freelist_pages: domain %d is out of range",
     VAR_6));
 FUNC_0(VAR_7 < VAR_0,
     ("vm_phys_alloc_freelist_pages: freelist %d is out of range",
     VAR_7));
 FUNC_0(VAR_8 < VAR_2,
     ("vm_phys_alloc_freelist_pages: pool %d is out of range", VAR_8));
 FUNC_0(VAR_9 < VAR_1,
     ("vm_phys_alloc_freelist_pages: order %d is out of range", VAR_9));

 VAR_15 = VAR_3[VAR_7];

 if (VAR_15 < 0)
  return (((void*)0));

 FUNC_3(FUNC_2(VAR_6));
 VAR_11 = &VAR_5[VAR_6][VAR_15][VAR_8][0];
 for (VAR_13 = VAR_9; VAR_13 < VAR_1; VAR_13++) {
  VAR_12 = FUNC_1(&VAR_11[VAR_13].pl);
  if (VAR_12 != ((void*)0)) {
   FUNC_4(VAR_11, VAR_12, VAR_13);

   FUNC_6(VAR_12, VAR_13, VAR_11, VAR_9, 1);
   return (VAR_12);
  }
 }







 for (VAR_13 = VAR_1 - 1; VAR_13 >= VAR_9; VAR_13--) {
  for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++) {
   VAR_10 = &VAR_5[VAR_6][VAR_15][VAR_14][0];
   VAR_12 = FUNC_1(&VAR_10[VAR_13].pl);
   if (VAR_12 != ((void*)0)) {
    FUNC_4(VAR_10, VAR_12, VAR_13);
    FUNC_5(VAR_8, VAR_12, VAR_13);

    FUNC_6(VAR_12, VAR_13, VAR_11, VAR_9, 1);
    return (VAR_12);
   }
  }
 }
 return (((void*)0));
}
