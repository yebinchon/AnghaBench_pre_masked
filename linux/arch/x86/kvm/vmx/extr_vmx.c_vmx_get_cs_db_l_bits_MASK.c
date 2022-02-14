
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_1, int *VAR_2, int *VAR_3)
{
 u32 VAR_4 = FUNC_1(FUNC_0(VAR_1), VAR_0);

 *VAR_2 = (VAR_4 >> 14) & 1;
 *VAR_3 = (VAR_4 >> 13) & 1;
}
