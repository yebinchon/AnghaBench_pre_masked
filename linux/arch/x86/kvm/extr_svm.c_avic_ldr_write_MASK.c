
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int apic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int* FUNC_2 (struct kvm_vcpu*,int,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_5, u8 VAR_6, u32 VAR_7)
{
 bool VAR_8;
 u32 *VAR_9, VAR_10;

 VAR_8 = FUNC_3(VAR_5->arch.apic, VAR_0) == VAR_1;
 VAR_9 = FUNC_2(VAR_5, VAR_7, VAR_8);
 if (!VAR_9)
  return -VAR_4;

 VAR_10 = FUNC_0(*VAR_9);
 VAR_10 &= ~VAR_2;
 VAR_10 |= (VAR_6 & VAR_2);
 VAR_10 |= VAR_3;
 FUNC_1(*VAR_9, VAR_10);

 return 0;
}
