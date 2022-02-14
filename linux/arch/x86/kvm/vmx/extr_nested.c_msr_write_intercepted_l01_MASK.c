
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_3__ {unsigned long* msr_bitmap; } ;
struct TYPE_4__ {TYPE_1__ vmcs01; } ;


 int FUNC_0 () ;
 int FUNC_1 (int,unsigned long*) ;
 TYPE_2__* FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static bool FUNC_3(struct kvm_vcpu *VAR_0, u32 VAR_1)
{
 unsigned long *VAR_2;
 int VAR_3 = sizeof(unsigned long);

 if (!FUNC_0())
  return 1;

 VAR_2 = FUNC_2(VAR_0)->vmcs01.msr_bitmap;

 if (VAR_1 <= 0x1fff) {
  return !!FUNC_1(VAR_1, VAR_2 + 0x800 / VAR_3);
 } else if ((VAR_1 >= 0xc0000000) && (VAR_1 <= 0xc0001fff)) {
  VAR_1 &= 0x1fff;
  return !!FUNC_1(VAR_1, VAR_2 + 0xc00 / VAR_3);
 }

 return 1;
}
