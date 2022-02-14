
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_blkif_ring {int dummy; } ;
struct gntab_unmap_queue_data {unsigned int count; int pages; int * kunmap_ops; int unmap_ops; int done; struct pending_req* data; } ;
struct pending_req {struct gntab_unmap_queue_data gnttab_unmap_data; int unmap_pages; int unmap; int nr_segs; struct grant_page** segments; struct xen_blkif_ring* ring; } ;
struct grant_page {int dummy; } ;


 int FUNC_0 (struct gntab_unmap_queue_data*) ;
 int VAR_0 ;
 unsigned int FUNC_1 (struct xen_blkif_ring*,struct grant_page**,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct pending_req *VAR_1)
{
 struct gntab_unmap_queue_data* VAR_2 = &VAR_1->gnttab_unmap_data;
 struct xen_blkif_ring *VAR_3 = VAR_1->ring;
 struct grant_page **VAR_4 = VAR_1->segments;
 unsigned int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_4, VAR_1->nr_segs,
        VAR_1->unmap, VAR_1->unmap_pages);

 VAR_2->data = VAR_1;
 VAR_2->done = VAR_0;
 VAR_2->unmap_ops = VAR_1->unmap;
 VAR_2->kunmap_ops = ((void*)0);
 VAR_2->pages = VAR_1->unmap_pages;
 VAR_2->count = VAR_5;

 FUNC_0(&VAR_1->gnttab_unmap_data);
}
