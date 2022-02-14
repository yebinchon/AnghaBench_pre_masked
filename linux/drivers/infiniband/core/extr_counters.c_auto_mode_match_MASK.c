
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int task; } ;
struct auto_mode_param {scalar_t__ qp_type; } ;
struct TYPE_4__ {struct auto_mode_param param; } ;
struct rdma_counter {TYPE_2__ res; TYPE_1__ mode; } ;
struct TYPE_6__ {int task; } ;
struct ib_qp {scalar_t__ qp_type; TYPE_3__ res; } ;
typedef enum rdma_nl_counter_mask { ____Placeholder_rdma_nl_counter_mask } rdma_nl_counter_mask ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct ib_qp *VAR_1, struct rdma_counter *VAR_2,
       enum rdma_nl_counter_mask VAR_3)
{
 struct auto_mode_param *VAR_4 = &VAR_2->mode.param;
 bool VAR_5 = 1;

 if (!FUNC_0(&VAR_1->res))
  return 0;


 if (FUNC_1(VAR_2->res.task) != FUNC_1(VAR_1->res.task))
  return 0;

 if (VAR_3 & VAR_0)
  VAR_5 &= (VAR_4->qp_type == VAR_1->qp_type);

 return VAR_5;
}
