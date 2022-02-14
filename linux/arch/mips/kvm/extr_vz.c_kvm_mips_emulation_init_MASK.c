
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_mips_callbacks {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,char*) ;
 int VAR_1 ;
 struct kvm_mips_callbacks VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;

int FUNC_2(struct kvm_mips_callbacks **VAR_4)
{
 if (!VAR_1)
  return -VAR_0;





 if (FUNC_0(VAR_3 == -1,
   "pgd_reg not allocated even though cpu_has_vz\n"))
  return -VAR_0;

 FUNC_1("Starting KVM with MIPS VZ extensions\n");

 *VAR_4 = &VAR_2;
 return 0;
}
