
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_paddr_t ;
struct vm_phys_seg {int start; TYPE_1__* first_page; struct vm_freelist*** free_queues; int domain; } ;
struct vm_freelist {int dummy; } ;
typedef int boolean_t ;
struct TYPE_5__ {size_t segind; int order; int phys_addr; size_t pool; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 size_t FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct vm_freelist*,TYPE_1__*,int,int ) ;
 int FUNC_5 (struct vm_freelist*,TYPE_1__*,int) ;
 struct vm_phys_seg* VAR_4 ;

boolean_t
FUNC_6(vm_page_t VAR_5)
{
 struct vm_freelist *VAR_6;
 struct vm_phys_seg *VAR_7;
 vm_paddr_t VAR_8, VAR_9;
 vm_page_t VAR_10, VAR_11;
 int VAR_12;






 VAR_7 = &VAR_4[VAR_5->segind];
 FUNC_3(FUNC_1(VAR_7->domain));
 for (VAR_10 = VAR_5, VAR_12 = 0; VAR_10->order == VAR_3 &&
     VAR_12 < VAR_3 - 1; ) {
  VAR_12++;
  VAR_8 = VAR_5->phys_addr & (~(vm_paddr_t)0 << (VAR_1 + VAR_12));
  if (VAR_8 >= VAR_7->start)
   VAR_10 = &VAR_7->first_page[FUNC_2(VAR_8 - VAR_7->start)];
  else
   return (VAR_0);
 }
 if (VAR_10->order < VAR_12)
  return (VAR_0);
 if (VAR_10->order == VAR_3)
  return (VAR_0);
 FUNC_0(VAR_10->order < VAR_3,
     ("vm_phys_unfree_page: page %p has unexpected order %d",
     VAR_10, VAR_10->order));







 VAR_6 = (*VAR_7->free_queues)[VAR_10->pool];
 VAR_12 = VAR_10->order;
 FUNC_5(VAR_6, VAR_10, VAR_12);
 while (VAR_12 > 0) {
  VAR_12--;
  VAR_9 = VAR_10->phys_addr ^ (1 << (VAR_1 + VAR_12));
  if (VAR_5->phys_addr < VAR_9)
   VAR_11 = &VAR_7->first_page[FUNC_2(VAR_9 - VAR_7->start)];
  else {
   VAR_11 = VAR_10;
   VAR_10 = &VAR_7->first_page[FUNC_2(VAR_9 - VAR_7->start)];
  }
  FUNC_4(VAR_6, VAR_11, VAR_12, 0);
 }
 FUNC_0(VAR_10 == VAR_5, ("vm_phys_unfree_page: fatal inconsistency"));
 return (VAR_2);
}
