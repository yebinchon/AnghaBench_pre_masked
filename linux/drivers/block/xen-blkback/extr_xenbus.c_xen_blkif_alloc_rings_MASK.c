
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_blkif_ring {int active; int st_print; struct xen_blkif* blkif; int shutdown_wq; int pending_free_wq; int pending_free_lock; int free_pages; int free_pages_lock; int persistent_purge_work; int persistent_purge_list; int pending_free; int wq; int blk_ring_lock; } ;
struct xen_blkif {unsigned int nr_rings; struct xen_blkif_ring* rings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 struct xen_blkif_ring* FUNC_3 (unsigned int,int,int ) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct xen_blkif *VAR_4)
{
 unsigned int VAR_5;

 VAR_4->rings = FUNC_3(VAR_4->nr_rings, sizeof(struct xen_blkif_ring),
          VAR_1);
 if (!VAR_4->rings)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_4->nr_rings; VAR_5++) {
  struct xen_blkif_ring *VAR_6 = &VAR_4->rings[VAR_5];

  FUNC_4(&VAR_6->blk_ring_lock);
  FUNC_2(&VAR_6->wq);
  FUNC_0(&VAR_6->pending_free);
  FUNC_0(&VAR_6->persistent_purge_list);
  FUNC_1(&VAR_6->persistent_purge_work, VAR_3);
  FUNC_4(&VAR_6->free_pages_lock);
  FUNC_0(&VAR_6->free_pages);

  FUNC_4(&VAR_6->pending_free_lock);
  FUNC_2(&VAR_6->pending_free_wq);
  FUNC_2(&VAR_6->shutdown_wq);
  VAR_6->blkif = VAR_4;
  VAR_6->st_print = VAR_2;
  VAR_6->active = 1;
 }

 return 0;
}
