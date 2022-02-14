
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef int u64 ;
typedef int u32 ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (struct kvm_vcpu*,int,int) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_0, u32 VAR_1,
     ulong VAR_2)
{
 u64 VAR_3 = 0, VAR_4 = 0;
 FUNC_0("KVM MMU: mtsrin(0x%x, 0x%lx)\n", VAR_1, VAR_2);


 VAR_3 |= (VAR_1 & 0xf) << 28;

 VAR_3 |= 1 << 27;

 VAR_3 |= VAR_1;


 VAR_4 |= (VAR_2 & 0xfffffff) << 12;

 VAR_4 |= ((VAR_2 >> 28) & 0x7) << 9;

 FUNC_1(VAR_0, VAR_4, VAR_3);
}
