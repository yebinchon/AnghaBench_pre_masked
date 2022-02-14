
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_qp {int dummy; } ;
struct ocrdma_dev {int dummy; } ;
typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct ocrdma_qp*,int,int*) ;

__attribute__((used)) static void FUNC_2(struct ocrdma_dev *VAR_1,
           struct ocrdma_qp *VAR_2)
{
 enum ib_qp_state VAR_3 = VAR_0;
 enum ib_qp_state VAR_4;

 if (VAR_2 == ((void*)0))
  FUNC_0();
 FUNC_1(VAR_2, VAR_3, &VAR_4);
}
