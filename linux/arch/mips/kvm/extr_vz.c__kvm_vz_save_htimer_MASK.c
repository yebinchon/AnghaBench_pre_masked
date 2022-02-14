
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int dummy; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct kvm_vcpu*,int ,int,int) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct kvm_vcpu *VAR_1,
    u32 *VAR_2, u32 *VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6, VAR_7;
 ktime_t VAR_8;

 VAR_5 = FUNC_5();
 *VAR_2 = VAR_5;

 VAR_8 = FUNC_1();





 VAR_6 = FUNC_6();
 FUNC_0();
 VAR_4 = FUNC_4();
 *VAR_3 = VAR_4;






 FUNC_0();
 VAR_7 = FUNC_6();






 if (VAR_7 - VAR_6 > VAR_5 - VAR_6 - 1)
  FUNC_3(VAR_1, VAR_0);





 FUNC_2(VAR_1, VAR_8, VAR_7, -0x10000);
}
