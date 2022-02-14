
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int dummy; } ;
typedef long s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*,unsigned long,unsigned long) ;
 int FUNC_1 (struct kvm_vcpu*,unsigned long,unsigned long*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct kvm_vcpu *VAR_1, unsigned long VAR_2,
        unsigned long *VAR_3)
{
 u32 VAR_4 = VAR_2;
 unsigned long VAR_5;

 if ((long)VAR_2 == (s32)VAR_4) {

  if (VAR_0) {
   unsigned long VAR_6, VAR_7;

   switch (VAR_4 >> 29) {
   case 0:
   case 1:
    VAR_5 = FUNC_4() >> 16;
    VAR_6 = (unsigned long)0xfc0000000ull;
    break;
   case 2:
   case 3:
    VAR_5 = FUNC_4();
    VAR_6 = (unsigned long)0xfc0000000ull;
    break;
   case 4:
    VAR_5 = FUNC_3() >> 16;
    VAR_6 = (unsigned long)0xfe0000000ull;
    break;
   case 5:
    VAR_5 = FUNC_3();
    VAR_6 = (unsigned long)0xfe0000000ull;
    break;
   case 6:
    VAR_5 = FUNC_2() >> 16;
    VAR_6 = (unsigned long)0xfe0000000ull;
    break;
   case 7:
    VAR_5 = FUNC_2();
    VAR_6 = (unsigned long)0xfe0000000ull;
    break;
   default:




    FUNC_5();
   }

   if (FUNC_0(VAR_1, (VAR_5 >> 4) & 0x7,
          VAR_5 & 0x0008))
    goto tlb_mapped;


   VAR_7 = (VAR_5 << 20) & VAR_6;
   VAR_7 |= VAR_4 & ~VAR_6;
   *VAR_3 = VAR_7;
   return 0;
  } else if ((s32)VAR_4 < (s32)0xc0000000) {

   *VAR_3 = VAR_4 & 0x1fffffff;
   return 0;
  }
 }

tlb_mapped:
 return FUNC_1(VAR_1, VAR_2, VAR_3);
}
