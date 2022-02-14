
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_dev {int dummy; } ;
struct rxe_ah {int av; } ;
struct rdma_ah_attr {int dummy; } ;
struct ib_ah {int device; } ;


 int FUNC_0 (struct rxe_dev*,struct rdma_ah_attr*) ;
 int FUNC_1 (struct rdma_ah_attr*,int *) ;
 struct rxe_ah* FUNC_2 (struct ib_ah*) ;
 struct rxe_dev* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ib_ah *VAR_0, struct rdma_ah_attr *VAR_1)
{
 int VAR_2;
 struct rxe_dev *VAR_3 = FUNC_3(VAR_0->device);
 struct rxe_ah *VAR_4 = FUNC_2(VAR_0);

 VAR_2 = FUNC_0(VAR_3, VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_1(VAR_1, &VAR_4->av);
 return 0;
}
