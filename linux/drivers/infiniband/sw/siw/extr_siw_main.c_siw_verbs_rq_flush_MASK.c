
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siw_qp {int state_lock; } ;
struct ib_qp {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct siw_qp*) ;
 struct siw_qp* FUNC_2 (struct ib_qp*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ib_qp *VAR_0)
{
 struct siw_qp *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->state_lock);
 FUNC_1(VAR_1);
 FUNC_3(&VAR_1->state_lock);
}
