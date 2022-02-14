
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct kvm_vcpu {int dummy; } ;
typedef int exit_handle_fn ;


 size_t FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static exit_handle_fn FUNC_2(struct kvm_vcpu *VAR_1)
{
 u32 VAR_2 = FUNC_1(VAR_1);
 u8 VAR_3 = FUNC_0(VAR_2);

 return VAR_0[VAR_3];
}
