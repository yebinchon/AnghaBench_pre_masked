
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_tunnel_mad {int dummy; } ;
struct mlx4_rcv_tunnel_mad {int dummy; } ;
struct mlx4_mad_snd_buf {int dummy; } ;
struct mlx4_mad_rcv_buf {int dummy; } ;
struct mlx4_ib_demux_pv_qp {TYPE_2__* ring; TYPE_2__* tx_ring; } ;
struct mlx4_ib_demux_pv_ctx {int ib_dev; struct mlx4_ib_demux_pv_qp* qp; } ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;
struct TYPE_3__ {TYPE_2__* addr; int map; } ;
struct TYPE_4__ {scalar_t__ ah; TYPE_1__ buf; struct TYPE_4__* addr; int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct mlx4_ib_demux_pv_ctx *VAR_4,
         enum ib_qp_type VAR_5, int VAR_6)
{
 int VAR_7;
 struct mlx4_ib_demux_pv_qp *VAR_8;
 int VAR_9, VAR_10;

 if (VAR_5 > VAR_2)
  return;

 VAR_8 = &VAR_4->qp[VAR_5];
 if (VAR_6) {
  VAR_9 = sizeof (struct mlx4_tunnel_mad);
  VAR_10 = sizeof (struct mlx4_rcv_tunnel_mad);
 } else {
  VAR_9 = sizeof (struct mlx4_mad_rcv_buf);
  VAR_10 = sizeof (struct mlx4_mad_snd_buf);
 }


 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  FUNC_0(VAR_4->ib_dev, VAR_8->ring[VAR_7].map,
        VAR_9, VAR_0);
  FUNC_1(VAR_8->ring[VAR_7].addr);
 }

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  FUNC_0(VAR_4->ib_dev, VAR_8->tx_ring[VAR_7].buf.map,
        VAR_10, VAR_1);
  FUNC_1(VAR_8->tx_ring[VAR_7].buf.addr);
  if (VAR_8->tx_ring[VAR_7].ah)
   FUNC_2(VAR_8->tx_ring[VAR_7].ah, 0);
 }
 FUNC_1(VAR_8->tx_ring);
 FUNC_1(VAR_8->ring);
}
