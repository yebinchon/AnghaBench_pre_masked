
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int host_cp0_cause; unsigned long host_cp0_badvaddr; scalar_t__ pc; } ;
struct kvm_vcpu {TYPE_1__* run; TYPE_2__ arch; } ;
struct TYPE_3__ {int exit_reason; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (char*,int,int*,int,unsigned long,int ) ;
 int FUNC_2 (int*,struct kvm_vcpu*,int*) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_5)
{
 u32 *VAR_6 = (u32 *) VAR_5->arch.pc;
 u32 VAR_7 = VAR_5->arch.host_cp0_cause;
 u32 VAR_8 = (VAR_7 & VAR_2) >> VAR_0;
 unsigned long VAR_9 = VAR_5->arch.host_cp0_badvaddr;
 u32 VAR_10 = 0;




 if (VAR_7 & VAR_1)
  VAR_6 += 1;
 FUNC_2(VAR_6, VAR_5, &VAR_10);

 FUNC_1("Exception Code: %d not handled @ PC: %p, inst: 0x%08x BadVaddr: %#lx Status: %#x\n",
  VAR_8, VAR_6, VAR_10, VAR_9,
  FUNC_3());
 FUNC_0(VAR_5);
 VAR_5->run->exit_reason = VAR_3;
 return VAR_4;
}
