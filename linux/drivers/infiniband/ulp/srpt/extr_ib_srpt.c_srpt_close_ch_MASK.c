
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srpt_rdma_ch {int kref; int release_work; TYPE_1__* qp; int sess_name; } ;
struct TYPE_2__ {int qp_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct srpt_rdma_ch*) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (struct srpt_rdma_ch*,int ) ;
 int FUNC_8 (struct srpt_rdma_ch*) ;

__attribute__((used)) static bool FUNC_9(struct srpt_rdma_ch *VAR_3)
{
 int VAR_4;

 if (!FUNC_7(VAR_3, VAR_1)) {
  FUNC_3("%s: already closed\n", VAR_3->sess_name);
  return 0;
 }

 FUNC_1(&VAR_3->kref);

 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4 < 0)
  FUNC_4("%s-%d: changing queue pair into error state failed: %d\n",
         VAR_3->sess_name, VAR_3->qp->qp_num, VAR_4);

 VAR_4 = FUNC_8(VAR_3);
 if (VAR_4 < 0) {
  FUNC_4("%s-%d: queuing zero-length write failed: %d\n",
         VAR_3->sess_name, VAR_3->qp->qp_num, VAR_4);
  if (FUNC_7(VAR_3, VAR_0))
   FUNC_5(&VAR_3->release_work);
  else
   FUNC_0(1);
 }

 FUNC_2(&VAR_3->kref, VAR_2);

 return 1;
}
