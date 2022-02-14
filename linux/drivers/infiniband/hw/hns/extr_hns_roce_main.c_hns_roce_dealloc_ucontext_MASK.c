
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_ucontext {int device; } ;
struct hns_roce_ucontext {int uar; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 struct hns_roce_ucontext* FUNC_2 (struct ib_ucontext*) ;

__attribute__((used)) static void FUNC_3(struct ib_ucontext *VAR_0)
{
 struct hns_roce_ucontext *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(FUNC_1(VAR_0->device), &VAR_1->uar);
}
