
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int max_recv_sge; } ;
struct ib_qp_init_attr {TYPE_1__ cap; } ;
struct hns_roce_rinl_wqe {int * sg_list; } ;
struct hns_roce_rinl_sge {int dummy; } ;
struct TYPE_6__ {int wqe_cnt; struct hns_roce_rinl_wqe* wqe_list; } ;
struct TYPE_5__ {int wqe_cnt; } ;
struct hns_roce_qp {TYPE_3__ rq_inl_buf; TYPE_2__ rq; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct hns_roce_rinl_wqe*) ;

__attribute__((used)) static int FUNC_2(struct hns_roce_qp *VAR_2,
          struct ib_qp_init_attr *VAR_3)
{
 u32 VAR_4 = VAR_3->cap.max_recv_sge;
 struct hns_roce_rinl_wqe *VAR_5;
 u32 VAR_6 = VAR_2->rq.wqe_cnt;
 int VAR_7;


 VAR_5 = FUNC_0(VAR_6, sizeof(struct hns_roce_rinl_wqe),
      VAR_1);

 if (!VAR_5)
  goto err;


 VAR_5[0].sg_list = FUNC_0(VAR_6, (VAR_4 *
          sizeof(struct hns_roce_rinl_sge)),
          VAR_1);
 if (!VAR_5[0].sg_list)
  goto err_wqe_list;


 for (VAR_7 = 1; VAR_7 < VAR_6; VAR_7++)
  VAR_5[VAR_7].sg_list = &VAR_5[0].sg_list[VAR_7 * VAR_4];

 VAR_2->rq_inl_buf.wqe_list = VAR_5;
 VAR_2->rq_inl_buf.wqe_cnt = VAR_6;

 return 0;

err_wqe_list:
 FUNC_1(VAR_5);

err:
 return -VAR_0;
}
