
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nested_enable; } ;
struct kvm {TYPE_1__ arch; } ;


 scalar_t__ FUNC_0 (struct kvm*) ;

__attribute__((used)) static inline bool FUNC_1(struct kvm *VAR_0)
{
 return VAR_0->arch.nested_enable && FUNC_0(VAR_0);
}
