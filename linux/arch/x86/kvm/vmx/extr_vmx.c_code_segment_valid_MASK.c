
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_segment {unsigned int selector; int type; unsigned int dpl; int present; int s; scalar_t__ unusable; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kvm_vcpu*,struct kvm_segment*,int ) ;

__attribute__((used)) static bool FUNC_1(struct kvm_vcpu *VAR_5)
{
 struct kvm_segment VAR_6;
 unsigned int VAR_7;

 FUNC_0(VAR_5, &VAR_6, VAR_1);
 VAR_7 = VAR_6.selector & VAR_0;

 if (VAR_6.unusable)
  return 0;
 if (~VAR_6.type & (VAR_3|VAR_2))
  return 0;
 if (!VAR_6.s)
  return 0;
 if (VAR_6.type & VAR_4) {
  if (VAR_6.dpl > VAR_7)
   return 0;
 } else {
  if (VAR_6.dpl != VAR_7)
   return 0;
 }
 if (!VAR_6.present)
  return 0;


 return 1;
}
