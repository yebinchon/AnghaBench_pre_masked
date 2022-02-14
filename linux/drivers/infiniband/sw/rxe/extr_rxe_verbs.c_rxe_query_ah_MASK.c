
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_ah {int av; } ;
struct rdma_ah_attr {int type; } ;
struct ib_ah {int type; } ;


 int FUNC_0 (struct rdma_ah_attr*,int ,int) ;
 int FUNC_1 (int *,struct rdma_ah_attr*) ;
 struct rxe_ah* FUNC_2 (struct ib_ah*) ;

__attribute__((used)) static int FUNC_3(struct ib_ah *VAR_0, struct rdma_ah_attr *VAR_1)
{
 struct rxe_ah *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->type = VAR_0->type;
 FUNC_1(&VAR_2->av, VAR_1);
 return 0;
}
