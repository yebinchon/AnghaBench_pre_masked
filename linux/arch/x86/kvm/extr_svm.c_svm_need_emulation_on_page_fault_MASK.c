
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int kvm; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int ,struct kvm_vcpu*) ;
 unsigned long FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct kvm_vcpu*) ;

__attribute__((used)) static bool FUNC_5(struct kvm_vcpu *VAR_3)
{
 unsigned long VAR_4 = FUNC_1(VAR_3);
 bool VAR_5 = VAR_4 & VAR_2;
 bool VAR_6 = VAR_4 & VAR_1;
 bool VAR_7 = FUNC_4(VAR_3) == 3;
 if (VAR_6 && (!VAR_5 || VAR_7)) {
  if (!FUNC_3(VAR_3->kvm))
   return 1;

  FUNC_2("KVM: SEV Guest triggered AMD Erratum 1096\n");
  FUNC_0(VAR_0, VAR_3);
 }

 return 0;
}
