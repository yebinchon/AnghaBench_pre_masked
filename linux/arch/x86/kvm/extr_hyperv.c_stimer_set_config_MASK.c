
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union hv_stimer_config {scalar_t__ sintx; int as_uint64; scalar_t__ enable; int direct_mode; } ;
typedef int u64 ;
struct TYPE_3__ {scalar_t__ enable; int as_uint64; } ;
struct kvm_vcpu_hv_stimer {TYPE_1__ config; int index; } ;
struct TYPE_4__ {int vcpu_id; } ;


 int FUNC_0 (struct kvm_vcpu_hv_stimer*) ;
 int FUNC_1 (struct kvm_vcpu_hv_stimer*,int) ;
 TYPE_2__* FUNC_2 (struct kvm_vcpu_hv_stimer*) ;
 int FUNC_3 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu_hv_stimer *VAR_0, u64 VAR_1,
        bool VAR_2)
{
 union hv_stimer_config VAR_3 = {.as_uint64 = VAR_1},
  VAR_4 = {.as_uint64 = VAR_0->config.as_uint64};

 FUNC_3(FUNC_2(VAR_0)->vcpu_id,
           VAR_0->index, VAR_1, VAR_2);

 FUNC_0(VAR_0);
 if (VAR_4.enable &&
     !VAR_3.direct_mode && VAR_3.sintx == 0)
  VAR_3.enable = 0;
 VAR_0->config.as_uint64 = VAR_3.as_uint64;

 if (VAR_0->config.enable)
  FUNC_1(VAR_0, 0);

 return 0;
}
