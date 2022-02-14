
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_manager {int priv_queue; int lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct packet_manager *VAR_0)
{
 FUNC_1(&VAR_0->lock);
 FUNC_0(VAR_0->priv_queue);
}
