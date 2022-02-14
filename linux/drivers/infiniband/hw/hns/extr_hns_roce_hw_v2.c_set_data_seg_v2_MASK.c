
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_sge {int length; int addr; int lkey; } ;
struct hns_roce_v2_wqe_data_seg {void* len; int addr; void* lkey; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct hns_roce_v2_wqe_data_seg *VAR_0,
       struct ib_sge *VAR_1)
{
 VAR_0->lkey = FUNC_0(VAR_1->lkey);
 VAR_0->addr = FUNC_1(VAR_1->addr);
 VAR_0->len = FUNC_0(VAR_1->length);
}
