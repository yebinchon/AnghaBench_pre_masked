
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct isert_conn {int conn; TYPE_2__* cm_id; } ;
struct iser_ctrl {int flags; int write_va; int write_stag; int read_va; int read_stag; } ;
struct iscsi_hdr {int flags; int itt; int opcode; } ;
struct iser_rx_desc {int in_use; int dma_addr; struct iser_ctrl iser_header; struct iscsi_hdr iscsi_header; } ;
struct ib_wc {scalar_t__ status; scalar_t__ byte_len; int wr_cqe; TYPE_1__* qp; } ;
struct ib_device {int dummy; } ;
struct ib_cq {int dummy; } ;
struct TYPE_4__ {struct ib_device* device; } ;
struct TYPE_3__ {struct isert_conn* qp_context; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

 scalar_t__ VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct iser_rx_desc* FUNC_2 (int ) ;
 int FUNC_3 (struct ib_device*,int ,int ,int ) ;
 int FUNC_4 (struct ib_device*,int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct ib_wc*,char*) ;
 int FUNC_9 (struct isert_conn*,struct iser_rx_desc*,int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_10 (char*,int) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static void
FUNC_12(struct ib_cq *VAR_7, struct ib_wc *VAR_8)
{
 struct isert_conn *VAR_9 = VAR_8->qp->qp_context;
 struct ib_device *VAR_10 = VAR_9->cm_id->device;
 struct iser_rx_desc *VAR_11 = FUNC_2(VAR_8->wr_cqe);
 struct iscsi_hdr *VAR_12 = &VAR_11->iscsi_header;
 struct iser_ctrl *VAR_13 = &VAR_11->iser_header;
 uint64_t VAR_14 = 0, VAR_15 = 0;
 uint32_t VAR_16 = 0, VAR_17 = 0;

 if (FUNC_11(VAR_8->status != VAR_1)) {
  FUNC_8(VAR_8, "recv");
  if (VAR_8->status != VAR_2)
   FUNC_5(VAR_9->conn, 0);
  return;
 }

 VAR_11->in_use = 1;

 FUNC_3(VAR_10, VAR_11->dma_addr,
   VAR_5, VAR_0);

 FUNC_6("DMA: 0x%llx, iSCSI opcode: 0x%02x, ITT: 0x%08x, flags: 0x%02x dlen: %d\n",
   VAR_11->dma_addr, VAR_12->opcode, VAR_12->itt, VAR_12->flags,
   (int)(VAR_8->byte_len - VAR_3));

 switch (VAR_13->flags & 0xF0) {
 case 129:
  if (VAR_13->flags & VAR_4) {
   VAR_16 = FUNC_0(VAR_13->read_stag);
   VAR_14 = FUNC_1(VAR_13->read_va);
   FUNC_6("ISER_RSV: read_stag: 0x%x read_va: 0x%llx\n",
      VAR_16, (unsigned long long)VAR_14);
  }
  if (VAR_13->flags & VAR_6) {
   VAR_17 = FUNC_0(VAR_13->write_stag);
   VAR_15 = FUNC_1(VAR_13->write_va);
   FUNC_6("ISER_WSV: write_stag: 0x%x write_va: 0x%llx\n",
      VAR_17, (unsigned long long)VAR_15);
  }

  FUNC_6("ISER ISCSI_CTRL PDU\n");
  break;
 case 128:
  FUNC_7("iSER Hello message\n");
  break;
 default:
  FUNC_10("Unknown iSER hdr flags: 0x%02x\n", VAR_13->flags);
  break;
 }

 FUNC_9(VAR_9, VAR_11,
   VAR_16, VAR_14, VAR_17, VAR_15);

 FUNC_4(VAR_10, VAR_11->dma_addr,
   VAR_5, VAR_0);
}
