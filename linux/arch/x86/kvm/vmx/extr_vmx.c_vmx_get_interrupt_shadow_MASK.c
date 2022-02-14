
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;

u32 FUNC_1(struct kvm_vcpu *VAR_5)
{
 u32 VAR_6 = FUNC_0(VAR_0);
 int VAR_7 = 0;

 if (VAR_6 & VAR_2)
  VAR_7 |= VAR_4;
 if (VAR_6 & VAR_1)
  VAR_7 |= VAR_3;

 return VAR_7;
}
