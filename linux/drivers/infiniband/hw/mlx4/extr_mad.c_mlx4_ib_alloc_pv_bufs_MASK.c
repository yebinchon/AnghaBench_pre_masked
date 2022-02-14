
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx4_tunnel_mad {int dummy; } ;
struct mlx4_rcv_tunnel_mad {int dummy; } ;
struct mlx4_mad_snd_buf {int dummy; } ;
struct mlx4_mad_rcv_buf {int dummy; } ;
struct mlx4_ib_tun_tx_buf {int dummy; } ;
struct mlx4_ib_demux_pv_qp {int proxy_qpt; TYPE_2__* ring; TYPE_2__* tx_ring; scalar_t__ tx_ix_tail; scalar_t__ tx_ix_head; int tx_lock; } ;
struct mlx4_ib_demux_pv_ctx {int ib_dev; struct mlx4_ib_demux_pv_qp* qp; } ;
struct mlx4_ib_buf {int dummy; } ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;
struct TYPE_4__ {TYPE_2__* addr; void* map; } ;
struct TYPE_5__ {struct TYPE_5__* addr; void* map; TYPE_1__ buf; int * ah; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int ,TYPE_2__*,int,int ) ;
 scalar_t__ FUNC_1 (int ,void*) ;
 int FUNC_2 (int ,void*,int,int ) ;
 void* FUNC_3 (int,int,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct mlx4_ib_demux_pv_ctx *VAR_7,
     enum ib_qp_type VAR_8, int VAR_9)
{
 int VAR_10;
 struct mlx4_ib_demux_pv_qp *VAR_11;
 int VAR_12, VAR_13;

 if (VAR_8 > VAR_5)
  return -VAR_2;

 VAR_11 = &VAR_7->qp[VAR_8];

 VAR_11->ring = FUNC_3(VAR_6,
          sizeof(struct mlx4_ib_buf),
          VAR_4);
 if (!VAR_11->ring)
  return -VAR_3;

 VAR_11->tx_ring = FUNC_3(VAR_6,
      sizeof (struct mlx4_ib_tun_tx_buf),
      VAR_4);
 if (!VAR_11->tx_ring) {
  FUNC_4(VAR_11->ring);
  VAR_11->ring = ((void*)0);
  return -VAR_3;
 }

 if (VAR_9) {
  VAR_12 = sizeof (struct mlx4_tunnel_mad);
  VAR_13 = sizeof (struct mlx4_rcv_tunnel_mad);
 } else {
  VAR_12 = sizeof (struct mlx4_mad_rcv_buf);
  VAR_13 = sizeof (struct mlx4_mad_snd_buf);
 }

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  VAR_11->ring[VAR_10].addr = FUNC_5(VAR_12, VAR_4);
  if (!VAR_11->ring[VAR_10].addr)
   goto err;
  VAR_11->ring[VAR_10].map = FUNC_0(VAR_7->ib_dev,
       VAR_11->ring[VAR_10].addr,
       VAR_12,
       VAR_0);
  if (FUNC_1(VAR_7->ib_dev, VAR_11->ring[VAR_10].map)) {
   FUNC_4(VAR_11->ring[VAR_10].addr);
   goto err;
  }
 }

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  VAR_11->tx_ring[VAR_10].buf.addr =
   FUNC_5(VAR_13, VAR_4);
  if (!VAR_11->tx_ring[VAR_10].buf.addr)
   goto tx_err;
  VAR_11->tx_ring[VAR_10].buf.map =
   FUNC_0(VAR_7->ib_dev,
       VAR_11->tx_ring[VAR_10].buf.addr,
       VAR_13,
       VAR_1);
  if (FUNC_1(VAR_7->ib_dev,
      VAR_11->tx_ring[VAR_10].buf.map)) {
   FUNC_4(VAR_11->tx_ring[VAR_10].buf.addr);
   goto tx_err;
  }
  VAR_11->tx_ring[VAR_10].ah = ((void*)0);
 }
 FUNC_6(&VAR_11->tx_lock);
 VAR_11->tx_ix_head = 0;
 VAR_11->tx_ix_tail = 0;
 VAR_11->proxy_qpt = VAR_8;

 return 0;

tx_err:
 while (VAR_10 > 0) {
  --VAR_10;
  FUNC_2(VAR_7->ib_dev, VAR_11->tx_ring[VAR_10].buf.map,
        VAR_13, VAR_1);
  FUNC_4(VAR_11->tx_ring[VAR_10].buf.addr);
 }
 VAR_10 = VAR_6;
err:
 while (VAR_10 > 0) {
  --VAR_10;
  FUNC_2(VAR_7->ib_dev, VAR_11->ring[VAR_10].map,
        VAR_12, VAR_0);
  FUNC_4(VAR_11->ring[VAR_10].addr);
 }
 FUNC_4(VAR_11->tx_ring);
 VAR_11->tx_ring = ((void*)0);
 FUNC_4(VAR_11->ring);
 VAR_11->ring = ((void*)0);
 return -VAR_3;
}
