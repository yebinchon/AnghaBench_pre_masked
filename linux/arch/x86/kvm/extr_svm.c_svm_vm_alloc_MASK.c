
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;
struct kvm_svm {struct kvm kvm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct kvm_svm* FUNC_0 (int,int,int ) ;

__attribute__((used)) static struct kvm *FUNC_1(void)
{
 struct kvm_svm *VAR_3 = FUNC_0(sizeof(struct kvm_svm),
         VAR_0 | VAR_2,
         VAR_1);
 return &VAR_3->kvm;
}
