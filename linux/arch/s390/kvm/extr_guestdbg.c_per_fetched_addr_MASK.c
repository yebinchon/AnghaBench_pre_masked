
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_7__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_5__* run; TYPE_2__ arch; } ;
typedef scalar_t__ s64 ;
typedef scalar_t__ s32 ;
struct TYPE_8__ {unsigned long* gprs; } ;
struct TYPE_9__ {TYPE_3__ regs; } ;
struct TYPE_10__ {TYPE_4__ s; } ;
struct TYPE_6__ {scalar_t__ icptcode; unsigned long peraddr; int icptstatus; int gpsw; } ;


 scalar_t__ VAR_0 ;
 unsigned long FUNC_0 (int ,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 unsigned long FUNC_2 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_3 (struct kvm_vcpu*,unsigned long,int**,int) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_1, unsigned long *VAR_2)
{
 u8 VAR_3 = 0;
 u16 VAR_4[3];
 int VAR_5;

 if (VAR_1->arch.sie_block->icptcode == VAR_0) {

  *VAR_2 = VAR_1->arch.sie_block->peraddr;





  VAR_5 = FUNC_3(VAR_1, *VAR_2, &VAR_4, 2);
  if (VAR_5)
   return VAR_5;
  if (VAR_4[0] >> 8 == 0x44)
   VAR_3 = 4;
  if ((VAR_4[0] & 0xff0f) == 0xc600)
   VAR_3 = 6;
 } else {

  *VAR_2 = FUNC_0(VAR_1->arch.sie_block->gpsw,
         FUNC_1(VAR_1));
  if (VAR_1->arch.sie_block->icptstatus & 0x01) {
   VAR_3 = (VAR_1->arch.sie_block->icptstatus & 0x60) >> 4;
   if (!VAR_3)
    VAR_3 = 4;
  }
 }

 if (VAR_3) {

  VAR_5 = FUNC_3(VAR_1, *VAR_2, &VAR_4, VAR_3);
  if (VAR_5)
   return VAR_5;
  if (VAR_3 == 6) {

   s32 VAR_6 = *((s32 *) (VAR_4 + 1));


   *VAR_2 += (u64)(s64) VAR_6 * 2;
  } else {

   u32 VAR_7 = (VAR_4[1] & 0xf000) >> 12;
   u32 VAR_8 = VAR_4[1] & 0x0fff;
   u32 VAR_9 = VAR_4[0] & 0x000f;

   *VAR_2 = VAR_7 ? VAR_1->run->s.regs.gprs[VAR_7] : 0;
   *VAR_2 += VAR_9 ? VAR_1->run->s.regs.gprs[VAR_9] : 0;
   *VAR_2 += VAR_8;
  }
  *VAR_2 = FUNC_2(VAR_1, *VAR_2);
 }
 return 0;
}
