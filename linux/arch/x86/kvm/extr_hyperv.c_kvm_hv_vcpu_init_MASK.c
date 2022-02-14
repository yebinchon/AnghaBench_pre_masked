
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu_hv {int * stimer; int stimer_pending_bitmap; int synic; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 struct kvm_vcpu_hv* FUNC_4 (struct kvm_vcpu*) ;

void FUNC_5(struct kvm_vcpu *VAR_1)
{
 struct kvm_vcpu_hv *VAR_2 = FUNC_4(VAR_1);
 int VAR_3;

 FUNC_3(&VAR_2->synic);

 FUNC_1(VAR_2->stimer_pending_bitmap, VAR_0);
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->stimer); VAR_3++)
  FUNC_2(&VAR_2->stimer[VAR_3], VAR_3);
}
