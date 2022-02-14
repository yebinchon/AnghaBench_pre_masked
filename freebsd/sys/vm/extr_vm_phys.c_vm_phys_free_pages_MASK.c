
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_paddr_t ;
struct vm_phys_seg {int start; int end; struct vm_freelist*** free_queues; TYPE_1__* first_page; int domain; } ;
struct vm_freelist {int dummy; } ;
struct TYPE_7__ {int order; size_t pool; size_t segind; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 size_t FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct vm_freelist*,TYPE_1__*,int,int) ;
 int FUNC_6 (struct vm_freelist*,TYPE_1__*,int) ;
 struct vm_phys_seg* VAR_3 ;
 int FUNC_7 (size_t,TYPE_1__*,int) ;

void
FUNC_8(vm_page_t VAR_4, int VAR_5)
{
 struct vm_freelist *VAR_6;
 struct vm_phys_seg *VAR_7;
 vm_paddr_t VAR_8;
 vm_page_t VAR_9;

 FUNC_0(VAR_4->order == VAR_1,
     ("vm_phys_free_pages: page %p has unexpected order %d",
     VAR_4, VAR_4->order));
 FUNC_0(VAR_4->pool < VAR_2,
     ("vm_phys_free_pages: page %p has unexpected pool %d",
     VAR_4, VAR_4->pool));
 FUNC_0(VAR_5 < VAR_1,
     ("vm_phys_free_pages: order %d is out of range", VAR_5));
 VAR_7 = &VAR_3[VAR_4->segind];
 FUNC_4(FUNC_1(VAR_7->domain));
 if (VAR_5 < VAR_1 - 1) {
  VAR_8 = FUNC_2(VAR_4);
  do {
   VAR_8 ^= ((vm_paddr_t)1 << (VAR_0 + VAR_5));
   if (VAR_8 < VAR_7->start || VAR_8 >= VAR_7->end)
    break;
   VAR_9 = &VAR_7->first_page[FUNC_3(VAR_8 - VAR_7->start)];
   if (VAR_9->order != VAR_5)
    break;
   VAR_6 = (*VAR_7->free_queues)[VAR_9->pool];
   FUNC_6(VAR_6, VAR_9, VAR_5);
   if (VAR_9->pool != VAR_4->pool)
    FUNC_7(VAR_4->pool, VAR_9, VAR_5);
   VAR_5++;
   VAR_8 &= ~(((vm_paddr_t)1 << (VAR_0 + VAR_5)) - 1);
   VAR_4 = &VAR_7->first_page[FUNC_3(VAR_8 - VAR_7->start)];
  } while (VAR_5 < VAR_1 - 1);
 }
 VAR_6 = (*VAR_7->free_queues)[VAR_4->pool];
 FUNC_5(VAR_6, VAR_4, VAR_5, 1);
}
