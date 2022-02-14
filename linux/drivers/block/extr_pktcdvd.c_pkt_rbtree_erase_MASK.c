
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pktcdvd_device {scalar_t__ bio_queue_size; int rb_pool; int bio_queue; } ;
struct pkt_rb_node {int rb_node; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct pkt_rb_node*,int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct pktcdvd_device *VAR_0, struct pkt_rb_node *VAR_1)
{
 FUNC_2(&VAR_1->rb_node, &VAR_0->bio_queue);
 FUNC_1(VAR_1, &VAR_0->rb_pool);
 VAR_0->bio_queue_size--;
 FUNC_0(VAR_0->bio_queue_size < 0);
}
