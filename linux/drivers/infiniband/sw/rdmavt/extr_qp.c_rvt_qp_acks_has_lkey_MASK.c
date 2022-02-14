
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int device; } ;
struct rvt_qp {struct rvt_ack_entry* s_ack_queue; TYPE_1__ ibqp; } ;
struct rvt_dev_info {int dummy; } ;
struct TYPE_4__ {int mr; } ;
struct rvt_ack_entry {TYPE_2__ rdma_sge; } ;


 struct rvt_dev_info* FUNC_0 (int ) ;
 int FUNC_1 (struct rvt_dev_info*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static bool FUNC_3(struct rvt_qp *VAR_0, u32 VAR_1)
{
 int VAR_2;
 struct rvt_dev_info *VAR_3 = FUNC_0(VAR_0->ibqp.device);

 for (VAR_2 = 0; VAR_0->s_ack_queue && VAR_2 < FUNC_1(VAR_3); VAR_2++) {
  struct rvt_ack_entry *VAR_4 = &VAR_0->s_ack_queue[VAR_2];

  if (FUNC_2(VAR_4->rdma_sge.mr, VAR_1))
   return 1;
 }
 return 0;
}
