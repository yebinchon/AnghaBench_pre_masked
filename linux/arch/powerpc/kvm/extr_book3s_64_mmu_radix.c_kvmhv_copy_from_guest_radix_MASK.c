
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
typedef int gva_t ;


 long FUNC_0 (struct kvm_vcpu*,int ,void*,int *,unsigned long) ;
 int FUNC_1 (void*,int ,long) ;

long FUNC_2(struct kvm_vcpu *VAR_0, gva_t VAR_1, void *VAR_2,
     unsigned long VAR_3)
{
 long VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, ((void*)0), VAR_3);
 if (VAR_4 > 0)
  FUNC_1(VAR_2 + (VAR_3 - VAR_4), 0, VAR_4);

 return VAR_4;
}
