
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nr_hw_bp; int nr_hw_wp; struct kvm_hw_wp_info_arch* hw_wp_info; struct kvm_hw_wp_info_arch* hw_bp_info; } ;
struct TYPE_6__ {TYPE_2__ guestdbg; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct kvm_hw_wp_info_arch {int type; int addr; int len; } ;
struct kvm_hw_breakpoint {int type; int addr; int len; } ;
struct kvm_hw_bp_info_arch {int type; int addr; int len; } ;
struct TYPE_4__ {int nr_hw_bp; int hw_bp; } ;
struct kvm_guest_debug {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct kvm_hw_wp_info_arch*) ;


 int VAR_3 ;
 int FUNC_1 (struct kvm_hw_wp_info_arch*) ;
 int FUNC_2 (struct kvm_vcpu*,struct kvm_hw_wp_info_arch*,struct kvm_hw_wp_info_arch*) ;
 int FUNC_3 (struct kvm_hw_wp_info_arch*) ;
 struct kvm_hw_wp_info_arch* FUNC_4 (int,int,int ) ;
 struct kvm_hw_wp_info_arch* FUNC_5 (int ,int) ;

int FUNC_6(struct kvm_vcpu *VAR_4,
       struct kvm_guest_debug *VAR_5)
{
 int VAR_6 = 0, VAR_7 = 0, VAR_8 = 0, VAR_9;
 struct kvm_hw_breakpoint *VAR_10 = ((void*)0);
 struct kvm_hw_wp_info_arch *VAR_11 = ((void*)0);
 struct kvm_hw_bp_info_arch *VAR_12 = ((void*)0);

 if (VAR_5->arch.nr_hw_bp <= 0 || !VAR_5->arch.hw_bp)
  return 0;
 else if (VAR_5->arch.nr_hw_bp > VAR_3)
  return -VAR_0;

 VAR_10 = FUNC_5(VAR_5->arch.hw_bp,
         sizeof(*VAR_10) * VAR_5->arch.nr_hw_bp);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 for (VAR_9 = 0; VAR_9 < VAR_5->arch.nr_hw_bp; VAR_9++) {
  switch (VAR_10[VAR_9].type) {
  case 128:
   VAR_7++;
   break;
  case 129:
   VAR_8++;
   break;
  default:
   break;
  }
 }

 if (VAR_7 > 0) {
  VAR_11 = FUNC_4(VAR_7,
     sizeof(*VAR_11),
     VAR_2);
  if (!VAR_11) {
   VAR_6 = -VAR_1;
   goto error;
  }
 }
 if (VAR_8 > 0) {
  VAR_12 = FUNC_4(VAR_8,
     sizeof(*VAR_12),
     VAR_2);
  if (!VAR_12) {
   VAR_6 = -VAR_1;
   goto error;
  }
 }

 for (VAR_7 = 0, VAR_8 = 0, VAR_9 = 0; VAR_9 < VAR_5->arch.nr_hw_bp; VAR_9++) {
  switch (VAR_10[VAR_9].type) {
  case 128:
   VAR_6 = FUNC_2(VAR_4, &VAR_10[VAR_9],
            &VAR_11[VAR_7]);
   if (VAR_6)
    goto error;
   VAR_7++;
   break;
  case 129:
   VAR_12[VAR_8].len = VAR_10[VAR_9].len;
   VAR_12[VAR_8].addr = VAR_10[VAR_9].addr;
   VAR_8++;
   break;
  }
 }

 VAR_4->arch.guestdbg.nr_hw_bp = VAR_8;
 VAR_4->arch.guestdbg.hw_bp_info = VAR_12;
 VAR_4->arch.guestdbg.nr_hw_wp = VAR_7;
 VAR_4->arch.guestdbg.hw_wp_info = VAR_11;
 return 0;
error:
 FUNC_3(VAR_10);
 FUNC_3(VAR_11);
 FUNC_3(VAR_12);
 return VAR_6;
}
