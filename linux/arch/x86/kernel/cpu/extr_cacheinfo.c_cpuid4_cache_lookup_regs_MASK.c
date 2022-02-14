
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int number_of_sets; } ;
union _cpuid4_leaf_ecx {TYPE_2__ split; int full; } ;
struct TYPE_7__ {int coherency_line_size; int physical_line_partition; int ways_of_associativity; } ;
union _cpuid4_leaf_ebx {TYPE_3__ split; int full; } ;
struct TYPE_5__ {scalar_t__ type; } ;
union _cpuid4_leaf_eax {TYPE_1__ split; int full; } ;
struct _cpuid4_info_regs {int size; union _cpuid4_leaf_ecx ecx; union _cpuid4_leaf_ebx ebx; union _cpuid4_leaf_eax eax; } ;
struct TYPE_8__ {scalar_t__ x86_vendor; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,union _cpuid4_leaf_eax*,union _cpuid4_leaf_ebx*,union _cpuid4_leaf_ecx*) ;
 int FUNC_1 (struct _cpuid4_info_regs*,int) ;
 TYPE_4__ VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,int,int *,int *,int *,unsigned int*) ;

__attribute__((used)) static int
FUNC_4(int VAR_6, struct _cpuid4_info_regs *VAR_7)
{
 union _cpuid4_leaf_eax VAR_8;
 union _cpuid4_leaf_ebx VAR_9;
 union _cpuid4_leaf_ecx VAR_10;
 unsigned VAR_11;

 if (VAR_5.x86_vendor == VAR_3) {
  if (FUNC_2(VAR_2))
   FUNC_3(0x8000001d, VAR_6, &VAR_8.full,
        &VAR_9.full, &VAR_10.full, &VAR_11);
  else
   FUNC_0(VAR_6, &VAR_8, &VAR_9, &VAR_10);
  FUNC_1(VAR_7, VAR_6);
 } else if (VAR_5.x86_vendor == VAR_4) {
  FUNC_3(0x8000001d, VAR_6, &VAR_8.full,
       &VAR_9.full, &VAR_10.full, &VAR_11);
  FUNC_1(VAR_7, VAR_6);
 } else {
  FUNC_3(4, VAR_6, &VAR_8.full, &VAR_9.full, &VAR_10.full, &VAR_11);
 }

 if (VAR_8.split.type == VAR_0)
  return -VAR_1;

 VAR_7->eax = VAR_8;
 VAR_7->ebx = VAR_9;
 VAR_7->ecx = VAR_10;
 VAR_7->size = (VAR_10.split.number_of_sets + 1) *
     (VAR_9.split.coherency_line_size + 1) *
     (VAR_9.split.physical_line_partition + 1) *
     (VAR_9.split.ways_of_associativity + 1);
 return 0;
}
