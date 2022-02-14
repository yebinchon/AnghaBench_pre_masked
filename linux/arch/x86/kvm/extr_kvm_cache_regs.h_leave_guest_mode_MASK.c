
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int load_eoi_exitmap_pending; int hflags; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct kvm_vcpu*) ;

__attribute__((used)) static inline void FUNC_1(struct kvm_vcpu *VAR_2)
{
 VAR_2->arch.hflags &= ~VAR_0;

 if (VAR_2->arch.load_eoi_exitmap_pending) {
  VAR_2->arch.load_eoi_exitmap_pending = 0;
  FUNC_0(VAR_1, VAR_2);
 }
}
