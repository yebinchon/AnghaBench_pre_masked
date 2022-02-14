
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int rb_node; } ;
struct TYPE_4__ {int node; int pfn_hi; int pfn_lo; } ;
struct iova_domain {unsigned long granule; unsigned long start_pfn; unsigned long dma_32bit_pfn; unsigned long max32_alloc_size; TYPE_2__ rbroot; TYPE_1__ anchor; int * fq; int * flush_cb; int * cached32_node; int * cached_node; int iova_rbtree_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (struct iova_domain*) ;
 int FUNC_2 (struct iova_domain*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct iova_domain *VAR_3, unsigned long VAR_4,
 unsigned long VAR_5)
{





 FUNC_0((VAR_4 > VAR_1) || !FUNC_3(VAR_4));

 FUNC_6(&VAR_3->iova_rbtree_lock);
 VAR_3->rbroot = VAR_2;
 VAR_3->cached_node = &VAR_3->anchor.node;
 VAR_3->cached32_node = &VAR_3->anchor.node;
 VAR_3->granule = VAR_4;
 VAR_3->start_pfn = VAR_5;
 VAR_3->dma_32bit_pfn = 1UL << (32 - FUNC_2(VAR_3));
 VAR_3->max32_alloc_size = VAR_3->dma_32bit_pfn;
 VAR_3->flush_cb = ((void*)0);
 VAR_3->fq = ((void*)0);
 VAR_3->anchor.pfn_lo = VAR_3->anchor.pfn_hi = VAR_0;
 FUNC_5(&VAR_3->anchor.node, ((void*)0), &VAR_3->rbroot.rb_node);
 FUNC_4(&VAR_3->anchor.node, &VAR_3->rbroot);
 FUNC_1(VAR_3);
}
