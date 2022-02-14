
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nip; } ;
struct TYPE_6__ {TYPE_1__ regs; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_8__ {int status; int address; } ;
struct TYPE_7__ {TYPE_4__ arch; } ;
struct kvm_run {TYPE_3__ debug; int exit_reason; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static int FUNC_2(struct kvm_run *VAR_5, struct kvm_vcpu *VAR_6,
       unsigned int VAR_7, int *VAR_8)
{
 int VAR_9 = VAR_1;

 switch (FUNC_0(VAR_7)) {
 case 128:
  VAR_5->exit_reason = VAR_4;
  VAR_5->debug.arch.address = VAR_6->arch.regs.nip;
  VAR_5->debug.arch.status = 0;
  FUNC_1(VAR_6, VAR_0);
  VAR_9 = VAR_2;
  *VAR_8 = 0;
  break;
 default:
  VAR_9 = VAR_3;
 }
 return VAR_9;
}
