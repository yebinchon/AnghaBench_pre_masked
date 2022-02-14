
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct lppaca {void* dtl_idx; } ;
struct kvmppc_vcore {scalar_t__ tb_offset; scalar_t__ pcpu; } ;
struct TYPE_7__ {int dirty; struct dtl_entry* pinned_addr; struct dtl_entry* pinned_end; } ;
struct TYPE_6__ {scalar_t__ msr; } ;
struct TYPE_5__ {struct lppaca* pinned_addr; } ;
struct TYPE_8__ {unsigned long stolen_logged; TYPE_3__ dtl; scalar_t__ dtl_index; struct dtl_entry* dtl_ptr; TYPE_2__ shregs; scalar_t__ ptid; int tbacct_lock; scalar_t__ busy_stolen; TYPE_1__ vpa; } ;
struct kvm_vcpu {TYPE_4__ arch; } ;
struct dtl_entry {int dispatch_reason; void* srr1; void* srr0; int enqueue_to_dispatch_time; void* timebase; int processor_id; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long) ;
 void* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct dtl_entry*,int ,int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 unsigned long FUNC_9 (struct kvmppc_vcore*,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct kvm_vcpu *VAR_0,
        struct kvmppc_vcore *VAR_1)
{
 struct dtl_entry *VAR_2;
 struct lppaca *VAR_3;
 unsigned long VAR_4;
 unsigned long VAR_5;
 u64 VAR_6;
 unsigned long VAR_7;

 VAR_2 = VAR_0->arch.dtl_ptr;
 VAR_3 = VAR_0->arch.vpa.pinned_addr;
 VAR_6 = FUNC_5();
 VAR_5 = FUNC_9(VAR_1, VAR_6);
 VAR_4 = VAR_5 - VAR_0->arch.stolen_logged;
 VAR_0->arch.stolen_logged = VAR_5;
 FUNC_7(&VAR_0->arch.tbacct_lock, VAR_7);
 VAR_4 += VAR_0->arch.busy_stolen;
 VAR_0->arch.busy_stolen = 0;
 FUNC_8(&VAR_0->arch.tbacct_lock, VAR_7);
 if (!VAR_2 || !VAR_3)
  return;
 FUNC_4(VAR_2, 0, sizeof(struct dtl_entry));
 VAR_2->dispatch_reason = 7;
 VAR_2->processor_id = FUNC_0(VAR_1->pcpu + VAR_0->arch.ptid);
 VAR_2->timebase = FUNC_2(VAR_6 + VAR_1->tb_offset);
 VAR_2->enqueue_to_dispatch_time = FUNC_1(VAR_4);
 VAR_2->srr0 = FUNC_2(FUNC_3(VAR_0));
 VAR_2->srr1 = FUNC_2(VAR_0->arch.shregs.msr);
 ++VAR_2;
 if (VAR_2 == VAR_0->arch.dtl.pinned_end)
  VAR_2 = VAR_0->arch.dtl.pinned_addr;
 VAR_0->arch.dtl_ptr = VAR_2;

 FUNC_6();
 VAR_3->dtl_idx = FUNC_2(++VAR_0->arch.dtl_index);
 VAR_0->arch.dtl.dirty = 1;
}
