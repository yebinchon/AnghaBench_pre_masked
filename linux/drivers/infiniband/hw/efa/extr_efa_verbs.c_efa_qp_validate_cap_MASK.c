
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ max_send_wr; scalar_t__ max_recv_wr; scalar_t__ max_send_sge; scalar_t__ max_recv_sge; scalar_t__ max_inline_data; } ;
struct ib_qp_init_attr {TYPE_1__ cap; } ;
struct TYPE_4__ {scalar_t__ max_sq_depth; scalar_t__ max_rq_depth; scalar_t__ max_sq_sge; scalar_t__ max_rq_sge; scalar_t__ inline_buf_size; } ;
struct efa_dev {TYPE_2__ dev_attr; int ibdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct efa_dev *VAR_1,
          struct ib_qp_init_attr *VAR_2)
{
 if (VAR_2->cap.max_send_wr > VAR_1->dev_attr.max_sq_depth) {
  FUNC_0(&VAR_1->ibdev,
     "qp: requested send wr[%u] exceeds the max[%u]\n",
     VAR_2->cap.max_send_wr,
     VAR_1->dev_attr.max_sq_depth);
  return -VAR_0;
 }
 if (VAR_2->cap.max_recv_wr > VAR_1->dev_attr.max_rq_depth) {
  FUNC_0(&VAR_1->ibdev,
     "qp: requested receive wr[%u] exceeds the max[%u]\n",
     VAR_2->cap.max_recv_wr,
     VAR_1->dev_attr.max_rq_depth);
  return -VAR_0;
 }
 if (VAR_2->cap.max_send_sge > VAR_1->dev_attr.max_sq_sge) {
  FUNC_0(&VAR_1->ibdev,
     "qp: requested sge send[%u] exceeds the max[%u]\n",
     VAR_2->cap.max_send_sge, VAR_1->dev_attr.max_sq_sge);
  return -VAR_0;
 }
 if (VAR_2->cap.max_recv_sge > VAR_1->dev_attr.max_rq_sge) {
  FUNC_0(&VAR_1->ibdev,
     "qp: requested sge recv[%u] exceeds the max[%u]\n",
     VAR_2->cap.max_recv_sge, VAR_1->dev_attr.max_rq_sge);
  return -VAR_0;
 }
 if (VAR_2->cap.max_inline_data > VAR_1->dev_attr.inline_buf_size) {
  FUNC_0(&VAR_1->ibdev,
     "qp: requested inline data[%u] exceeds the max[%u]\n",
     VAR_2->cap.max_inline_data,
     VAR_1->dev_attr.inline_buf_size);
  return -VAR_0;
 }

 return 0;
}
