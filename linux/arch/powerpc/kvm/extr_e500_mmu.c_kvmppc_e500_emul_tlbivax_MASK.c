
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_vcpu_e500 {int vcpu; TYPE_1__* gtlb_params; } ;
struct kvm_vcpu {int dummy; } ;
typedef int gva_t ;
struct TYPE_2__ {int entries; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct kvmppc_vcpu_e500*,int,int) ;
 int FUNC_3 (struct kvmppc_vcpu_e500*,int,int,int ,int) ;
 struct kvmppc_vcpu_e500* FUNC_4 (struct kvm_vcpu*) ;

int FUNC_5(struct kvm_vcpu *VAR_1, gva_t VAR_2)
{
 struct kvmppc_vcpu_e500 *VAR_3 = FUNC_4(VAR_1);
 unsigned int VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = (VAR_2 >> 2) & 0x1;


 VAR_6 = (VAR_2 >> 3) & 0x1;

 if (VAR_4) {

  for (VAR_5 = 0; VAR_5 < VAR_3->gtlb_params[VAR_6].entries;
       VAR_5++)
   FUNC_2(VAR_3, VAR_6, VAR_5);
 } else {
  VAR_2 &= 0xfffff000;
  VAR_5 = FUNC_3(VAR_3, VAR_2, VAR_6,
    FUNC_0(VAR_1), -1);
  if (VAR_5 >= 0)
   FUNC_2(VAR_3, VAR_6, VAR_5);
 }


 FUNC_1(&VAR_3->vcpu);

 return VAR_0;
}
