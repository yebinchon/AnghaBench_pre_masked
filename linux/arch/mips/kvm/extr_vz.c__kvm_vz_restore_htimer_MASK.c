
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int dummy; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct kvm_vcpu*,int*) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct kvm_vcpu *VAR_1,
       u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4, VAR_5;
 ktime_t VAR_6;
 unsigned long VAR_7;





 FUNC_4(VAR_7);
 VAR_6 = FUNC_1(VAR_1, &VAR_4);
 FUNC_7(VAR_4 - FUNC_5());
 FUNC_3(VAR_7);


 FUNC_0();
 FUNC_8(VAR_3);






 FUNC_0();
 VAR_5 = FUNC_6();
 if (VAR_5 - VAR_4 > VAR_2 - VAR_4 - 1)
  FUNC_2(VAR_1, VAR_0);
}
