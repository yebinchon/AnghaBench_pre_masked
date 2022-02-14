
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct TYPE_5__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_6__ {int const mask; scalar_t__ addr; } ;
typedef TYPE_3__ psw_t ;
struct TYPE_4__ {int* gcr; TYPE_3__ gpsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kvm_vcpu*,struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_4,
     struct kvm_vcpu *VAR_5,
     u16 VAR_6, u64 *VAR_7)
{
 const u64 VAR_8 = VAR_1 | VAR_0;
 u16 VAR_9, VAR_10;
 psw_t *VAR_11;
 bool VAR_12;

 VAR_12 = FUNC_1(VAR_4);
 VAR_11 = &VAR_5->arch.sie_block->gpsw;
 VAR_9 = VAR_5->arch.sie_block->gcr[4] & 0xffff;
 VAR_10 = VAR_5->arch.sie_block->gcr[3] & 0xffff;


 if (!FUNC_2(VAR_4)
     || (VAR_11->mask & VAR_8) != VAR_8
     || (VAR_12 && VAR_11->addr != 0)
     || (!VAR_12 && (VAR_6 == VAR_9 || VAR_6 == VAR_10))) {
  return FUNC_0(VAR_4, VAR_5);
 } else {
  *VAR_7 &= 0xffffffff00000000UL;
  *VAR_7 |= VAR_3;
  return VAR_2;
 }
}
