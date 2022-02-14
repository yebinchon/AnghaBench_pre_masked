
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_sev_info {int asid; } ;
struct kvm {int dummy; } ;
struct TYPE_2__ {struct kvm_sev_info sev_info; } ;


 TYPE_1__* FUNC_0 (struct kvm*) ;

__attribute__((used)) static inline int FUNC_1(struct kvm *VAR_0)
{
 struct kvm_sev_info *VAR_1 = &FUNC_0(VAR_0)->sev_info;

 return VAR_1->asid;
}
