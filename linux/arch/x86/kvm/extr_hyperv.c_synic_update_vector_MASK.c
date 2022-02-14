
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu_hv_synic {int auto_eoi_bitmap; int vec_bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu_hv_synic*,int) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu_hv_synic*,int) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu_hv_synic *VAR_1,
    int VAR_2)
{
 if (VAR_2 < VAR_0)
  return;

 if (FUNC_3(VAR_1, VAR_2))
  FUNC_1(VAR_2, VAR_1->vec_bitmap);
 else
  FUNC_0(VAR_2, VAR_1->vec_bitmap);

 if (FUNC_2(VAR_1, VAR_2))
  FUNC_1(VAR_2, VAR_1->auto_eoi_bitmap);
 else
  FUNC_0(VAR_2, VAR_1->auto_eoi_bitmap);
}
