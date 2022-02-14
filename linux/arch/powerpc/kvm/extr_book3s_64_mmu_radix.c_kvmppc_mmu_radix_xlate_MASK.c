
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct kvmppc_pte {scalar_t__ may_execute; scalar_t__ may_write; scalar_t__ may_read; } ;
struct TYPE_6__ {unsigned long amr; unsigned long iamr; int pid; } ;
struct kvm_vcpu {TYPE_3__ arch; TYPE_2__* kvm; } ;
typedef int gva_t ;
struct TYPE_4__ {int process_table; } ;
struct TYPE_5__ {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int,struct kvmppc_pte*,int ,int ,int*) ;

int FUNC_2(struct kvm_vcpu *VAR_3, gva_t VAR_4,
      struct kvmppc_pte *VAR_5, bool VAR_6, bool VAR_7)
{
 u32 VAR_8;
 u64 VAR_9;
 int VAR_10;


 switch (VAR_4 >> 62) {
 case 0:
  VAR_8 = VAR_3->arch.pid;
  break;
 case 3:
  VAR_8 = 0;
  break;
 default:
  return -VAR_0;
 }

 VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_5,
    VAR_3->kvm->arch.process_table, VAR_8, &VAR_9);
 if (VAR_10)
  return VAR_10;


 if (FUNC_0(VAR_3) & VAR_1) {
  if (VAR_9 & VAR_2) {
   VAR_5->may_read = 0;
   VAR_5->may_write = 0;
   VAR_5->may_execute = 0;
  }
 } else {
  if (!(VAR_9 & VAR_2)) {

   if (VAR_3->arch.amr & (1ul << 62))
    VAR_5->may_read = 0;
   if (VAR_3->arch.amr & (1ul << 63))
    VAR_5->may_write = 0;
   if (VAR_3->arch.iamr & (1ul << 62))
    VAR_5->may_execute = 0;
  }
 }

 return 0;
}
