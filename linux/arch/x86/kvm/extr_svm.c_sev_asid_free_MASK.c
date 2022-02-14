
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_sev_info {int asid; } ;
struct kvm {int dummy; } ;
struct TYPE_2__ {struct kvm_sev_info sev_info; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct kvm*) ;

__attribute__((used)) static void FUNC_2(struct kvm *VAR_0)
{
 struct kvm_sev_info *VAR_1 = &FUNC_1(VAR_0)->sev_info;

 FUNC_0(VAR_1->asid);
}
