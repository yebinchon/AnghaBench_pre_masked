
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu_init {int target; } ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct kvm_vcpu_init*,int ,int) ;

int FUNC_2(struct kvm_vcpu_init *VAR_1)
{
 int VAR_2 = FUNC_0();

 if (VAR_2 < 0)
  return -VAR_0;

 FUNC_1(VAR_1, 0, sizeof(*VAR_1));







 VAR_1->target = (__u32)VAR_2;

 return 0;
}
