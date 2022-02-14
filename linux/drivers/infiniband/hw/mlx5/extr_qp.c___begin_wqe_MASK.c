
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct mlx5_wqe_ctrl_seg {int fm_ce_se; int imm; } ;
struct TYPE_4__ {int cur_post; int wqe_cnt; void* cur_edge; int fbc; } ;
struct TYPE_3__ {int send_cq; } ;
struct mlx5_ib_qp {int sq_signal_bits; TYPE_2__ sq; TYPE_1__ ibqp; } ;
struct ib_send_wr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (TYPE_2__*,int,int ) ;
 int FUNC_2 (struct ib_send_wr const*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct mlx5_ib_qp *VAR_3, void **VAR_4,
         struct mlx5_wqe_ctrl_seg **VAR_5,
         const struct ib_send_wr *VAR_6, unsigned int *VAR_7,
         int *VAR_8, void **VAR_9, int VAR_10,
         bool VAR_11, bool VAR_12)
{
 if (FUNC_3(FUNC_1(&VAR_3->sq, VAR_10, VAR_3->ibqp.send_cq)))
  return -VAR_0;

 *VAR_7 = VAR_3->sq.cur_post & (VAR_3->sq.wqe_cnt - 1);
 *VAR_4 = FUNC_0(&VAR_3->sq.fbc, *VAR_7);
 *VAR_5 = *VAR_4;
 *(uint32_t *)(*VAR_4 + 8) = 0;
 (*VAR_5)->imm = FUNC_2(VAR_6);
 (*VAR_5)->fm_ce_se = VAR_3->sq_signal_bits |
  (VAR_11 ? VAR_1 : 0) |
  (VAR_12 ? VAR_2 : 0);

 *VAR_4 += sizeof(**VAR_5);
 *VAR_8 = sizeof(**VAR_5) / 16;
 *VAR_9 = VAR_3->sq.cur_edge;

 return 0;
}
