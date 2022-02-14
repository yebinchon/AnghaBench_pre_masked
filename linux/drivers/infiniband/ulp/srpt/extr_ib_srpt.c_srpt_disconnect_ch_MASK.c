
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cm_id; } ;
struct TYPE_3__ {int cm_id; } ;
struct srpt_rdma_ch {TYPE_2__ ib_cm; TYPE_1__ rdma_cm; scalar_t__ using_rdma_cm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct srpt_rdma_ch*) ;
 int FUNC_4 (struct srpt_rdma_ch*,int ) ;

__attribute__((used)) static int FUNC_5(struct srpt_rdma_ch *VAR_2)
{
 int VAR_3;

 if (!FUNC_4(VAR_2, VAR_0))
  return -VAR_1;

 if (VAR_2->using_rdma_cm) {
  VAR_3 = FUNC_2(VAR_2->rdma_cm.cm_id);
 } else {
  VAR_3 = FUNC_1(VAR_2->ib_cm.cm_id, ((void*)0), 0);
  if (VAR_3 < 0)
   VAR_3 = FUNC_0(VAR_2->ib_cm.cm_id, ((void*)0), 0);
 }

 if (VAR_3 < 0 && FUNC_3(VAR_2))
  VAR_3 = 0;

 return VAR_3;
}
