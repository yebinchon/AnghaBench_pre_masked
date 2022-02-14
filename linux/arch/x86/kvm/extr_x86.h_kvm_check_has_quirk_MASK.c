
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int disabled_quirks; } ;
struct kvm {TYPE_1__ arch; } ;



__attribute__((used)) static inline bool FUNC_0(struct kvm *VAR_0, u64 VAR_1)
{
 return !(VAR_0->arch.disabled_quirks & VAR_1);
}
