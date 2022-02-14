
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int wqe_cnt; scalar_t__ wqe_shift; } ;
struct TYPE_7__ {int wqe_cnt; int wqe_shift; } ;
struct mlx4_ib_qp {int buf_size; TYPE_4__ sq; TYPE_3__ rq; } ;
struct mlx4_ib_dev {TYPE_2__* dev; } ;
struct mlx4_ib_create_qp {int log_sq_bb_count; scalar_t__ log_sq_stride; } ;
struct TYPE_5__ {int max_wqes; int max_sq_desc_sz; } ;
struct TYPE_6__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct mlx4_ib_dev *VAR_2,
       struct mlx4_ib_qp *VAR_3,
       struct mlx4_ib_create_qp *VAR_4)
{

 if ((1 << VAR_4->log_sq_bb_count) > VAR_2->dev->caps.max_wqes ||
     VAR_4->log_sq_stride >
  FUNC_0(FUNC_1(VAR_2->dev->caps.max_sq_desc_sz)) ||
     VAR_4->log_sq_stride < VAR_1)
  return -VAR_0;

 VAR_3->sq.wqe_cnt = 1 << VAR_4->log_sq_bb_count;
 VAR_3->sq.wqe_shift = VAR_4->log_sq_stride;

 VAR_3->buf_size = (VAR_3->rq.wqe_cnt << VAR_3->rq.wqe_shift) +
  (VAR_3->sq.wqe_cnt << VAR_3->sq.wqe_shift);

 return 0;
}
