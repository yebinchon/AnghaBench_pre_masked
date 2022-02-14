
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_v2_cqe {int dummy; } ;
struct hns_roce_cq {int cons_index; } ;


 struct hns_roce_v2_cqe* FUNC_0 (struct hns_roce_cq*,int ) ;

__attribute__((used)) static struct hns_roce_v2_cqe *FUNC_1(struct hns_roce_cq *VAR_0)
{
 return FUNC_0(VAR_0, VAR_0->cons_index);
}
