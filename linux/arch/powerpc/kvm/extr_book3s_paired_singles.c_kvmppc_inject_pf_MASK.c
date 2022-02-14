
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 (struct kvm_vcpu*,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int,int,int) ;
 int FUNC_5 (struct kvm_vcpu*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_1, ulong VAR_2, bool VAR_3)
{
 u32 VAR_4;
 u64 VAR_5 = FUNC_1(VAR_1);

 VAR_5 = FUNC_4(VAR_5, 33, 36, 0);
 VAR_5 = FUNC_4(VAR_5, 42, 47, 0);
 FUNC_5(VAR_1, VAR_5);
 FUNC_2(VAR_1, VAR_2);

 VAR_4 = FUNC_4(0, 33, 33, 1);
 if (VAR_3)
  VAR_4 = FUNC_4(VAR_4, 38, 38, 1);
 FUNC_3(VAR_1, VAR_4);
 FUNC_0(VAR_1, VAR_0);
}
