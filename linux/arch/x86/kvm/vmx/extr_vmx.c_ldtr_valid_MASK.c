
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_segment {int selector; int type; int present; scalar_t__ unusable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*,struct kvm_segment*,int ) ;

__attribute__((used)) static bool FUNC_1(struct kvm_vcpu *VAR_2)
{
 struct kvm_segment VAR_3;

 FUNC_0(VAR_2, &VAR_3, VAR_1);

 if (VAR_3.unusable)
  return 1;
 if (VAR_3.selector & VAR_0)
  return 0;
 if (VAR_3.type != 2)
  return 0;
 if (!VAR_3.present)
  return 0;

 return 1;
}
