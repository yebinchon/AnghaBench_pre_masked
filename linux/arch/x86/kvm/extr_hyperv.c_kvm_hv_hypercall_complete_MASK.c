
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int hypercalls; } ;
struct kvm_vcpu {TYPE_1__ stat; } ;


 int FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_0, u64 VAR_1)
{
 FUNC_0(VAR_0, VAR_1);
 ++VAR_0->stat.hypercalls;
 return FUNC_1(VAR_0);
}
