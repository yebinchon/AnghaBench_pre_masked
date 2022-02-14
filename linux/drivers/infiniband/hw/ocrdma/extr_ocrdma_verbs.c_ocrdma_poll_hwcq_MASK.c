
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ocrdma_qp {int dummy; } ;
struct ocrdma_dev {struct ocrdma_qp** qp_tbl; } ;
struct TYPE_4__ {scalar_t__ qpn; } ;
struct ocrdma_cqe {TYPE_2__ cmn; } ;
struct TYPE_3__ {int device; } ;
struct ocrdma_cq {int getp; int max_hw_cqe; int id; struct ocrdma_cqe* va; TYPE_1__ ibcq; } ;
struct ib_wc {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct ocrdma_dev* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct ocrdma_cqe*) ;
 int FUNC_3 (struct ocrdma_cq*,struct ocrdma_cqe*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct ocrdma_cq*,struct ocrdma_cqe*,int) ;
 int FUNC_6 (struct ocrdma_qp*,struct ocrdma_cqe*,struct ib_wc*,int*,int*) ;
 int FUNC_7 (struct ocrdma_qp*,struct ocrdma_cqe*,struct ib_wc*,int*,int*) ;
 int FUNC_8 (struct ocrdma_dev*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_9(struct ocrdma_cq *VAR_1, int VAR_2,
       struct ib_wc *VAR_3)
{
 u16 VAR_4 = 0;
 int VAR_5 = 0;
 bool VAR_6 = 0;
 int VAR_7 = 0;
 struct ocrdma_qp *VAR_8 = ((void*)0);
 struct ocrdma_dev *VAR_9 = FUNC_1(VAR_1->ibcq.device);
 struct ocrdma_cqe *VAR_10;
 u16 VAR_11; bool VAR_12 = 0; bool VAR_13 = 0;

 VAR_11 = VAR_1->getp;
 while (VAR_2) {
  VAR_10 = VAR_1->va + VAR_11;

  if (!FUNC_3(VAR_1, VAR_10))
   break;
  VAR_4 = (FUNC_4(VAR_10->cmn.qpn) & VAR_0);

  if (VAR_4 == 0)
   goto skip_cqe;
  VAR_8 = VAR_9->qp_tbl[VAR_4];
  FUNC_0(VAR_8 == ((void*)0));

  if (FUNC_2(VAR_10)) {
   VAR_6 = FUNC_7(VAR_8, VAR_10, VAR_3, &VAR_12,
        &VAR_13);
  } else {
   VAR_6 = FUNC_6(VAR_8, VAR_10, VAR_3, &VAR_12,
        &VAR_13);
  }
  if (VAR_6)
   goto expand_cqe;
  if (VAR_13)
   goto stop_cqe;

  VAR_10->cmn.qpn = 0;
skip_cqe:
  VAR_7 += 1;
  VAR_11 = (VAR_11 + 1) % VAR_1->max_hw_cqe;
  FUNC_5(VAR_1, VAR_10, VAR_11);
expand_cqe:
  if (VAR_12) {
   VAR_2 -= 1;
   VAR_5 += 1;
   VAR_3 = VAR_3 + 1;
   VAR_12 = 0;
  }
 }
stop_cqe:
 VAR_1->getp = VAR_11;

 if (VAR_7)
  FUNC_8(VAR_9, VAR_1->id, 0, 0, VAR_7);

 return VAR_5;
}
