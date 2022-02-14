
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ max_qp_wr; scalar_t__ max_send_sge; scalar_t__ max_recv_sge; } ;
struct rxe_dev {scalar_t__ max_inline_data; TYPE_1__ attr; } ;
struct ib_qp_cap {scalar_t__ max_send_wr; scalar_t__ max_send_sge; scalar_t__ max_recv_wr; scalar_t__ max_recv_sge; scalar_t__ max_inline_data; } ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct rxe_dev *VAR_1, struct ib_qp_cap *VAR_2,
     int VAR_3)
{
 if (VAR_2->max_send_wr > VAR_1->attr.max_qp_wr) {
  FUNC_0("invalid send wr = %d > %d\n",
   VAR_2->max_send_wr, VAR_1->attr.max_qp_wr);
  goto err1;
 }

 if (VAR_2->max_send_sge > VAR_1->attr.max_send_sge) {
  FUNC_0("invalid send sge = %d > %d\n",
   VAR_2->max_send_sge, VAR_1->attr.max_send_sge);
  goto err1;
 }

 if (!VAR_3) {
  if (VAR_2->max_recv_wr > VAR_1->attr.max_qp_wr) {
   FUNC_0("invalid recv wr = %d > %d\n",
    VAR_2->max_recv_wr, VAR_1->attr.max_qp_wr);
   goto err1;
  }

  if (VAR_2->max_recv_sge > VAR_1->attr.max_recv_sge) {
   FUNC_0("invalid recv sge = %d > %d\n",
    VAR_2->max_recv_sge, VAR_1->attr.max_recv_sge);
   goto err1;
  }
 }

 if (VAR_2->max_inline_data > VAR_1->max_inline_data) {
  FUNC_0("invalid max inline data = %d > %d\n",
   VAR_2->max_inline_data, VAR_1->max_inline_data);
  goto err1;
 }

 return 0;

err1:
 return -VAR_0;
}
