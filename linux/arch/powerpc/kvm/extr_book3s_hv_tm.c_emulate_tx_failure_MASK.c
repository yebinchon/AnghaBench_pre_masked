
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {int msr; } ;
struct TYPE_4__ {int nip; } ;
struct TYPE_6__ {int tfiar; int texasr; TYPE_2__ shregs; TYPE_1__ regs; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_6, u64 VAR_7)
{
 u64 VAR_8, VAR_9;
 u64 VAR_10 = VAR_6->arch.shregs.msr;

 VAR_9 = VAR_6->arch.regs.nip & ~0x3ull;
 VAR_8 = (VAR_7 << 56) | VAR_1 | VAR_3 | VAR_2;
 if (FUNC_0(VAR_6->arch.shregs.msr))
  VAR_8 |= VAR_5;
 if (VAR_10 & VAR_0) {
  VAR_8 |= VAR_4;
  VAR_9 |= 1;
 }
 VAR_6->arch.tfiar = VAR_9;

 VAR_6->arch.texasr = (VAR_6->arch.texasr & 0x3ffffff) | VAR_8;
}
