
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_cpuid_entry2 {int function; int eax; void* ecx; scalar_t__ flags; scalar_t__ index; } ;


 void* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct kvm_cpuid_entry2 *VAR_3,
        u32 VAR_4, int *VAR_5, int VAR_6)
{
 VAR_3->function = VAR_4;
 VAR_3->index = 0;
 VAR_3->flags = 0;

 switch (VAR_4) {
 case 0:
  VAR_3->eax = 7;
  ++*VAR_5;
  break;
 case 1:
  VAR_3->ecx = FUNC_0(VAR_1);
  ++*VAR_5;
  break;
 case 7:
  VAR_3->flags |= VAR_0;
  VAR_3->eax = 0;
  VAR_3->ecx = FUNC_0(VAR_2);
  ++*VAR_5;
 default:
  break;
 }

 return 0;
}
