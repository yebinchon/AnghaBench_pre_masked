
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int gs_enabled; TYPE_5__* sie_block; } ;
struct TYPE_15__ {int instruction_gs; } ;
struct kvm_vcpu {TYPE_6__ arch; TYPE_3__* run; int kvm; TYPE_7__ stat; } ;
struct gs_cb {int dummy; } ;
struct TYPE_12__ {struct gs_cb* gs_cb; } ;
struct TYPE_16__ {TYPE_4__ thread; } ;
struct TYPE_13__ {int ecd; int ecb; } ;
struct TYPE_9__ {int gscb; } ;
struct TYPE_10__ {TYPE_1__ regs; } ;
struct TYPE_11__ {TYPE_2__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,char*) ;
 int FUNC_1 (int,int) ;
 TYPE_8__* VAR_3 ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct gs_cb*) ;
 scalar_t__ FUNC_7 (int ,int) ;

__attribute__((used)) static int FUNC_8(struct kvm_vcpu *VAR_4)
{
 VAR_4->stat.instruction_gs++;

 if (FUNC_7(VAR_4->kvm, 133)) {
  FUNC_0(VAR_4, 3, "%s", "ENABLE: GS (lazy)");
  FUNC_4();
  FUNC_1(2, 4);
  VAR_3->thread.gs_cb = (struct gs_cb *)&VAR_4->run->s.regs.gscb;
  FUNC_6(VAR_3->thread.gs_cb);
  FUNC_5();
  VAR_4->arch.sie_block->ecb |= VAR_0;
  VAR_4->arch.sie_block->ecd |= VAR_1;
  VAR_4->arch.gs_enabled = 1;
  FUNC_3(VAR_4);
  return 0;
 } else
  return FUNC_2(VAR_4, VAR_2);
}
