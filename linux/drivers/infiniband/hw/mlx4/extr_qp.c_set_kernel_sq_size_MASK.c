
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx4_wqe_inline_seg {int dummy; } ;
struct mlx4_wqe_data_seg {int dummy; } ;
struct TYPE_6__ {int wqe_shift; int wqe_cnt; int max_gs; int offset; int max_post; } ;
struct TYPE_5__ {int wqe_cnt; int wqe_shift; int offset; } ;
struct mlx4_ib_qp {int sq_spare_wqes; int buf_size; TYPE_2__ sq; TYPE_1__ rq; int flags; } ;
struct mlx4_ib_dev {TYPE_4__* dev; } ;
struct ib_qp_cap {int max_send_wr; int max_send_sge; int max_inline_data; } ;
typedef enum mlx4_ib_qp_type { ____Placeholder_mlx4_ib_qp_type } mlx4_ib_qp_type ;
struct TYPE_7__ {int max_wqes; int max_sq_sg; int max_rq_sg; int max_sq_desc_sz; } ;
struct TYPE_8__ {TYPE_3__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct mlx4_ib_dev *VAR_6, struct ib_qp_cap *VAR_7,
         enum mlx4_ib_qp_type VAR_8, struct mlx4_ib_qp *VAR_9)
{
 int VAR_10;


 if (VAR_7->max_send_wr > (VAR_6->dev->caps.max_wqes - VAR_5) ||
     VAR_7->max_send_sge > FUNC_3(VAR_6->dev->caps.max_sq_sg, VAR_6->dev->caps.max_rq_sg) ||
     VAR_7->max_inline_data + FUNC_5(VAR_8, VAR_9->flags) +
     sizeof (struct mlx4_wqe_inline_seg) > VAR_6->dev->caps.max_sq_desc_sz)
  return -VAR_0;





 if ((VAR_8 == VAR_3 || VAR_8 == VAR_1 ||
      VAR_8 & (VAR_2 | VAR_4)) &&
     VAR_7->max_send_sge + 2 > VAR_6->dev->caps.max_sq_sg)
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_7->max_send_sge * sizeof (struct mlx4_wqe_data_seg),
  VAR_7->max_inline_data + sizeof (struct mlx4_wqe_inline_seg)) +
  FUNC_5(VAR_8, VAR_9->flags);

 if (VAR_10 > VAR_6->dev->caps.max_sq_desc_sz)
  return -VAR_0;

 VAR_9->sq.wqe_shift = FUNC_1(FUNC_4(VAR_10));





 VAR_9->sq_spare_wqes = FUNC_0(VAR_9->sq.wqe_shift);
 VAR_9->sq.wqe_cnt = FUNC_4(VAR_7->max_send_wr +
         VAR_9->sq_spare_wqes);

 VAR_9->sq.max_gs =
  (FUNC_3(VAR_6->dev->caps.max_sq_desc_sz,
       (1 << VAR_9->sq.wqe_shift)) -
   FUNC_5(VAR_8, VAR_9->flags)) /
  sizeof (struct mlx4_wqe_data_seg);

 VAR_9->buf_size = (VAR_9->rq.wqe_cnt << VAR_9->rq.wqe_shift) +
  (VAR_9->sq.wqe_cnt << VAR_9->sq.wqe_shift);
 if (VAR_9->rq.wqe_shift > VAR_9->sq.wqe_shift) {
  VAR_9->rq.offset = 0;
  VAR_9->sq.offset = VAR_9->rq.wqe_cnt << VAR_9->rq.wqe_shift;
 } else {
  VAR_9->rq.offset = VAR_9->sq.wqe_cnt << VAR_9->sq.wqe_shift;
  VAR_9->sq.offset = 0;
 }

 VAR_7->max_send_wr = VAR_9->sq.max_post =
  VAR_9->sq.wqe_cnt - VAR_9->sq_spare_wqes;
 VAR_7->max_send_sge = FUNC_3(VAR_9->sq.max_gs,
    FUNC_3(VAR_6->dev->caps.max_sq_sg,
        VAR_6->dev->caps.max_rq_sg));

 VAR_7->max_inline_data = 0;

 return 0;
}
