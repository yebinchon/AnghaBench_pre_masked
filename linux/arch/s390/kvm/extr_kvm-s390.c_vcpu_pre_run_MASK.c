
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


struct TYPE_15__ {TYPE_6__* sie_block; } ;
struct kvm_vcpu {TYPE_7__ arch; TYPE_8__* kvm; int vcpu_id; TYPE_3__* run; } ;
struct TYPE_12__ {int kicked_mask; } ;
struct TYPE_13__ {TYPE_4__ gisa_int; } ;
struct TYPE_16__ {TYPE_5__ arch; } ;
struct TYPE_14__ {int cpuflags; scalar_t__ icptcode; int gg15; int gg14; } ;
struct TYPE_9__ {int * gprs; } ;
struct TYPE_10__ {TYPE_1__ regs; } ;
struct TYPE_11__ {TYPE_2__ s; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct kvm_vcpu*,int) ;

__attribute__((used)) static int FUNC_15(struct kvm_vcpu *VAR_1)
{
 int VAR_2, VAR_3;






 FUNC_4(VAR_1);

 VAR_1->arch.sie_block->gg14 = VAR_1->run->s.regs.gprs[14];
 VAR_1->arch.sie_block->gg15 = VAR_1->run->s.regs.gprs[15];

 if (FUNC_10())
  FUNC_12();

 if (FUNC_13(VAR_0))
  FUNC_11();

 if (!FUNC_5(VAR_1->kvm)) {
  VAR_2 = FUNC_7(VAR_1);
  if (VAR_2)
   return VAR_2;
 }

 VAR_2 = FUNC_8(VAR_1);
 if (VAR_2)
  return VAR_2;

 if (FUNC_3(VAR_1)) {
  FUNC_6(VAR_1);
  FUNC_9(VAR_1);
 }

 FUNC_2(VAR_1->vcpu_id, VAR_1->kvm->arch.gisa_int.kicked_mask);

 VAR_1->arch.sie_block->icptcode = 0;
 VAR_3 = FUNC_1(&VAR_1->arch.sie_block->cpuflags);
 FUNC_0(VAR_1, 6, "entering sie flags %x", VAR_3);
 FUNC_14(VAR_1, VAR_3);

 return 0;
}
