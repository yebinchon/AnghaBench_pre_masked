
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uverbs_attr_bundle {int dummy; } ;
struct ib_wq {int dummy; } ;
struct ib_uobject {struct ib_rwq_ind_table* object; } ;
struct ib_rwq_ind_table {struct ib_wq** ind_tbl; } ;
typedef enum rdma_remove_reason { ____Placeholder_rdma_remove_reason } rdma_remove_reason ;


 int FUNC_0 (struct ib_rwq_ind_table*) ;
 scalar_t__ FUNC_1 (int,int,struct ib_uobject*) ;
 int FUNC_2 (struct ib_wq**) ;

__attribute__((used)) static int FUNC_3(struct ib_uobject *VAR_0,
       enum rdma_remove_reason VAR_1,
       struct uverbs_attr_bundle *VAR_2)
{
 struct ib_rwq_ind_table *VAR_3 = VAR_0->object;
 struct ib_wq **VAR_4 = VAR_3->ind_tbl;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3);
 if (FUNC_1(VAR_5, VAR_1, VAR_0))
  return VAR_5;

 FUNC_2(VAR_4);
 return VAR_5;
}
