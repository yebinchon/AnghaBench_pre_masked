
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_cpuid_entry2 {int function; int index; scalar_t__ flags; int edx; int ecx; int ebx; int eax; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int,int *,int *,int *,int *) ;

__attribute__((used)) static void FUNC_1(struct kvm_cpuid_entry2 *VAR_2, u32 VAR_3,
      u32 VAR_4)
{
 VAR_2->function = VAR_3;
 VAR_2->index = VAR_4;
 VAR_2->flags = 0;

 FUNC_0(VAR_2->function, VAR_2->index,
      &VAR_2->eax, &VAR_2->ebx, &VAR_2->ecx, &VAR_2->edx);

 switch (VAR_3) {
 case 2:
  VAR_2->flags |= VAR_1;
  break;
 case 4:
 case 7:
 case 0xb:
 case 0xd:
 case 0xf:
 case 0x10:
 case 0x12:
 case 0x14:
 case 0x17:
 case 0x18:
 case 0x1f:
 case 0x8000001d:
  VAR_2->flags |= VAR_0;
  break;
 }
}
