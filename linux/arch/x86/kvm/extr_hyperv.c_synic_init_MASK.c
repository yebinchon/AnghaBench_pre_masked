
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu_hv_synic {int * sint_to_gsi; int * sint; int version; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct kvm_vcpu_hv_synic*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu_hv_synic *VAR_2)
{
 int VAR_3;

 FUNC_3(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->version = VAR_1;
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->sint); VAR_3++) {
  FUNC_1(&VAR_2->sint[VAR_3], VAR_0);
  FUNC_2(&VAR_2->sint_to_gsi[VAR_3], -1);
 }
}
