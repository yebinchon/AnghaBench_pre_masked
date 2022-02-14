
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srp_target_port {scalar_t__ state; int ch_count; int scsi_host; TYPE_1__* srp_host; int list; struct srp_rdma_ch* ch; int rport; int tl_err_work; int net; } ;
struct srp_rdma_ch {int dummy; } ;
struct TYPE_2__ {int target_lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct srp_rdma_ch*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct srp_target_port*) ;
 int FUNC_11 (struct srp_target_port*,struct srp_rdma_ch*) ;
 int FUNC_12 (struct srp_target_port*,struct srp_rdma_ch*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static void FUNC_17(struct srp_target_port *VAR_2)
{
 struct srp_rdma_ch *VAR_3;
 int VAR_4;

 FUNC_0(VAR_2->state != VAR_1);

 FUNC_9(VAR_2->scsi_host);
 FUNC_14(VAR_2->rport);
 FUNC_13(VAR_2->scsi_host);
 FUNC_6(VAR_2->scsi_host);
 FUNC_16(VAR_2->rport);
 FUNC_10(VAR_2);
 FUNC_3(VAR_0, VAR_2->net);
 for (VAR_4 = 0; VAR_4 < VAR_2->ch_count; VAR_4++) {
  VAR_3 = &VAR_2->ch[VAR_4];
  FUNC_11(VAR_2, VAR_3);
 }
 FUNC_1(&VAR_2->tl_err_work);
 FUNC_15(VAR_2->rport);
 for (VAR_4 = 0; VAR_4 < VAR_2->ch_count; VAR_4++) {
  VAR_3 = &VAR_2->ch[VAR_4];
  FUNC_12(VAR_2, VAR_3);
 }
 FUNC_2(VAR_2->ch);
 VAR_2->ch = ((void*)0);

 FUNC_7(&VAR_2->srp_host->target_lock);
 FUNC_4(&VAR_2->list);
 FUNC_8(&VAR_2->srp_host->target_lock);

 FUNC_5(VAR_2->scsi_host);
}
