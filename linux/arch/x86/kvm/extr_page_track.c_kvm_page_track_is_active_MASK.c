
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int ** gfn_track; } ;
struct kvm_memory_slot {TYPE_1__ arch; int base_gfn; } ;
typedef int gfn_t ;
typedef enum kvm_page_track_mode { ____Placeholder_kvm_page_track_mode } kvm_page_track_mode ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;
 struct kvm_memory_slot* FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (int) ;

bool FUNC_5(struct kvm_vcpu *VAR_1, gfn_t VAR_2,
         enum kvm_page_track_mode VAR_3)
{
 struct kvm_memory_slot *VAR_4;
 int VAR_5;

 if (FUNC_1(!FUNC_4(VAR_3)))
  return 0;

 VAR_4 = FUNC_3(VAR_1, VAR_2);
 if (!VAR_4)
  return 0;

 VAR_5 = FUNC_2(VAR_2, VAR_4->base_gfn, VAR_0);
 return !!FUNC_0(VAR_4->arch.gfn_track[VAR_3][VAR_5]);
}
