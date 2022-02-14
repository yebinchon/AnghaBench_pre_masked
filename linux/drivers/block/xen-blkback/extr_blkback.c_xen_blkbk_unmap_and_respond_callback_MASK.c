
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_blkif_ring {int inflight; struct xen_blkif* blkif; } ;
struct xen_blkif {int drain_complete; int drain; } ;
struct pending_req {int status; int operation; int id; struct xen_blkif_ring* ring; } ;
struct gntab_unmap_queue_data {int count; int pages; scalar_t__ data; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct xen_blkif_ring*,struct pending_req*) ;
 int FUNC_5 (struct xen_blkif_ring*,int ,int ,int ) ;
 int FUNC_6 (struct xen_blkif_ring*,int ,int ) ;
 int FUNC_7 (struct xen_blkif*) ;

__attribute__((used)) static void FUNC_8(int VAR_0, struct gntab_unmap_queue_data *VAR_1)
{
 struct pending_req *VAR_2 = (struct pending_req *)(VAR_1->data);
 struct xen_blkif_ring *VAR_3 = VAR_2->ring;
 struct xen_blkif *VAR_4 = VAR_3->blkif;



 FUNC_0(VAR_0);

 FUNC_6(VAR_3, VAR_1->pages, VAR_1->count);
 FUNC_5(VAR_3, VAR_2->id,
        VAR_2->operation, VAR_2->status);
 FUNC_4(VAR_3, VAR_2);
 if (FUNC_1(&VAR_3->inflight) && FUNC_2(&VAR_4->drain)) {
  FUNC_3(&VAR_4->drain_complete);
 }
 FUNC_7(VAR_4);
}
