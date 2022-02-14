
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct t4_cqe {int dummy; } ;
struct TYPE_5__ {int qid; } ;
struct TYPE_6__ {TYPE_2__ sq; } ;
struct TYPE_4__ {int rcq; int scq; } ;
struct c4iw_qp {int ibqp; TYPE_3__ wq; TYPE_1__ attr; } ;
struct c4iw_dev {int qps; } ;
struct c4iw_cq {int wait; int refcnt; } ;


 scalar_t__ FUNC_0 (struct t4_cqe*) ;
 int FUNC_1 (struct t4_cqe*) ;
 int FUNC_2 (struct t4_cqe*) ;
 int FUNC_3 (struct t4_cqe*) ;
 int FUNC_4 (struct t4_cqe*) ;
 int FUNC_5 (struct t4_cqe*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (struct t4_cqe*) ;
 scalar_t__ FUNC_7 (struct t4_cqe*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct c4iw_cq* FUNC_12 (struct c4iw_dev*,int ) ;
 int FUNC_13 (struct c4iw_dev*,struct c4iw_cq*,struct c4iw_qp*,struct t4_cqe*,int ) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (int *) ;
 struct c4iw_qp* FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

void FUNC_19(struct c4iw_dev *VAR_5, struct t4_cqe *VAR_6)
{
 struct c4iw_cq *VAR_7;
 struct c4iw_qp *VAR_8;
 u32 VAR_9;

 FUNC_17(&VAR_5->qps);
 VAR_8 = FUNC_16(&VAR_5->qps, FUNC_1(VAR_6));
 if (!VAR_8) {
  FUNC_14("BAD AE qpid 0x%x opcode %d status 0x%x type %d wrid.hi 0x%x wrid.lo 0x%x\n",
         FUNC_1(VAR_6),
         FUNC_0(VAR_6), FUNC_2(VAR_6),
         FUNC_3(VAR_6), FUNC_4(VAR_6),
         FUNC_5(VAR_6));
  FUNC_18(&VAR_5->qps);
  goto out;
 }

 if (FUNC_7(VAR_6))
  VAR_9 = VAR_8->attr.scq;
 else
  VAR_9 = VAR_8->attr.rcq;
 VAR_7 = FUNC_12(VAR_5, VAR_9);
 if (!VAR_7) {
  FUNC_14("BAD AE cqid 0x%x qpid 0x%x opcode %d status 0x%x type %d wrid.hi 0x%x wrid.lo 0x%x\n",
         VAR_9, FUNC_1(VAR_6),
         FUNC_0(VAR_6), FUNC_2(VAR_6),
         FUNC_3(VAR_6), FUNC_4(VAR_6),
         FUNC_5(VAR_6));
  FUNC_18(&VAR_5->qps);
  goto out;
 }

 FUNC_10(&VAR_8->ibqp);
 FUNC_9(&VAR_7->refcnt);
 FUNC_18(&VAR_5->qps);


 if (FUNC_6(VAR_6) &&
     (FUNC_0(VAR_6) == VAR_0)) {
  FUNC_13(VAR_5, VAR_7, VAR_8, VAR_6, VAR_4);
  goto done;
 }

 switch (FUNC_2(VAR_6)) {


 case 130:
  FUNC_14("AE with status 0!\n");
  break;

 case 131:
 case 136:
 case 134:
 case 155:
 case 128:
 case 154:
 case 146:
 case 147:
  FUNC_13(VAR_5, VAR_7, VAR_8, VAR_6, VAR_2);
  break;


 case 150:
 case 149:
 case 148:
  FUNC_13(VAR_5, VAR_7, VAR_8, VAR_6, VAR_1);
  break;


 case 138:
 case 137:
 case 153:
 case 144:
 case 135:
 case 151:
 case 133:
 case 139:
 case 152:
 case 142:
 case 129:
 case 143:
 case 141:
 case 140:
 case 132:
 case 145:
  FUNC_13(VAR_5, VAR_7, VAR_8, VAR_6, VAR_3);
  break;

 default:
  FUNC_14("Unknown T4 status 0x%x QPID 0x%x\n",
         FUNC_2(VAR_6), VAR_8->wq.sq.qid);
  FUNC_13(VAR_5, VAR_7, VAR_8, VAR_6, VAR_3);
  break;
 }
done:
 if (FUNC_8(&VAR_7->refcnt))
  FUNC_15(&VAR_7->wait);
 FUNC_11(&VAR_8->ibqp);
out:
 return;
}
