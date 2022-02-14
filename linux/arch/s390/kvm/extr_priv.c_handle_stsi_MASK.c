
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_13__ {TYPE_3__* sie_block; } ;
struct TYPE_10__ {int instruction_stsi; } ;
struct kvm_vcpu {TYPE_9__* run; TYPE_6__* kvm; TYPE_4__ arch; TYPE_1__ stat; } ;
struct TYPE_16__ {int* gprs; } ;
struct TYPE_17__ {TYPE_7__ regs; } ;
struct TYPE_18__ {TYPE_8__ s; } ;
struct TYPE_14__ {scalar_t__ user_stsi; } ;
struct TYPE_15__ {TYPE_5__ arch; } ;
struct TYPE_11__ {int mask; } ;
struct TYPE_12__ {TYPE_2__ gpsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,int,int,int) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (struct kvm_vcpu*,void*) ;
 int FUNC_4 (struct kvm_vcpu*,int,int ,int,int,int) ;
 int FUNC_5 (struct kvm_vcpu*,int *) ;
 int FUNC_6 (struct kvm_vcpu*,int) ;
 int FUNC_7 (struct kvm_vcpu*,int ) ;
 int FUNC_8 (struct kvm_vcpu*,int) ;
 int FUNC_9 (void*,int,int,int) ;
 int FUNC_10 (struct kvm_vcpu*,int,int,int,int) ;
 int FUNC_11 (struct kvm_vcpu*,int,int ,void*,int ) ;

__attribute__((used)) static int FUNC_12(struct kvm_vcpu *VAR_6)
{
 int VAR_7 = (VAR_6->run->s.regs.gprs[0] & 0xf0000000) >> 28;
 int VAR_8 = VAR_6->run->s.regs.gprs[0] & 0xff;
 int VAR_9 = VAR_6->run->s.regs.gprs[1] & 0xffff;
 unsigned long VAR_10 = 0;
 u64 VAR_11;
 int VAR_12 = 0;
 u8 VAR_13;

 VAR_6->stat.instruction_stsi++;
 FUNC_0(VAR_6, 3, "STSI: fc: %u sel1: %u sel2: %u", VAR_7, VAR_8, VAR_9);

 if (VAR_6->arch.sie_block->gpsw.mask & VAR_5)
  return FUNC_7(VAR_6, VAR_3);

 if (VAR_7 > 3) {
  FUNC_8(VAR_6, 3);
  return 0;
 }

 if (VAR_6->run->s.regs.gprs[0] & 0x0fffff00
     || VAR_6->run->s.regs.gprs[1] & 0xffff0000)
  return FUNC_7(VAR_6, VAR_4);

 if (VAR_7 == 0) {
  VAR_6->run->s.regs.gprs[0] = 3 << 28;
  FUNC_8(VAR_6, 0);
  return 0;
 }

 VAR_11 = FUNC_5(VAR_6, &VAR_13);

 if (VAR_11 & 0xfff)
  return FUNC_7(VAR_6, VAR_4);

 switch (VAR_7) {
 case 1:
 case 2:
  VAR_10 = FUNC_2(VAR_1);
  if (!VAR_10)
   goto out_no_data;
  if (FUNC_9((void *) VAR_10, VAR_7, VAR_8, VAR_9))
   goto out_no_data;
  break;
 case 3:
  if (VAR_8 != 2 || VAR_9 != 2)
   goto out_no_data;
  VAR_10 = FUNC_2(VAR_1);
  if (!VAR_10)
   goto out_no_data;
  FUNC_3(VAR_6, (void *) VAR_10);
  break;
 }

 VAR_12 = FUNC_11(VAR_6, VAR_11, VAR_13, (void *)VAR_10, VAR_2);
 if (VAR_12) {
  VAR_12 = FUNC_6(VAR_6, VAR_12);
  goto out;
 }
 if (VAR_6->kvm->arch.user_stsi) {
  FUNC_4(VAR_6, VAR_11, VAR_13, VAR_7, VAR_8, VAR_9);
  VAR_12 = -VAR_0;
 }
 FUNC_10(VAR_6, VAR_7, VAR_8, VAR_9, VAR_11);
 FUNC_1(VAR_10);
 FUNC_8(VAR_6, 0);
 VAR_6->run->s.regs.gprs[0] = 0;
 return VAR_12;
out_no_data:
 FUNC_8(VAR_6, 3);
out:
 FUNC_1(VAR_10);
 return VAR_12;
}
