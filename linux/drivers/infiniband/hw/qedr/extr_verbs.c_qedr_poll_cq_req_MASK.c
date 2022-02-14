
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cqe_requester {int status; int sq_cons; } ;
struct qedr_qp {int icid; int state; } ;
struct qedr_dev {int dummy; } ;
struct qedr_cq {int icid; } ;
struct ib_wc {int dummy; } ;
typedef enum ib_wc_status { ____Placeholder_ib_wc_status } ib_wc_status ;


 int FUNC_0 (struct qedr_dev*,int ,char*,int ,int ) ;
 int FUNC_1 (struct qedr_dev*,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct qedr_dev*,struct qedr_qp*,struct qedr_cq*,int,struct ib_wc*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct qedr_dev *VAR_15,
       struct qedr_qp *VAR_16, struct qedr_cq *VAR_17,
       int VAR_18, struct ib_wc *VAR_19,
       struct rdma_cqe_requester *VAR_20)
{
 int VAR_21 = 0;

 switch (VAR_20->status) {
 case 134:
  VAR_21 = FUNC_2(VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20->sq_cons,
      VAR_11, 0);
  break;
 case 128:
  if (VAR_16->state != VAR_14)
   FUNC_0(VAR_15, VAR_13,
     "Error: POLL CQ with RDMA_CQE_REQ_STS_WORK_REQUEST_FLUSHED_ERR. CQ icid=0x%x, QP icid=0x%x\n",
     VAR_17->icid, VAR_16->icid);
  VAR_21 = FUNC_2(VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20->sq_cons,
      VAR_12, 1);
  break;
 default:

  VAR_16->state = VAR_14;
  VAR_21 = FUNC_2(VAR_15, VAR_16, VAR_17, VAR_18, VAR_19,
      VAR_20->sq_cons - 1, VAR_11, 0);
  VAR_19 += VAR_21;

  if (VAR_21 < VAR_18) {
   enum ib_wc_status VAR_22;

   switch (VAR_20->status) {
   case 139:
    FUNC_1(VAR_15,
           "Error: POLL CQ with RDMA_CQE_REQ_STS_BAD_RESPONSE_ERR. CQ icid=0x%x, QP icid=0x%x\n",
           VAR_17->icid, VAR_16->icid);
    VAR_22 = VAR_0;
    break;
   case 138:
    FUNC_1(VAR_15,
           "Error: POLL CQ with RDMA_CQE_REQ_STS_LOCAL_LENGTH_ERR. CQ icid=0x%x, QP icid=0x%x\n",
           VAR_17->icid, VAR_16->icid);
    VAR_22 = VAR_2;
    break;
   case 136:
    FUNC_1(VAR_15,
           "Error: POLL CQ with RDMA_CQE_REQ_STS_LOCAL_QP_OPERATION_ERR. CQ icid=0x%x, QP icid=0x%x\n",
           VAR_17->icid, VAR_16->icid);
    VAR_22 = VAR_4;
    break;
   case 137:
    FUNC_1(VAR_15,
           "Error: POLL CQ with RDMA_CQE_REQ_STS_LOCAL_PROTECTION_ERR. CQ icid=0x%x, QP icid=0x%x\n",
           VAR_17->icid, VAR_16->icid);
    VAR_22 = VAR_3;
    break;
   case 135:
    FUNC_1(VAR_15,
           "Error: POLL CQ with RDMA_CQE_REQ_STS_MEMORY_MGT_OPERATION_ERR. CQ icid=0x%x, QP icid=0x%x\n",
           VAR_17->icid, VAR_16->icid);
    VAR_22 = VAR_5;
    break;
   case 132:
    FUNC_1(VAR_15,
           "Error: POLL CQ with RDMA_CQE_REQ_STS_REMOTE_INVALID_REQUEST_ERR. CQ icid=0x%x, QP icid=0x%x\n",
           VAR_17->icid, VAR_16->icid);
    VAR_22 = VAR_7;
    break;
   case 133:
    FUNC_1(VAR_15,
           "Error: POLL CQ with RDMA_CQE_REQ_STS_REMOTE_ACCESS_ERR. CQ icid=0x%x, QP icid=0x%x\n",
           VAR_17->icid, VAR_16->icid);
    VAR_22 = VAR_6;
    break;
   case 131:
    FUNC_1(VAR_15,
           "Error: POLL CQ with RDMA_CQE_REQ_STS_REMOTE_OPERATION_ERR. CQ icid=0x%x, QP icid=0x%x\n",
           VAR_17->icid, VAR_16->icid);
    VAR_22 = VAR_8;
    break;
   case 130:
    FUNC_1(VAR_15,
           "Error: POLL CQ with RDMA_CQE_REQ_STS_RNR_NAK_RETRY_CNT_ERR. CQ icid=0x%x, QP icid=0x%x\n",
           VAR_17->icid, VAR_16->icid);
    VAR_22 = VAR_10;
    break;
   case 129:
    FUNC_1(VAR_15,
           "Error: POLL CQ with ROCE_CQE_REQ_STS_TRANSPORT_RETRY_CNT_ERR. CQ icid=0x%x, QP icid=0x%x\n",
           VAR_17->icid, VAR_16->icid);
    VAR_22 = VAR_9;
    break;
   default:
    FUNC_1(VAR_15,
           "Error: POLL CQ with IB_WC_GENERAL_ERR. CQ icid=0x%x, QP icid=0x%x\n",
           VAR_17->icid, VAR_16->icid);
    VAR_22 = VAR_1;
   }
   VAR_21 += FUNC_2(VAR_15, VAR_16, VAR_17, 1, VAR_19, VAR_20->sq_cons,
        VAR_22, 1);
  }
 }

 return VAR_21;
}
