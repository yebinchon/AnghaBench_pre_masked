
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_vbd {scalar_t__ size; scalar_t__ feature_gnt_persistent; } ;
struct xen_blkif_ring {int waiting_reqs; int * xenblkd; int persistent_purge_work; scalar_t__ st_print; scalar_t__ next_lru; int shutdown_wq; int pending_free; int pending_free_wq; int wq; struct xen_blkif* blkif; } ;
struct xen_blkif {struct xen_vbd vbd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xen_blkif_ring*) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_3 ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (struct xen_blkif_ring*) ;
 int FUNC_6 (struct xen_blkif_ring*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct xen_blkif_ring*,int ) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (struct xen_vbd*) ;
 int FUNC_14 (int ,scalar_t__) ;
 unsigned long FUNC_15 (int ,int,unsigned long) ;
 int VAR_4 ;
 int FUNC_16 (struct xen_blkif*) ;

int FUNC_17(void *VAR_5)
{
 struct xen_blkif_ring *VAR_6 = VAR_5;
 struct xen_blkif *VAR_7 = VAR_6->blkif;
 struct xen_vbd *VAR_8 = &VAR_7->vbd;
 unsigned long VAR_9;
 int VAR_10;

 FUNC_7();
 while (!FUNC_2()) {
  if (FUNC_11())
   continue;
  if (FUNC_12(VAR_8->size != FUNC_13(VAR_8)))
   FUNC_16(VAR_7);

  VAR_9 = FUNC_4(VAR_1);

  VAR_9 = FUNC_15(
   VAR_6->wq,
   VAR_6->waiting_reqs || FUNC_2(),
   VAR_9);
  if (VAR_9 == 0)
   goto purge_gnt_list;
  VAR_9 = FUNC_15(
   VAR_6->pending_free_wq,
   !FUNC_3(&VAR_6->pending_free) ||
   FUNC_2(),
   VAR_9);
  if (VAR_9 == 0)
   goto purge_gnt_list;

  VAR_6->waiting_reqs = 0;
  FUNC_9();

  VAR_10 = FUNC_0(VAR_6);
  if (VAR_10 > 0)
   VAR_6->waiting_reqs = 1;
  if (VAR_10 == -VAR_0)
   FUNC_14(VAR_6->shutdown_wq,
       FUNC_2());

purge_gnt_list:
  if (VAR_7->vbd.feature_gnt_persistent &&
      FUNC_10(VAR_2, VAR_6->next_lru)) {
   FUNC_6(VAR_6);
   VAR_6->next_lru = VAR_2 + FUNC_4(VAR_1);
  }


  FUNC_8(VAR_6, VAR_4);

  if (VAR_3 && FUNC_10(VAR_2, VAR_6->st_print))
   FUNC_5(VAR_6);
 }


 FUNC_1(&VAR_6->persistent_purge_work);

 if (VAR_3)
  FUNC_5(VAR_6);

 VAR_6->xenblkd = ((void*)0);

 return 0;
}
