
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int fence_size; } ;
struct mlx4_wqe_ctrl_seg {TYPE_2__ qpn_vlan; } ;
struct TYPE_3__ {int wqe_cnt; } ;
struct mlx4_ib_qp {TYPE_1__ sq; } ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 void* FUNC_1 (struct mlx4_ib_qp*,int) ;

__attribute__((used)) static void FUNC_2(struct mlx4_ib_qp *VAR_0, int VAR_1)
{
 __be32 *VAR_2;
 int VAR_3;
 int VAR_4;
 void *VAR_5;
 struct mlx4_wqe_ctrl_seg *VAR_6;

 VAR_5 = FUNC_1(VAR_0, VAR_1 & (VAR_0->sq.wqe_cnt - 1));
 VAR_6 = (struct mlx4_wqe_ctrl_seg *)VAR_5;
 VAR_4 = (VAR_6->qpn_vlan.fence_size & 0x3f) << 4;
 for (VAR_3 = 64; VAR_3 < VAR_4; VAR_3 += 64) {
  VAR_2 = VAR_5 + VAR_3;
  *VAR_2 = FUNC_0(0xffffffff);
 }
}
