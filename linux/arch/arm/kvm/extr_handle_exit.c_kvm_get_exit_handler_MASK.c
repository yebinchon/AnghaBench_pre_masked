
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct kvm_vcpu {int dummy; } ;
typedef int exit_handle_fn ;


 int * VAR_0 ;
 size_t FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static exit_handle_fn FUNC_1(struct kvm_vcpu *VAR_1)
{
 u8 VAR_2 = FUNC_0(VAR_1);

 return VAR_0[VAR_2];
}
