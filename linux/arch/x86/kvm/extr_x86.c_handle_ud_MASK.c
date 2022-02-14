
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x86_exception {int dummy; } ;
struct kvm_vcpu {int dummy; } ;
typedef int sig ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,int) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,int ,char*,int,struct x86_exception*) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*,scalar_t__) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;

int FUNC_6(struct kvm_vcpu *VAR_3)
{
 int VAR_4 = VAR_0;
 char VAR_5[5];
 struct x86_exception VAR_6;

 if (VAR_2 &&
     FUNC_2(VAR_3, FUNC_1(VAR_3),
    VAR_5, sizeof(VAR_5), &VAR_6) == 0 &&
     FUNC_5(VAR_5, "\xf\xbkvm", sizeof(VAR_5)) == 0) {
  FUNC_4(VAR_3, FUNC_3(VAR_3) + sizeof(VAR_5));
  VAR_4 = VAR_1;
 }

 return FUNC_0(VAR_3, VAR_4);
}
