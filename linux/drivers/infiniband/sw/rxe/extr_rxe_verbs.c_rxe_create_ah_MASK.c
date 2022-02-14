
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rxe_dev {int ah_pool; } ;
struct rxe_ah {int av; int pelem; } ;
struct rdma_ah_attr {int dummy; } ;
struct ib_udata {int dummy; } ;
struct ib_ah {int device; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct rxe_dev*,struct rdma_ah_attr*) ;
 int FUNC_2 (struct rdma_ah_attr*,int *) ;
 struct rxe_ah* FUNC_3 (struct ib_ah*) ;
 struct rxe_dev* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ib_ah *VAR_0, struct rdma_ah_attr *VAR_1,
    u32 VAR_2, struct ib_udata *VAR_3)

{
 int VAR_4;
 struct rxe_dev *VAR_5 = FUNC_4(VAR_0->device);
 struct rxe_ah *VAR_6 = FUNC_3(VAR_0);

 VAR_4 = FUNC_1(VAR_5, VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(&VAR_5->ah_pool, &VAR_6->pelem);
 if (VAR_4)
  return VAR_4;

 FUNC_2(VAR_1, &VAR_6->av);
 return 0;
}
