
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uverbs_attr_bundle {int dummy; } ;
struct mlx5_ib_flow_matcher {int usecnt; } ;
struct ib_uobject {struct mlx5_ib_flow_matcher* object; } ;
typedef enum rdma_remove_reason { ____Placeholder_rdma_remove_reason } rdma_remove_reason ;


 int FUNC_0 (int *,int,struct ib_uobject*) ;
 int FUNC_1 (struct mlx5_ib_flow_matcher*) ;

__attribute__((used)) static int FUNC_2(struct ib_uobject *VAR_0,
    enum rdma_remove_reason VAR_1,
    struct uverbs_attr_bundle *VAR_2)
{
 struct mlx5_ib_flow_matcher *VAR_3 = VAR_0->object;
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_3->usecnt, VAR_1, VAR_0);
 if (VAR_4)
  return VAR_4;

 FUNC_1(VAR_3);
 return 0;
}
