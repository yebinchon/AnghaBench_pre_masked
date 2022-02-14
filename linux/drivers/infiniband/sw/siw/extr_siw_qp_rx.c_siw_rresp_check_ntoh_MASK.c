
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_6__ {TYPE_2__* sge; } ;
struct siw_wqe {unsigned long long processed; unsigned long long bytes; TYPE_3__ sqe; } ;
struct iwarp_rdma_rresp {int sink_to; int sink_stag; } ;
struct TYPE_4__ {struct iwarp_rdma_rresp rresp; } ;
struct siw_rx_stream {scalar_t__ ddp_stag; scalar_t__ ddp_to; unsigned long long fpdu_part_rem; TYPE_1__ hdr; } ;
struct siw_rx_fpdu {int more_ddp_segs; scalar_t__ pbl_idx; scalar_t__ first_ddp_seg; struct siw_wqe wqe_active; } ;
typedef enum ddp_ecode { ____Placeholder_ddp_ecode } ddp_ecode ;
struct TYPE_5__ {scalar_t__ lkey; scalar_t__ laddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,unsigned long long,unsigned long long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct siw_rx_stream*) ;
 int FUNC_5 (int ,int ,int ,int,int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct siw_rx_stream *VAR_5,
    struct siw_rx_fpdu *VAR_6)
{
 struct iwarp_rdma_rresp *VAR_7 = &VAR_5->hdr.rresp;
 struct siw_wqe *VAR_8 = &VAR_6->wqe_active;
 enum ddp_ecode VAR_9;

 u32 VAR_10 = FUNC_0(VAR_7->sink_stag);
 u64 VAR_11 = FUNC_1(VAR_7->sink_to);

 if (VAR_6->first_ddp_seg) {
  VAR_5->ddp_stag = VAR_8->sqe.sge[0].lkey;
  VAR_5->ddp_to = VAR_8->sqe.sge[0].laddr;
  VAR_6->pbl_idx = 0;
 }
 if (FUNC_6(VAR_5->ddp_stag != VAR_10)) {
  FUNC_2("siw: [QP %u]: rresp stag: %08x != %08x\n",
   FUNC_3(FUNC_4(VAR_5)), VAR_10, VAR_5->ddp_stag);
  VAR_9 = VAR_1;
  goto error;
 }
 if (FUNC_6(VAR_5->ddp_to != VAR_11)) {
  FUNC_2("siw: [QP %u]: rresp off: %016llx != %016llx\n",
   FUNC_3(FUNC_4(VAR_5)), (unsigned long long)VAR_11,
   (unsigned long long)VAR_5->ddp_to);
  VAR_9 = VAR_0;
  goto error;
 }
 if (FUNC_6(!VAR_6->more_ddp_segs &&
       (VAR_8->processed + VAR_5->fpdu_part_rem != VAR_8->bytes))) {
  FUNC_2("siw: [QP %u]: rresp len: %d != %d\n",
   FUNC_3(FUNC_4(VAR_5)),
   VAR_8->processed + VAR_5->fpdu_part_rem, VAR_8->bytes);
  VAR_9 = VAR_0;
  goto error;
 }
 return 0;
error:
 FUNC_5(FUNC_4(VAR_5), VAR_4,
      VAR_2, VAR_9, 0);
 return -VAR_3;
}
