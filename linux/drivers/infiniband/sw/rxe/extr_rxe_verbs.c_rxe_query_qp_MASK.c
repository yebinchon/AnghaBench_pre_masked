
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_qp {int dummy; } ;
struct ib_qp_init_attr {int dummy; } ;
struct ib_qp_attr {int dummy; } ;
struct ib_qp {int dummy; } ;


 int FUNC_0 (struct rxe_qp*,struct ib_qp_attr*,int) ;
 int FUNC_1 (struct rxe_qp*,struct ib_qp_init_attr*) ;
 struct rxe_qp* FUNC_2 (struct ib_qp*) ;

__attribute__((used)) static int FUNC_3(struct ib_qp *VAR_0, struct ib_qp_attr *VAR_1,
   int VAR_2, struct ib_qp_init_attr *VAR_3)
{
 struct rxe_qp *VAR_4 = FUNC_2(VAR_0);

 FUNC_1(VAR_4, VAR_3);
 FUNC_0(VAR_4, VAR_1, VAR_2);

 return 0;
}
