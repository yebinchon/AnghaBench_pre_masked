
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union asce {int dummy; } asce ;
typedef int u8 ;
struct TYPE_5__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {int kvm; TYPE_2__ arch; } ;
typedef int psw_t ;
typedef enum prot_type { ____Placeholder_prot_type } prot_type ;
typedef enum gacc_mode { ____Placeholder_gacc_mode } gacc_mode ;
struct TYPE_6__ {scalar_t__ dat; } ;
struct TYPE_4__ {int gpsw; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct kvm_vcpu*,unsigned long,unsigned long*,union asce const,int,int*) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int ,unsigned long) ;
 unsigned long FUNC_3 (struct kvm_vcpu*,unsigned long) ;
 unsigned long FUNC_4 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_5 (struct kvm_vcpu*,union asce const) ;
 TYPE_3__ FUNC_6 (int ) ;
 int FUNC_7 (struct kvm_vcpu*,int,unsigned long,int ,int,int) ;

__attribute__((used)) static int FUNC_8(struct kvm_vcpu *VAR_6, unsigned long VAR_7, u8 VAR_8,
       unsigned long *VAR_9, unsigned long VAR_10,
       const union asce VAR_11, enum gacc_mode VAR_12)
{
 psw_t *VAR_13 = &VAR_6->arch.sie_block->gpsw;
 int VAR_14, VAR_15 = 0;
 enum prot_type VAR_16;

 VAR_14 = FUNC_5(VAR_6, VAR_11);
 while (VAR_10) {
  VAR_7 = FUNC_3(VAR_6, VAR_7);
  if (VAR_12 == VAR_0 && VAR_14 && FUNC_1(VAR_7))
   return FUNC_7(VAR_6, VAR_4, VAR_7, VAR_8, VAR_12,
      VAR_5);
  VAR_7 &= VAR_1;
  if (FUNC_6(*VAR_13).dat) {
   VAR_15 = FUNC_0(VAR_6, VAR_7, VAR_9, VAR_11, VAR_12, &VAR_16);
   if (VAR_15 < 0)
    return VAR_15;
  } else {
   *VAR_9 = FUNC_4(VAR_6, VAR_7);
   if (FUNC_2(VAR_6->kvm, *VAR_9))
    VAR_15 = VAR_3;
  }
  if (VAR_15)
   return FUNC_7(VAR_6, VAR_15, VAR_7, VAR_8, VAR_12, VAR_16);
  VAR_7 += VAR_2;
  VAR_9++;
  VAR_10--;
 }
 return 0;
}
