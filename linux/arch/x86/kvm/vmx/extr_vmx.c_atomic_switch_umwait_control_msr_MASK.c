
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vcpu_vmx {scalar_t__ msr_ia32_umwait_control; } ;


 int VAR_0 ;
 int FUNC_0 (struct vcpu_vmx*,int ,scalar_t__,scalar_t__,int) ;
 int FUNC_1 (struct vcpu_vmx*,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct vcpu_vmx*) ;

__attribute__((used)) static void FUNC_4(struct vcpu_vmx *VAR_1)
{
 u32 VAR_2;

 if (!FUNC_3(VAR_1))
  return;

 VAR_2 = FUNC_2();

 if (VAR_1->msr_ia32_umwait_control != VAR_2)
  FUNC_0(VAR_1, VAR_0,
   VAR_1->msr_ia32_umwait_control,
   VAR_2, 0);
 else
  FUNC_1(VAR_1, VAR_0);
}
