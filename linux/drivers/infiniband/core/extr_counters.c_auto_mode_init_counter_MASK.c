
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct auto_mode_param {int qp_type; } ;
struct TYPE_2__ {int mask; int mode; struct auto_mode_param param; } ;
struct rdma_counter {TYPE_1__ mode; } ;
struct ib_qp {int qp_type; } ;
typedef enum rdma_nl_counter_mask { ____Placeholder_rdma_nl_counter_mask } rdma_nl_counter_mask ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct rdma_counter *VAR_2,
       const struct ib_qp *VAR_3,
       enum rdma_nl_counter_mask VAR_4)
{
 struct auto_mode_param *VAR_5 = &VAR_2->mode.param;

 VAR_2->mode.mode = VAR_1;
 VAR_2->mode.mask = VAR_4;

 if (VAR_4 & VAR_0)
  VAR_5->qp_type = VAR_3->qp_type;
}
