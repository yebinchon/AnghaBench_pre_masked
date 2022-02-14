
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct regpair {int lo; scalar_t__ hi; } ;
struct ib_srq {int srq_context; int (* event_handler ) (struct ib_event*,int ) ;int device; } ;
struct qedr_srq {struct ib_srq ibsrq; } ;
struct ib_qp {int qp_context; int (* event_handler ) (struct ib_event*,int ) ;int device; } ;
struct ib_cq {int cq_context; int (* event_handler ) (struct ib_event*,int ) ;int device; } ;
struct qedr_qp {struct ib_qp ibqp; struct ib_cq ibcq; } ;
struct qedr_dev {int srqs; } ;
struct qedr_cq {struct ib_qp ibqp; struct ib_cq ibcq; } ;
struct TYPE_2__ {struct ib_srq* srq; struct ib_qp* qp; struct ib_cq* cq; } ;
struct ib_event {TYPE_1__ element; int device; void* event; } ;


 int FUNC_0 (struct qedr_dev*,char*,int,...) ;
 int FUNC_1 (struct qedr_dev*,char*,int,...) ;

 int VAR_0 ;


 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 scalar_t__ FUNC_2 (struct qedr_dev*) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (struct ib_event*,int ) ;
 int FUNC_5 (struct ib_event*,int ) ;
 int FUNC_6 (struct ib_event*,int ) ;
 struct qedr_srq* FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_10(void *VAR_8, u8 VAR_9, void *VAR_10)
{




 struct qedr_dev *VAR_11 = (struct qedr_dev *)VAR_8;
 struct regpair *VAR_12 = (struct regpair *)VAR_10;
 u64 VAR_13 = ((u64) VAR_12->hi << 32) + VAR_12->lo;
 u8 VAR_14 = 0;
 struct ib_event VAR_15;
 struct ib_srq *VAR_16;
 struct qedr_srq *VAR_17;
 unsigned long VAR_18;
 struct ib_cq *VAR_19;
 struct ib_qp *VAR_20;
 struct qedr_cq *VAR_21;
 struct qedr_qp *VAR_22;
 u16 VAR_23;

 if (FUNC_2(VAR_11)) {
  switch (VAR_9) {
  case 134:
   VAR_15.event = VAR_1;
   VAR_14 = 1;
   break;
  case 130:
   VAR_15.event = VAR_5;
   VAR_14 = 2;
   break;
  case 131:
   VAR_15.event = VAR_3;
   VAR_14 = 2;
   break;
  case 132:
   VAR_15.event = VAR_4;
   VAR_14 = 2;
   break;
  case 133:
   VAR_15.event = VAR_2;
   VAR_14 = 2;
   break;
  case 128:
   VAR_15.event = VAR_7;
   VAR_14 = 3;
   break;
  case 129:
   VAR_15.event = VAR_6;
   VAR_14 = 3;
   break;
  default:
   FUNC_0(VAR_11, "unsupported event %d on handle=%llx\n",
          VAR_9, VAR_13);
  }
 } else {
  switch (VAR_9) {
  case 135:
   VAR_15.event = VAR_7;
   VAR_14 = 3;
   break;
  case 136:
   VAR_15.event = VAR_6;
   VAR_14 = 3;
   break;
  default:
  FUNC_0(VAR_11, "unsupported event %d on handle=%llx\n", VAR_9,
         VAR_13);
  }
 }
 switch (VAR_14) {
 case 1:
  VAR_21 = (struct qedr_cq *)(uintptr_t)VAR_13;
  if (VAR_21) {
   VAR_19 = &VAR_21->ibcq;
   if (VAR_19->event_handler) {
    VAR_15.device = VAR_19->device;
    VAR_15.element.cq = VAR_19;
    VAR_19->event_handler(&VAR_15, VAR_19->cq_context);
   }
  } else {
   FUNC_3(1,
        "Error: CQ event with NULL pointer ibcq. Handle=%llx\n",
        VAR_13);
  }
  FUNC_0(VAR_11, "CQ event %d on handle %p\n", VAR_9, VAR_21);
  break;
 case 2:
  VAR_22 = (struct qedr_qp *)(uintptr_t)VAR_13;
  if (VAR_22) {
   VAR_20 = &VAR_22->ibqp;
   if (VAR_20->event_handler) {
    VAR_15.device = VAR_20->device;
    VAR_15.element.qp = VAR_20;
    VAR_20->event_handler(&VAR_15, VAR_20->qp_context);
   }
  } else {
   FUNC_3(1,
        "Error: QP event with NULL pointer ibqp. Handle=%llx\n",
        VAR_13);
  }
  FUNC_0(VAR_11, "QP event %d on handle %p\n", VAR_9, VAR_22);
  break;
 case 3:
  VAR_23 = (u16)VAR_13;
  FUNC_8(&VAR_11->srqs, VAR_18);
  VAR_17 = FUNC_7(&VAR_11->srqs, VAR_23);
  if (VAR_17) {
   VAR_16 = &VAR_17->ibsrq;
   if (VAR_16->event_handler) {
    VAR_15.device = VAR_16->device;
    VAR_15.element.srq = VAR_16;
    VAR_16->event_handler(&VAR_15,
           VAR_16->srq_context);
   }
  } else {
   FUNC_1(VAR_11,
      "SRQ event with NULL pointer ibsrq. Handle=%llx\n",
      VAR_13);
  }
  FUNC_9(&VAR_11->srqs, VAR_18);
  FUNC_1(VAR_11, "SRQ event %d on handle %p\n", VAR_9, VAR_17);
 default:
  break;
 }
}
