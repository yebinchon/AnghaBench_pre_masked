
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u8 ;
typedef unsigned long u32 ;
typedef unsigned long u16 ;
struct TYPE_3__ {unsigned long* gprs; size_t io_gpr; int io_pc; int pc; } ;
struct kvm_vcpu {int mmio_needed; TYPE_1__ arch; } ;
struct TYPE_4__ {int len; scalar_t__ data; } ;
struct kvm_run {TYPE_2__ mmio; } ;
typedef unsigned long s8 ;
typedef unsigned long s64 ;
typedef unsigned long s32 ;
typedef unsigned long s16 ;
typedef enum emulation_result { ____Placeholder_emulation_result } emulation_result ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;

enum emulation_result FUNC_1(struct kvm_vcpu *VAR_2,
        struct kvm_run *VAR_3)
{
 unsigned long *VAR_4 = &VAR_2->arch.gprs[VAR_2->arch.io_gpr];
 enum emulation_result VAR_5 = VAR_0;

 if (VAR_3->mmio.len > sizeof(*VAR_4)) {
  FUNC_0("Bad MMIO length: %d", VAR_3->mmio.len);
  VAR_5 = VAR_1;
  goto done;
 }


 VAR_2->arch.pc = VAR_2->arch.io_pc;

 switch (VAR_3->mmio.len) {
 case 8:
  *VAR_4 = *(s64 *)VAR_3->mmio.data;
  break;

 case 4:
  if (VAR_2->mmio_needed == 2)
   *VAR_4 = *(s32 *)VAR_3->mmio.data;
  else
   *VAR_4 = *(u32 *)VAR_3->mmio.data;
  break;

 case 2:
  if (VAR_2->mmio_needed == 2)
   *VAR_4 = *(s16 *) VAR_3->mmio.data;
  else
   *VAR_4 = *(u16 *)VAR_3->mmio.data;

  break;
 case 1:
  if (VAR_2->mmio_needed == 2)
   *VAR_4 = *(s8 *) VAR_3->mmio.data;
  else
   *VAR_4 = *(u8 *) VAR_3->mmio.data;
  break;
 }

done:
 return VAR_5;
}
