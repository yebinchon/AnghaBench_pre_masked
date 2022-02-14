
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct srp_target_port {int queue_size; int srp_host; } ;
struct srp_rdma_ch {TYPE_1__** rx_ring; TYPE_1__** tx_ring; int free_tx; int max_it_iu_len; int max_ti_iu_len; struct srp_target_port* target; } ;
struct TYPE_3__ {int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int,int,int ) ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (int *,int *) ;
 void* FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct srp_rdma_ch *VAR_4)
{
 struct srp_target_port *VAR_5 = VAR_4->target;
 int VAR_6;

 VAR_4->rx_ring = FUNC_0(VAR_5->queue_size, sizeof(*VAR_4->rx_ring),
         VAR_3);
 if (!VAR_4->rx_ring)
  goto err_no_ring;
 VAR_4->tx_ring = FUNC_0(VAR_5->queue_size, sizeof(*VAR_4->tx_ring),
         VAR_3);
 if (!VAR_4->tx_ring)
  goto err_no_ring;

 for (VAR_6 = 0; VAR_6 < VAR_5->queue_size; ++VAR_6) {
  VAR_4->rx_ring[VAR_6] = FUNC_3(VAR_5->srp_host,
           VAR_4->max_ti_iu_len,
           VAR_3, VAR_0);
  if (!VAR_4->rx_ring[VAR_6])
   goto err;
 }

 for (VAR_6 = 0; VAR_6 < VAR_5->queue_size; ++VAR_6) {
  VAR_4->tx_ring[VAR_6] = FUNC_3(VAR_5->srp_host,
           VAR_4->max_it_iu_len,
           VAR_3, VAR_1);
  if (!VAR_4->tx_ring[VAR_6])
   goto err;

  FUNC_2(&VAR_4->tx_ring[VAR_6]->list, &VAR_4->free_tx);
 }

 return 0;

err:
 for (VAR_6 = 0; VAR_6 < VAR_5->queue_size; ++VAR_6) {
  FUNC_4(VAR_5->srp_host, VAR_4->rx_ring[VAR_6]);
  FUNC_4(VAR_5->srp_host, VAR_4->tx_ring[VAR_6]);
 }


err_no_ring:
 FUNC_1(VAR_4->tx_ring);
 VAR_4->tx_ring = ((void*)0);
 FUNC_1(VAR_4->rx_ring);
 VAR_4->rx_ring = ((void*)0);

 return -VAR_2;
}
