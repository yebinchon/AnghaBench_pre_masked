
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu_hv_synic {int sint; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct kvm_vcpu_hv_synic*,int) ;

__attribute__((used)) static bool FUNC_3(struct kvm_vcpu_hv_synic *VAR_0,
          int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->sint); VAR_2++) {
  if (FUNC_1(FUNC_2(VAR_0, VAR_2)) == VAR_1)
   return 1;
 }
 return 0;
}
