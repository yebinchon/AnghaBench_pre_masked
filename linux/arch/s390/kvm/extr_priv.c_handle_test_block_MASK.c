
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int pgm; TYPE_3__* sie_block; } ;
struct TYPE_8__ {int instruction_tb; } ;
struct kvm_vcpu {TYPE_7__* run; int kvm; TYPE_4__ arch; TYPE_1__ stat; } ;
typedef int gpa_t ;
struct TYPE_12__ {int* gprs; } ;
struct TYPE_13__ {TYPE_5__ regs; } ;
struct TYPE_14__ {TYPE_6__ s; } ;
struct TYPE_9__ {int mask; } ;
struct TYPE_10__ {TYPE_2__ gpsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int,int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,int) ;
 int FUNC_3 (struct kvm_vcpu*,int *,int*) ;
 int FUNC_4 (struct kvm_vcpu*,int *) ;
 int FUNC_5 (struct kvm_vcpu*,int ) ;
 int FUNC_6 (struct kvm_vcpu*,int) ;
 int FUNC_7 (struct kvm_vcpu*,int) ;
 int FUNC_8 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static int FUNC_9(struct kvm_vcpu *VAR_6)
{
 gpa_t VAR_7;
 int VAR_8;

 VAR_6->stat.instruction_tb++;

 if (VAR_6->arch.sie_block->gpsw.mask & VAR_5)
  return FUNC_5(VAR_6, VAR_4);

 FUNC_3(VAR_6, ((void*)0), &VAR_8);
 VAR_7 = VAR_6->run->s.regs.gprs[VAR_8] & VAR_1;
 VAR_7 = FUNC_6(VAR_6, VAR_7);
 if (FUNC_2(VAR_6, VAR_7))
  return FUNC_4(VAR_6, &VAR_6->arch.pgm);
 VAR_7 = FUNC_7(VAR_6, VAR_7);

 if (FUNC_1(VAR_6->kvm, VAR_7))
  return FUNC_5(VAR_6, VAR_3);




 if (FUNC_0(VAR_6->kvm, VAR_7, VAR_2))
  return -VAR_0;
 FUNC_8(VAR_6, 0);
 VAR_6->run->s.regs.gprs[0] = 0;
 return 0;
}
