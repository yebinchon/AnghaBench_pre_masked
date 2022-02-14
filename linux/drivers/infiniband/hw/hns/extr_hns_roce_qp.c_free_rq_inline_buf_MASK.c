
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* wqe_list; } ;
struct hns_roce_qp {TYPE_1__ rq_inl_buf; } ;
struct TYPE_4__ {struct TYPE_4__* sg_list; } ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(struct hns_roce_qp *VAR_0)
{
 FUNC_0(VAR_0->rq_inl_buf.wqe_list[0].sg_list);
 FUNC_0(VAR_0->rq_inl_buf.wqe_list);
}
