
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iser_tx_desc {int dummy; } ;
struct iscsi_task {TYPE_1__* hdr; } ;
struct ib_wc {scalar_t__ status; int wr_cqe; } ;
struct ib_cq {int dummy; } ;
struct TYPE_2__ {scalar_t__ itt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct iscsi_task*) ;
 int FUNC_1 (struct ib_wc*,char*) ;
 struct iser_tx_desc* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(struct ib_cq *VAR_2, struct ib_wc *VAR_3)
{
 struct iser_tx_desc *VAR_4 = FUNC_2(VAR_3->wr_cqe);
 struct iscsi_task *VAR_5;

 if (FUNC_3(VAR_3->status != VAR_0)) {
  FUNC_1(VAR_3, "control");
  return;
 }


 VAR_5 = (void *)VAR_4 - sizeof(struct iscsi_task);
 if (VAR_5->hdr->itt == VAR_1)
  FUNC_0(VAR_5);
}
