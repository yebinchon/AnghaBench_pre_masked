
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_11__ {scalar_t__ nr_hw_wp; scalar_t__ nr_hw_bp; unsigned long last_bp; } ;
struct TYPE_12__ {TYPE_5__ guestdbg; TYPE_4__* sie_block; } ;
struct kvm_vcpu {TYPE_6__ arch; TYPE_2__* run; } ;
struct kvm_hw_wp_info_arch {unsigned long addr; } ;
struct kvm_hw_bp_info_arch {int dummy; } ;
struct kvm_debug_exit_arch {unsigned long addr; void* type; } ;
struct TYPE_9__ {unsigned long addr; } ;
struct TYPE_10__ {TYPE_3__ gpsw; } ;
struct TYPE_7__ {struct kvm_debug_exit_arch arch; } ;
struct TYPE_8__ {TYPE_1__ debug; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 struct kvm_hw_wp_info_arch* FUNC_0 (struct kvm_vcpu*) ;
 struct kvm_hw_bp_info_arch* FUNC_1 (struct kvm_vcpu*,unsigned long) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct kvm_vcpu *VAR_3, u8 VAR_4,
          unsigned long VAR_5)
{
 struct kvm_debug_exit_arch *VAR_6 = &VAR_3->run->debug.arch;
 struct kvm_hw_wp_info_arch *VAR_7 = ((void*)0);
 struct kvm_hw_bp_info_arch *VAR_8 = ((void*)0);
 unsigned long VAR_9 = VAR_3->arch.sie_block->gpsw.addr;

 if (FUNC_2(VAR_3)) {
  if (FUNC_5(VAR_4) &&
      VAR_3->arch.guestdbg.nr_hw_wp > 0) {
   VAR_7 = FUNC_0(VAR_3);
   if (VAR_7) {
    VAR_6->addr = VAR_7->addr;
    VAR_6->type = VAR_1;
    goto exit_required;
   }
  }
  if (FUNC_4(VAR_4) &&
    VAR_3->arch.guestdbg.nr_hw_bp > 0) {
   VAR_8 = FUNC_1(VAR_3, VAR_9);

   if (VAR_8 && (VAR_9 != VAR_5)) {
    VAR_6->addr = VAR_9;
    VAR_6->type = VAR_0;
    VAR_3->arch.guestdbg.last_bp = VAR_9;
    goto exit_required;
   }

   VAR_8 = FUNC_1(VAR_3, VAR_5);
   if (VAR_8 && VAR_3->arch.guestdbg.last_bp != VAR_5) {
    VAR_6->addr = VAR_5;
    VAR_6->type = VAR_0;
    goto exit_required;
   }
  }
 }
 if (FUNC_3(VAR_3) && FUNC_4(VAR_4)) {
  VAR_6->addr = VAR_9;
  VAR_6->type = VAR_2;
  goto exit_required;
 }

 return 0;
exit_required:
 return 1;
}
