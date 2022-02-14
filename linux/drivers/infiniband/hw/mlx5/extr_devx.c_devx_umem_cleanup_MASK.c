
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uverbs_attr_bundle {int dummy; } ;
struct ib_uobject {struct devx_umem* object; } ;
struct devx_umem {int umem; int dinlen; int dinbox; int mdev; } ;
typedef int out ;
typedef enum rdma_remove_reason { ____Placeholder_rdma_remove_reason } rdma_remove_reason ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,int,struct ib_uobject*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct devx_umem*) ;
 int FUNC_4 (int ,int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_5(struct ib_uobject *VAR_1,
        enum rdma_remove_reason VAR_2,
        struct uverbs_attr_bundle *VAR_3)
{
 struct devx_umem *VAR_4 = VAR_1->object;
 u32 VAR_5[FUNC_0(VAR_0)];
 int VAR_6;

 VAR_6 = FUNC_4(VAR_4->mdev, VAR_4->dinbox, VAR_4->dinlen, VAR_5, sizeof(VAR_5));
 if (FUNC_1(VAR_6, VAR_2, VAR_1))
  return VAR_6;

 FUNC_2(VAR_4->umem);
 FUNC_3(VAR_4);
 return 0;
}
