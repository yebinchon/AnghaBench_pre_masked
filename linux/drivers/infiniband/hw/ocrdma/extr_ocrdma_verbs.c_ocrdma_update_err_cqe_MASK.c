
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_qp {int ibqp; } ;
struct ocrdma_cqe {int dummy; } ;
struct ib_wc {int status; int * qp; scalar_t__ byte_len; } ;


 int VAR_0 ;
 int FUNC_0 (struct ocrdma_qp*) ;
 int FUNC_1 (struct ocrdma_qp*) ;
 int FUNC_2 (struct ocrdma_qp*) ;
 int FUNC_3 (struct ocrdma_qp*,int ,int *) ;
 int FUNC_4 (struct ocrdma_qp*,struct ocrdma_cqe*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static bool FUNC_6(struct ib_wc *VAR_1, struct ocrdma_cqe *VAR_2,
      struct ocrdma_qp *VAR_3, int VAR_4)
{
 bool VAR_5 = 0;

 VAR_1->byte_len = 0;
 VAR_1->qp = &VAR_3->ibqp;
 VAR_1->status = FUNC_5(VAR_4);

 FUNC_2(VAR_3);
 FUNC_3(VAR_3, VAR_0, ((void*)0));




 if (!FUNC_0(VAR_3) || !FUNC_1(VAR_3)) {
  VAR_5 = 1;
  FUNC_4(VAR_3, VAR_2);
 }
 return VAR_5;
}
