
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int) ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_1)
{
 unsigned long VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = VAR_2 & 0xff;


 FUNC_0(VAR_1, VAR_3);
 return 1;
}
