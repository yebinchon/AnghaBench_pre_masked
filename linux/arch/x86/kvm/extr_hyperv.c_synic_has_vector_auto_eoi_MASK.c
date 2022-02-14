
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu_hv_synic {int sint; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct kvm_vcpu_hv_synic*,int) ;

__attribute__((used)) static bool FUNC_3(struct kvm_vcpu_hv_synic *VAR_1,
         int VAR_2)
{
 int VAR_3;
 u64 VAR_4;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->sint); VAR_3++) {
  VAR_4 = FUNC_2(VAR_1, VAR_3);
  if (FUNC_1(VAR_4) == VAR_2 &&
      VAR_4 & VAR_0)
   return 1;
 }
 return 0;
}
