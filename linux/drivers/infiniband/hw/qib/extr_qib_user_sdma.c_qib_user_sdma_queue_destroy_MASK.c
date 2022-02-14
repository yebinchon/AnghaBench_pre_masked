
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_user_sdma_queue {scalar_t__ refcount; int pkt_slab; int header_cache; struct qib_user_sdma_queue* sdma_rb_node; int node; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct qib_user_sdma_queue*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(struct qib_user_sdma_queue *VAR_1)
{
 if (!VAR_1)
  return;

 VAR_1->sdma_rb_node->refcount--;
 if (VAR_1->sdma_rb_node->refcount == 0) {
  FUNC_3(&VAR_1->sdma_rb_node->node, &VAR_0);
  FUNC_1(VAR_1->sdma_rb_node);
 }
 FUNC_0(VAR_1->header_cache);
 FUNC_2(VAR_1->pkt_slab);
 FUNC_1(VAR_1);
}
