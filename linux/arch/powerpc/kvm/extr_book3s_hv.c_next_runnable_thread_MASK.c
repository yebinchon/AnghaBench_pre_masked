
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcore {int * runnable_threads; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 struct kvm_vcpu* FUNC_0 (int ) ;

__attribute__((used)) static inline struct kvm_vcpu *FUNC_1(struct kvmppc_vcore *VAR_1,
  int *VAR_2)
{
 int VAR_3 = *VAR_2;
 struct kvm_vcpu *VAR_4;

 while (++VAR_3 < VAR_0) {
  VAR_4 = FUNC_0(VAR_1->runnable_threads[VAR_3]);
  if (VAR_4) {
   *VAR_2 = VAR_3;
   return VAR_4;
  }
 }
 return ((void*)0);
}
