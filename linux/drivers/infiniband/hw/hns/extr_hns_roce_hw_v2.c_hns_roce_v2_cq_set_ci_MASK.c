
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hns_roce_cq {int* set_ci_db; } ;



__attribute__((used)) static void FUNC_0(struct hns_roce_cq *VAR_0, u32 VAR_1)
{
 *VAR_0->set_ci_db = VAR_1 & 0xffffff;
}
