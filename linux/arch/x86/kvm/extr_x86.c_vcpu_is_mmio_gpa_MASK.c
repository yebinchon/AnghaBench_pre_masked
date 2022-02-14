
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
typedef int gpa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,int,int,int) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*,int) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_2, unsigned long VAR_3,
       gpa_t VAR_4, bool VAR_5)
{

 if ((VAR_4 & VAR_1) == VAR_0)
  return 1;

 if (FUNC_1(VAR_2, VAR_4)) {
  FUNC_0(VAR_3, VAR_4, VAR_5, 1);
  return 1;
 }

 return 0;
}
