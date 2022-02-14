
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int direct; } ;
struct kvm_mmu_page {int gfn; scalar_t__* gfns; TYPE_1__ role; } ;
typedef scalar_t__ gfn_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct kvm_mmu_page*,int) ;
 int FUNC_2 (char*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct kvm_mmu_page *VAR_0, int VAR_1, gfn_t VAR_2)
{
 if (!VAR_0->role.direct) {
  VAR_0->gfns[VAR_1] = VAR_2;
  return;
 }

 if (FUNC_0(VAR_2 != FUNC_1(VAR_0, VAR_1)))
  FUNC_2("gfn mismatch under direct page %llx "
       "(expected %llx, got %llx)\n",
       VAR_0->gfn,
       FUNC_1(VAR_0, VAR_1), VAR_2);
}
