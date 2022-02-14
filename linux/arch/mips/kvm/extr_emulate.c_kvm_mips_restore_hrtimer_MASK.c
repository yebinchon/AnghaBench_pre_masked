
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int count_bias; int count_hz; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (struct kvm_vcpu*,int ,int) ;

int FUNC_5(struct kvm_vcpu *VAR_1, ktime_t VAR_2,
        u32 VAR_3, int VAR_4)
{
 ktime_t VAR_5, VAR_6;
 u32 VAR_7, VAR_8;
 u64 VAR_9;
 int VAR_10, VAR_11 = 0;


 VAR_8 = VAR_1->arch.count_bias +
   FUNC_3(VAR_1, VAR_2);
 VAR_10 = VAR_3 - VAR_8;
 if (VAR_10 < VAR_4) {
  VAR_6 = VAR_2;
  VAR_1->arch.count_bias += VAR_10;
  VAR_11 = VAR_10;
  goto resume;
 }


 VAR_5 = FUNC_1();
 VAR_7 = VAR_1->arch.count_bias + FUNC_3(VAR_1, VAR_5);





 VAR_10 = VAR_3 - VAR_7;
 if (VAR_10 > 0) {
  VAR_6 = VAR_5;
  VAR_1->arch.count_bias += VAR_10;
  VAR_11 = VAR_10;
  goto resume;
 }


 VAR_9 = (u64)(u32)(VAR_7 - VAR_3);
 VAR_9 = FUNC_0(VAR_9 * VAR_0, VAR_1->arch.count_hz);
 VAR_6 = FUNC_2(VAR_5, VAR_9);

resume:

 FUNC_4(VAR_1, VAR_6, VAR_3);
 return VAR_11;
}
