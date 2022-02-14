
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ib_sge {int dummy; } ;
struct ib_send_wr {int num_sge; struct ib_sge* sg_list; } ;
struct hns_roce_v2_wqe_data_seg {int dummy; } ;
struct TYPE_6__ {int sge_cnt; } ;
struct TYPE_5__ {int page_shift; } ;
struct TYPE_4__ {scalar_t__ qp_type; } ;
struct hns_roce_qp {TYPE_3__ sge; TYPE_2__ hr_buf; TYPE_1__ ibqp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct hns_roce_v2_wqe_data_seg* FUNC_0 (struct hns_roce_qp*,unsigned int) ;
 uintptr_t FUNC_1 (uintptr_t,int) ;
 int FUNC_2 (int ,struct ib_sge*) ;

__attribute__((used)) static void FUNC_3(struct hns_roce_qp *VAR_3, const struct ib_send_wr *VAR_4,
      unsigned int *VAR_5)
{
 struct hns_roce_v2_wqe_data_seg *VAR_6;
 struct ib_sge *VAR_7;
 int VAR_8 = 0;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;

 if (VAR_3->ibqp.qp_type == VAR_1 || VAR_3->ibqp.qp_type == VAR_2)
  VAR_8 = VAR_0;
 VAR_9 = VAR_4->num_sge - VAR_8;
 VAR_7 = VAR_4->sg_list + VAR_8;
 VAR_12 = VAR_3->hr_buf.page_shift;






 VAR_6 = FUNC_0(VAR_3, (*VAR_5) & (VAR_3->sge.sge_cnt - 1));
 VAR_10 = (FUNC_1((uintptr_t)VAR_6, 1 << VAR_12) -
        (uintptr_t)VAR_6) /
        sizeof(struct hns_roce_v2_wqe_data_seg);
 if (VAR_9 > VAR_10) {
  VAR_11 = VAR_9 - VAR_10;
  for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
   FUNC_2(VAR_6++, VAR_7 + VAR_13);
   (*VAR_5)++;
  }
  VAR_6 = FUNC_0(VAR_3,
        (*VAR_5) & (VAR_3->sge.sge_cnt - 1));
  for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
   FUNC_2(VAR_6++, VAR_7 + VAR_10 + VAR_13);
   (*VAR_5)++;
  }
 } else {
  for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
   FUNC_2(VAR_6++, VAR_7 + VAR_13);
   (*VAR_5)++;
  }
 }
}
