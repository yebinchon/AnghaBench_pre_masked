
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_nested_guest {int dummy; } ;
struct TYPE_2__ {int max_nested_lpid; struct kvm_nested_guest** nested_guests; } ;
struct kvm {TYPE_1__ arch; } ;



__attribute__((used)) static struct kvm_nested_guest *FUNC_0(struct kvm *VAR_0, int VAR_1)
{
 if (VAR_1 > VAR_0->arch.max_nested_lpid)
  return ((void*)0);
 return VAR_0->arch.nested_guests[VAR_1];
}
