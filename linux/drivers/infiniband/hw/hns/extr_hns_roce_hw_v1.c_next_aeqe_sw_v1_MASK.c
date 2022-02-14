
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_eq {int cons_index; int entries; } ;
struct hns_roce_aeqe {int asyn; } ;


 int VAR_0 ;
 struct hns_roce_aeqe* FUNC_0 (struct hns_roce_eq*,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static struct hns_roce_aeqe *FUNC_2(struct hns_roce_eq *VAR_1)
{
 struct hns_roce_aeqe *VAR_2 = FUNC_0(VAR_1, VAR_1->cons_index);

 return (FUNC_1(VAR_2->asyn, VAR_0) ^
  !!(VAR_1->cons_index & VAR_1->entries)) ? VAR_2 : ((void*)0);
}
