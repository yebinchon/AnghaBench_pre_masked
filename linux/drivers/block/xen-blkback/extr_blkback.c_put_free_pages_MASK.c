
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_blkif_ring {int free_pages_num; int free_pages_lock; int free_pages; } ;
struct page {int lru; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_3(struct xen_blkif_ring *VAR_0, struct page **VAR_1,
                                  int VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 FUNC_1(&VAR_0->free_pages_lock, VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_0(&VAR_1[VAR_4]->lru, &VAR_0->free_pages);
 VAR_0->free_pages_num += VAR_2;
 FUNC_2(&VAR_0->free_pages_lock, VAR_3);
}
