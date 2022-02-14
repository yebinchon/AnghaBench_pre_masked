
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vm_page_t ;
typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ u_long ;
struct vm_phys_seg {scalar_t__ start; int domain; scalar_t__ end; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (struct vm_phys_seg*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 struct vm_phys_seg* VAR_1 ;

vm_page_t
FUNC_6(int VAR_2, u_long VAR_3, vm_paddr_t VAR_4, vm_paddr_t VAR_5,
    u_long VAR_6, vm_paddr_t VAR_7)
{
 vm_paddr_t VAR_8, VAR_9;
 vm_page_t VAR_10;
 struct vm_phys_seg *VAR_11;
 int VAR_12;

 FUNC_0(VAR_3 > 0, ("npages is 0"));
 FUNC_0(FUNC_2(VAR_6), ("alignment is not a power of 2"));
 FUNC_0(FUNC_2(VAR_7), ("boundary is not a power of 2"));
 FUNC_4(FUNC_1(VAR_2));
 if (VAR_4 >= VAR_5)
  return (((void*)0));
 VAR_10 = ((void*)0);
 for (VAR_12 = VAR_0 - 1; VAR_12 >= 0; VAR_12--) {
  VAR_11 = &VAR_1[VAR_12];
  if (VAR_11->start >= VAR_5 || VAR_11->domain != VAR_2)
   continue;
  if (VAR_4 >= VAR_11->end)
   break;
  if (VAR_4 <= VAR_11->start)
   VAR_9 = VAR_11->start;
  else
   VAR_9 = VAR_4;
  if (VAR_5 < VAR_11->end)
   VAR_8 = VAR_5;
  else
   VAR_8 = VAR_11->end;
  if (VAR_8 - VAR_9 < FUNC_3(VAR_3))
   continue;
  VAR_10 = FUNC_5(VAR_11, VAR_3, VAR_4, VAR_5,
      VAR_6, VAR_7);
  if (VAR_10 != ((void*)0))
   break;
 }
 return (VAR_10);
}
