
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hns_roce_srq {int dummy; } ;
struct hns_roce_cq {int lock; } ;


 int FUNC_0 (struct hns_roce_cq*,int ,struct hns_roce_srq*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct hns_roce_cq *VAR_0, u32 VAR_1,
     struct hns_roce_srq *VAR_2)
{
 FUNC_1(&VAR_0->lock);
 FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->lock);
}
