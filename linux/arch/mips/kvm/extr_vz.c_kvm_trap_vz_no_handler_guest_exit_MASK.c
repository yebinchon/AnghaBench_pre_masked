
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int dummy; } ;
typedef enum emulation_result { ____Placeholder_emulation_result } emulation_result ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int*,int,int ) ;
 int FUNC_1 (int*,struct kvm_vcpu*,int*) ;
 int FUNC_2 () ;

__attribute__((used)) static enum emulation_result FUNC_3(u32 VAR_2,
       u32 VAR_3,
       u32 *VAR_4,
       struct kvm_vcpu *VAR_5)
{
 u32 VAR_6;




 if (VAR_3 & VAR_0)
  VAR_4 += 1;
 FUNC_1(VAR_4, VAR_5, &VAR_6);

 FUNC_0("Guest Exception Code: %d not yet handled @ PC: %p, inst: 0x%08x  Status: %#x\n",
  VAR_2, VAR_4, VAR_6, FUNC_2());

 return VAR_1;
}
