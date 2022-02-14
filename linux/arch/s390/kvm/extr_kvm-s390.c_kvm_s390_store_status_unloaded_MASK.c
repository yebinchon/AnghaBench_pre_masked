
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int u64 ;
struct TYPE_10__ {TYPE_4__* sie_block; } ;
struct kvm_vcpu {TYPE_5__ arch; TYPE_3__* run; } ;
typedef unsigned int freg_t ;
typedef int __vector128 ;
struct TYPE_9__ {unsigned int gpsw; unsigned int todpr; int ckc; unsigned int gcr; } ;
struct TYPE_6__ {unsigned int* fprs; unsigned int* gprs; unsigned int fpc; unsigned int acrs; scalar_t__ vrs; } ;
struct TYPE_7__ {TYPE_1__ regs; } ;
struct TYPE_8__ {TYPE_2__ s; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 int FUNC_0 (unsigned int*,int *) ;
 unsigned int FUNC_1 (struct kvm_vcpu*) ;
 unsigned int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,unsigned long,...) ;
 scalar_t__ FUNC_4 (struct kvm_vcpu*,int,unsigned char*,int) ;

int FUNC_5(struct kvm_vcpu *VAR_15, unsigned long VAR_16)
{
 unsigned char VAR_17 = 1;
 freg_t VAR_18[VAR_4];
 unsigned int VAR_19;
 u64 VAR_20, VAR_21;
 int VAR_22;

 VAR_19 = FUNC_2(VAR_15);
 if (VAR_16 == VAR_1) {
  if (FUNC_3(VAR_15, 163, &VAR_17, 1))
   return -VAR_0;
  VAR_16 = 0;
 } else if (VAR_16 == VAR_2) {
  if (FUNC_4(VAR_15, 163, &VAR_17, 1))
   return -VAR_0;
  VAR_16 = VAR_19;
 } else
  VAR_16 -= VAR_9;


 if (VAR_3) {
  FUNC_0(VAR_18, (__vector128 *) VAR_15->run->s.regs.vrs);
  VAR_22 = FUNC_3(VAR_15, VAR_16 + VAR_9,
         VAR_18, 128);
 } else {
  VAR_22 = FUNC_3(VAR_15, VAR_16 + VAR_9,
         VAR_15->run->s.regs.fprs, 128);
 }
 VAR_22 |= FUNC_3(VAR_15, VAR_16 + VAR_11,
         VAR_15->run->s.regs.gprs, 128);
 VAR_22 |= FUNC_3(VAR_15, VAR_16 + VAR_13,
         &VAR_15->arch.sie_block->gpsw, 16);
 VAR_22 |= FUNC_3(VAR_15, VAR_16 + VAR_12,
         &VAR_19, 4);
 VAR_22 |= FUNC_3(VAR_15, VAR_16 + VAR_10,
         &VAR_15->run->s.regs.fpc, 4);
 VAR_22 |= FUNC_3(VAR_15, VAR_16 + VAR_14,
         &VAR_15->arch.sie_block->todpr, 4);
 VAR_21 = FUNC_1(VAR_15);
 VAR_22 |= FUNC_3(VAR_15, VAR_16 + VAR_7,
         &VAR_21, 8);
 VAR_20 = VAR_15->arch.sie_block->ckc >> 8;
 VAR_22 |= FUNC_3(VAR_15, VAR_16 + VAR_6,
         &VAR_20, 8);
 VAR_22 |= FUNC_3(VAR_15, VAR_16 + VAR_5,
         &VAR_15->run->s.regs.acrs, 64);
 VAR_22 |= FUNC_3(VAR_15, VAR_16 + VAR_8,
         &VAR_15->arch.sie_block->gcr, 128);
 return VAR_22 ? -VAR_0 : 0;
}
