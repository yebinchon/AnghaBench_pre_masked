
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct coproc_reg {int reg; scalar_t__ is_64bit; int (* reset ) (struct kvm_vcpu*,struct coproc_reg const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int,unsigned long*) ;
 int FUNC_1 (struct kvm_vcpu*,struct coproc_reg const*) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_1,
         const struct coproc_reg *VAR_2, size_t VAR_3,
         unsigned long *VAR_4)
{
 unsigned long VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  if (VAR_2[VAR_5].reset) {
   int VAR_6 = VAR_2[VAR_5].reg;

   VAR_2[VAR_5].reset(VAR_1, &VAR_2[VAR_5]);
   if (VAR_6 > 0 && VAR_6 < VAR_0) {
    FUNC_0(VAR_6, VAR_4);
    if (VAR_2[VAR_5].is_64bit)
     FUNC_0(VAR_6 + 1, VAR_4);
   }
  }
}
