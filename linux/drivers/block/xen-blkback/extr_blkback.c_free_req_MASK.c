
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_blkif_ring {int pending_free_wq; int pending_free_lock; int pending_free; } ;
struct pending_req {int free_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct xen_blkif_ring *VAR_0, struct pending_req *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 FUNC_2(&VAR_0->pending_free_lock, VAR_2);
 VAR_3 = FUNC_1(&VAR_0->pending_free);
 FUNC_0(&VAR_1->free_list, &VAR_0->pending_free);
 FUNC_3(&VAR_0->pending_free_lock, VAR_2);
 if (VAR_3)
  FUNC_4(&VAR_0->pending_free_wq);
}
