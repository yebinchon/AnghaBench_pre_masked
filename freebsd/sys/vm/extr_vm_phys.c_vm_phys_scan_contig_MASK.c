
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vm_page_t ;
typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ u_long ;
struct vm_phys_seg {int domain; scalar_t__ start; scalar_t__ end; int * first_page; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 size_t FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int * FUNC_5 (scalar_t__,int *,int *,scalar_t__,scalar_t__,int) ;
 int VAR_0 ;
 struct vm_phys_seg* VAR_1 ;

vm_page_t
FUNC_6(int VAR_2, u_long VAR_3, vm_paddr_t VAR_4, vm_paddr_t VAR_5,
    u_long VAR_6, vm_paddr_t VAR_7, int VAR_8)
{
 vm_paddr_t VAR_9;
 vm_page_t VAR_10, VAR_11, VAR_12;
 struct vm_phys_seg *VAR_13;
 int VAR_14;

 FUNC_0(VAR_3 > 0, ("npages is 0"));
 FUNC_0(FUNC_3(VAR_6), ("alignment is not a power of 2"));
 FUNC_0(FUNC_3(VAR_7), ("boundary is not a power of 2"));
 if (VAR_4 >= VAR_5)
  return (((void*)0));
 for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
  VAR_13 = &VAR_1[VAR_14];
  if (VAR_13->domain != VAR_2)
   continue;
  if (VAR_13->start >= VAR_5)
   break;
  if (VAR_4 >= VAR_13->end)
   continue;
  if (VAR_4 <= VAR_13->start)
   VAR_12 = VAR_13->first_page;
  else
   VAR_12 = &VAR_13->first_page[FUNC_2(VAR_4 - VAR_13->start)];
  if (VAR_5 < VAR_13->end)
   VAR_9 = VAR_5;
  else
   VAR_9 = VAR_13->end;
  if (VAR_9 - FUNC_1(VAR_12) < FUNC_4(VAR_3))
   continue;
  VAR_10 = &VAR_13->first_page[FUNC_2(VAR_9 - VAR_13->start)];
  VAR_11 = FUNC_5(VAR_3, VAR_12, VAR_10,
      VAR_6, VAR_7, VAR_8);
  if (VAR_11 != ((void*)0))
   return (VAR_11);
 }
 return (((void*)0));
}
