
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int tpi_data ;
struct TYPE_7__ {TYPE_2__* sie_block; } ;
struct TYPE_5__ {int instruction_tpi; } ;
struct kvm_vcpu {int kvm; TYPE_3__ arch; TYPE_1__ stat; } ;
struct TYPE_8__ {int subchannel_id; int subchannel_nr; int io_int_parm; int io_int_word; } ;
struct kvm_s390_interrupt_info {TYPE_4__ io; } ;
struct TYPE_6__ {int * gcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_s390_interrupt_info*) ;
 int FUNC_1 (struct kvm_vcpu*,int *) ;
 struct kvm_s390_interrupt_info* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct kvm_vcpu*,int) ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_5 (int ,struct kvm_s390_interrupt_info*) ;
 int FUNC_6 (struct kvm_vcpu*,int) ;
 int FUNC_7 (struct kvm_vcpu*,int,int ,int**,unsigned long) ;
 scalar_t__ FUNC_8 (struct kvm_vcpu*,int ,int**,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct kvm_vcpu *VAR_3)
{
 struct kvm_s390_interrupt_info *VAR_4;
 unsigned long VAR_5;
 u32 VAR_6[3];
 int VAR_7;
 u64 VAR_8;
 u8 VAR_9;

 VAR_3->stat.instruction_tpi++;

 VAR_8 = FUNC_1(VAR_3, &VAR_9);
 if (VAR_8 & 3)
  return FUNC_4(VAR_3, VAR_1);

 VAR_4 = FUNC_2(VAR_3->kvm, VAR_3->arch.sie_block->gcr[6], 0);
 if (!VAR_4) {
  FUNC_6(VAR_3, 0);
  return 0;
 }

 VAR_6[0] = VAR_4->io.subchannel_id << 16 | VAR_4->io.subchannel_nr;
 VAR_6[1] = VAR_4->io.io_int_parm;
 VAR_6[2] = VAR_4->io.io_int_word;
 if (VAR_8) {




  VAR_5 = sizeof(VAR_6) - 4;
  VAR_7 = FUNC_7(VAR_3, VAR_8, VAR_9, &VAR_6, VAR_5);
  if (VAR_7) {
   VAR_7 = FUNC_3(VAR_3, VAR_7);
   goto reinject_interrupt;
  }
 } else {




  VAR_5 = sizeof(VAR_6);
  if (FUNC_8(VAR_3, VAR_2, &VAR_6, VAR_5)) {

   VAR_7 = -VAR_0;
   goto reinject_interrupt;
  }
 }


 FUNC_0(VAR_4);
 FUNC_6(VAR_3, 1);
 return 0;
reinject_interrupt:





 if (FUNC_5(VAR_3->kvm, VAR_4)) {
  FUNC_0(VAR_4);
  VAR_7 = -VAR_0;
 }

 return VAR_7 ? -VAR_0 : 0;
}
