
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tlbe_ref {int dummy; } ;
struct kvmppc_vcpu_e500 {TYPE_2__** gtlb_priv; TYPE_1__* gtlb_params; } ;
struct TYPE_4__ {struct tlbe_ref ref; } ;
struct TYPE_3__ {int entries; } ;


 int FUNC_0 (struct tlbe_ref*) ;

__attribute__((used)) static void FUNC_1(struct kvmppc_vcpu_e500 *VAR_0)
{
 int VAR_1;
 int VAR_2;

 for (VAR_1 = 0; VAR_1 <= 1; VAR_1++) {
  for (VAR_2 = 0; VAR_2 < VAR_0->gtlb_params[VAR_1].entries; VAR_2++) {
   struct tlbe_ref *VAR_3 =
    &VAR_0->gtlb_priv[VAR_1][VAR_2].ref;
   FUNC_0(VAR_3);
  }
 }
}
