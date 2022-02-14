
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_eq {int cons_index; int entries; } ;
struct hns_roce_ceqe {int comp; } ;


 int VAR_0 ;
 struct hns_roce_ceqe* FUNC_0 (struct hns_roce_eq*,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static struct hns_roce_ceqe *FUNC_2(struct hns_roce_eq *VAR_1)
{
 struct hns_roce_ceqe *VAR_2 = FUNC_0(VAR_1, VAR_1->cons_index);

 return (!!(FUNC_1(VAR_2->comp,
  VAR_0))) ^
  (!!(VAR_1->cons_index & VAR_1->entries)) ? VAR_2 : ((void*)0);
}
