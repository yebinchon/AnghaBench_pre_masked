
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sys_reg_desc {int reg; int (* reset ) (struct kvm_vcpu*,struct sys_reg_desc const*) ;} ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,unsigned long*) ;
 int FUNC_1 (struct kvm_vcpu*,struct sys_reg_desc const*) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_1,
    const struct sys_reg_desc *VAR_2, size_t VAR_3,
    unsigned long *VAR_4)
{
 unsigned long VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  if (VAR_2[VAR_5].reset) {
   int VAR_6 = VAR_2[VAR_5].reg;

   VAR_2[VAR_5].reset(VAR_1, &VAR_2[VAR_5]);
   if (VAR_6 > 0 && VAR_6 < VAR_0)
    FUNC_0(VAR_6, VAR_4);
  }
}
