
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_segment {int selector; int dpl; int s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kvm_vcpu*,struct kvm_segment*,int) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_4, int VAR_5,
  struct kvm_segment *VAR_6)
{
 if (!VAR_3) {







  if (VAR_5 == VAR_1 || VAR_5 == VAR_2)
   VAR_6->selector &= ~VAR_0;
  VAR_6->dpl = VAR_6->selector & VAR_0;
  VAR_6->s = 1;
 }
 FUNC_0(VAR_4, VAR_6, VAR_5);
}
