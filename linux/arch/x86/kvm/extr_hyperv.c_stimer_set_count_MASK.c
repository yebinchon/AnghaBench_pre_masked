
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_3__ {int enable; scalar_t__ auto_enable; } ;
struct kvm_vcpu_hv_stimer {scalar_t__ count; TYPE_1__ config; int index; } ;
struct TYPE_4__ {int vcpu_id; } ;


 int FUNC_0 (struct kvm_vcpu_hv_stimer*) ;
 int FUNC_1 (struct kvm_vcpu_hv_stimer*,int) ;
 TYPE_2__* FUNC_2 (struct kvm_vcpu_hv_stimer*) ;
 int FUNC_3 (int ,int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu_hv_stimer *VAR_0, u64 VAR_1,
       bool VAR_2)
{
 FUNC_3(FUNC_2(VAR_0)->vcpu_id,
          VAR_0->index, VAR_1, VAR_2);

 FUNC_0(VAR_0);
 VAR_0->count = VAR_1;
 if (VAR_0->count == 0)
  VAR_0->config.enable = 0;
 else if (VAR_0->config.auto_enable)
  VAR_0->config.enable = 1;

 if (VAR_0->config.enable)
  FUNC_1(VAR_0, 0);

 return 0;
}
