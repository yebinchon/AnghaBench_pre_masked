
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_reg_resources {int * sig_mr; int * mr; } ;
struct iser_fr_desc {struct iser_reg_resources rsc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct iser_fr_desc*) ;

__attribute__((used)) static void FUNC_2(struct iser_fr_desc *VAR_0)
{
 struct iser_reg_resources *VAR_1 = &VAR_0->rsc;

 FUNC_0(VAR_1->mr);
 if (VAR_1->sig_mr) {
  FUNC_0(VAR_1->sig_mr);
  VAR_1->sig_mr = ((void*)0);
 }
 FUNC_1(VAR_0);
}
