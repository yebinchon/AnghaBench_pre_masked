
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pasid_state {int pasid; int invalid; struct device_state* device_state; } ;
struct mmu_notifier {int dummy; } ;
struct mm_struct {int dummy; } ;
struct device_state {int pdev; int (* inv_ctx_cb ) (int ,int ) ;} ;


 int FUNC_0 () ;
 struct pasid_state* FUNC_1 (struct mmu_notifier*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct pasid_state*) ;

__attribute__((used)) static void FUNC_4(struct mmu_notifier *VAR_0, struct mm_struct *VAR_1)
{
 struct pasid_state *VAR_2;
 struct device_state *VAR_3;
 bool VAR_4;

 FUNC_0();

 VAR_2 = FUNC_1(VAR_0);
 VAR_3 = VAR_2->device_state;
 VAR_4 = !VAR_2->invalid;

 if (VAR_4 && VAR_3->inv_ctx_cb)
  VAR_3->inv_ctx_cb(VAR_3->pdev, VAR_2->pasid);

 FUNC_3(VAR_2);
}
