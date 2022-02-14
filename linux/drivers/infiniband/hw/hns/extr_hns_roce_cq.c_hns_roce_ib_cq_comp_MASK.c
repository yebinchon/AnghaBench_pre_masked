
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_cq {int cq_context; int (* comp_handler ) (struct ib_cq*,int ) ;} ;
struct hns_roce_cq {struct ib_cq ib_cq; } ;


 int FUNC_0 (struct ib_cq*,int ) ;

__attribute__((used)) static void FUNC_1(struct hns_roce_cq *VAR_0)
{
 struct ib_cq *VAR_1 = &VAR_0->ib_cq;

 VAR_1->comp_handler(VAR_1, VAR_1->cq_context);
}
