
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vmcs12 {void* vm_exit_intr_error_code; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 struct vmcs12* FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,scalar_t__,scalar_t__,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static inline int FUNC_5(struct kvm_vcpu *VAR_6,
         u32 VAR_7)
{
 u32 VAR_8 = FUNC_3(VAR_5);






 FUNC_0(VAR_7 == VAR_1);
 if ((VAR_8 &
      (VAR_3 | VAR_2)) ==
     (VAR_3 | VAR_2)) {
  struct vmcs12 *VAR_9 = FUNC_1(VAR_6);

  VAR_9->vm_exit_intr_error_code =
   FUNC_3(VAR_4);
 }

 FUNC_2(VAR_6, VAR_7, VAR_8,
     FUNC_4(VAR_0));
 return 1;
}
