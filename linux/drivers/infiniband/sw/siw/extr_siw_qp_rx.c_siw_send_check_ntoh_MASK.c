
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct siw_wqe {size_t processed; scalar_t__ bytes; int wc_status; } ;
struct iwarp_send_inv {int inval_stag; int ddp_qn; int ddp_mo; int ddp_msn; } ;
struct TYPE_2__ {struct iwarp_send_inv send_inv; } ;
struct siw_rx_stream {size_t* ddp_msn; scalar_t__ fpdu_part_rem; void* inval_stag; TYPE_1__ hdr; } ;
struct siw_rx_fpdu {scalar_t__ pbl_idx; scalar_t__ sge_off; scalar_t__ sge_idx; scalar_t__ first_ddp_seg; struct siw_wqe wqe_active; } ;
typedef enum ddp_ecode { ____Placeholder_ddp_ecode } ddp_ecode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,size_t,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct siw_rx_stream*) ;
 int FUNC_4 (int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,int ,int ,int,int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct siw_rx_stream *VAR_9,
          struct siw_rx_fpdu *VAR_10)
{
 struct iwarp_send_inv *VAR_11 = &VAR_9->hdr.send_inv;
 struct siw_wqe *VAR_12 = &VAR_10->wqe_active;
 enum ddp_ecode VAR_13;

 u32 VAR_14 = FUNC_0(VAR_11->ddp_msn);
 u32 VAR_15 = FUNC_0(VAR_11->ddp_mo);
 u32 VAR_16 = FUNC_0(VAR_11->ddp_qn);

 if (FUNC_6(VAR_16 != VAR_6)) {
  FUNC_1("siw: [QP %u]: invalid ddp qn %d for send\n",
   FUNC_2(FUNC_3(VAR_9)), VAR_16);
  VAR_13 = VAR_3;
  goto error;
 }
 if (FUNC_6(VAR_14 != VAR_9->ddp_msn[VAR_6])) {
  FUNC_1("siw: [QP %u]: send msn: %u != %u\n",
   FUNC_2(FUNC_3(VAR_9)), VAR_14,
   VAR_9->ddp_msn[VAR_6]);
  VAR_13 = VAR_2;
  goto error;
 }
 if (FUNC_6(VAR_15 != VAR_12->processed)) {
  FUNC_1("siw: [QP %u], send mo: %u != %u\n",
   FUNC_2(FUNC_3(VAR_9)), VAR_15, VAR_12->processed);
  VAR_13 = VAR_0;
  goto error;
 }
 if (VAR_10->first_ddp_seg) {

  VAR_10->sge_idx = 0;
  VAR_10->sge_off = 0;
  VAR_10->pbl_idx = 0;


  VAR_9->inval_stag = FUNC_0(VAR_11->inval_stag);
 }
 if (FUNC_6(VAR_12->bytes < VAR_12->processed + VAR_9->fpdu_part_rem)) {
  FUNC_4(FUNC_3(VAR_9), "receive space short: %d - %d < %d\n",
      VAR_12->bytes, VAR_12->processed, VAR_9->fpdu_part_rem);
  VAR_12->wc_status = VAR_7;
  VAR_13 = VAR_1;
  goto error;
 }
 return 0;
error:
 FUNC_5(FUNC_3(VAR_9), VAR_8,
      VAR_4, VAR_13, 0);
 return -VAR_5;
}
