
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_qp {int state; int q_lock; } ;
typedef enum ocrdma_qp_state { ____Placeholder_ocrdma_qp_state } ocrdma_qp_state ;
typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ocrdma_qp*) ;
 int FUNC_3 (struct ocrdma_qp*) ;
 int FUNC_4 (struct ocrdma_qp*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7(struct ocrdma_qp *VAR_2, enum ib_qp_state VAR_3,
      enum ib_qp_state *VAR_4)
{
 unsigned long VAR_5;
 enum ocrdma_qp_state VAR_6;
 VAR_6 = FUNC_1(VAR_3);


 FUNC_5(&VAR_2->q_lock, VAR_5);

 if (VAR_4)
  *VAR_4 = FUNC_0(VAR_2->state);
 if (VAR_6 == VAR_2->state) {
  FUNC_6(&VAR_2->q_lock, VAR_5);
  return 1;
 }


 if (VAR_6 == VAR_1) {
  FUNC_4(VAR_2);
  FUNC_2(VAR_2);
 } else if (VAR_6 == VAR_0) {
  FUNC_3(VAR_2);
 }

 VAR_2->state = VAR_6;

 FUNC_6(&VAR_2->q_lock, VAR_5);
 return 0;
}
