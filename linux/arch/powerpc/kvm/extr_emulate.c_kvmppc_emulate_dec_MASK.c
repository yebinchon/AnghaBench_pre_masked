
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long long dec; int dec_jiffies; int dec_timer; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (unsigned long long,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned long long,unsigned long) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (char*,unsigned long long) ;
 unsigned long long FUNC_7 (unsigned long long) ;

void FUNC_8(struct kvm_vcpu *VAR_2)
{
 unsigned long VAR_3;
 unsigned long long VAR_4;

 FUNC_6("mtDEC: %lx\n", VAR_2->arch.dec);
 FUNC_3(&VAR_2->arch.dec_timer);
 VAR_4 = VAR_2->arch.dec;




 VAR_4 = FUNC_7(VAR_4);
 VAR_3 = FUNC_0(VAR_4, VAR_1);
 FUNC_2(&VAR_2->arch.dec_timer,
  FUNC_4(VAR_4, VAR_3), VAR_0);
 VAR_2->arch.dec_jiffies = FUNC_1();
}
