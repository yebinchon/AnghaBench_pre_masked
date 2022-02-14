
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


typedef int u64 ;
struct TYPE_16__ {TYPE_7__* sie_block; } ;
struct TYPE_9__ {int instruction_tsch; } ;
struct kvm_vcpu {TYPE_8__ arch; TYPE_6__* run; int kvm; TYPE_1__ stat; } ;
struct TYPE_12__ {int io_int_word; int io_int_parm; int subchannel_nr; int subchannel_id; } ;
struct kvm_s390_interrupt_info {TYPE_4__ io; } ;
struct TYPE_15__ {int ipb; } ;
struct TYPE_13__ {int dequeued; int ipb; int io_int_word; int io_int_parm; int subchannel_nr; int subchannel_id; } ;
struct TYPE_10__ {int * gprs; } ;
struct TYPE_11__ {TYPE_2__ regs; } ;
struct TYPE_14__ {TYPE_5__ s390_tsch; int exit_reason; TYPE_3__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_s390_interrupt_info*) ;
 struct kvm_s390_interrupt_info* FUNC_1 (int ,int const,int ) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_2)
{
 struct kvm_s390_interrupt_info *VAR_3 = ((void*)0);
 const u64 VAR_4 = 0xffUL << 24;

 VAR_2->stat.instruction_tsch++;


 if (VAR_2->run->s.regs.gprs[1])
  VAR_3 = FUNC_1(VAR_2->kvm, VAR_4,
        VAR_2->run->s.regs.gprs[1]);
 VAR_2->run->exit_reason = VAR_1;
 VAR_2->run->s390_tsch.dequeued = !!VAR_3;
 if (VAR_3) {
  VAR_2->run->s390_tsch.subchannel_id = VAR_3->io.subchannel_id;
  VAR_2->run->s390_tsch.subchannel_nr = VAR_3->io.subchannel_nr;
  VAR_2->run->s390_tsch.io_int_parm = VAR_3->io.io_int_parm;
  VAR_2->run->s390_tsch.io_int_word = VAR_3->io.io_int_word;
 }
 VAR_2->run->s390_tsch.ipb = VAR_2->arch.sie_block->ipb;
 FUNC_0(VAR_3);
 return -VAR_0;
}
