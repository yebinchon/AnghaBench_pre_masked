
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union l3_cache {size_t assoc; unsigned int line_size; unsigned int lines_per_tag; int size_encoded; int val; } ;
union l2_cache {size_t assoc; unsigned int line_size; unsigned int lines_per_tag; int val; } ;
union l1_cache {size_t assoc; unsigned int line_size; unsigned int lines_per_tag; unsigned int size_in_kb; int val; } ;
struct TYPE_6__ {unsigned int number_of_sets; } ;
union _cpuid4_leaf_ecx {TYPE_2__ split; scalar_t__ full; } ;
struct TYPE_7__ {unsigned int coherency_line_size; unsigned int ways_of_associativity; unsigned int physical_line_partition; } ;
union _cpuid4_leaf_ebx {TYPE_3__ split; scalar_t__ full; } ;
struct TYPE_5__ {int is_self_initializing; int is_fully_associative; void* num_cores_on_die; scalar_t__ num_threads_sharing; int level; int type; } ;
union _cpuid4_leaf_eax {TYPE_1__ split; scalar_t__ full; } ;
struct TYPE_8__ {int x86_max_cores; int x86_cache_size; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 unsigned int* VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_4__ VAR_2 ;
 int FUNC_2 (int,unsigned int*,unsigned int*,int *,int *) ;
 int * VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static void
FUNC_3(int VAR_5, union _cpuid4_leaf_eax *VAR_6,
       union _cpuid4_leaf_ebx *VAR_7,
       union _cpuid4_leaf_ecx *VAR_8)
{
 unsigned VAR_9;
 unsigned VAR_10, VAR_11, VAR_12, VAR_13;
 union l1_cache VAR_14, VAR_15;
 union l2_cache VAR_16;
 union l3_cache VAR_17;
 union l1_cache *VAR_18 = &VAR_15;

 VAR_6->full = 0;
 VAR_7->full = 0;
 VAR_8->full = 0;

 FUNC_2(0x80000005, &VAR_9, &VAR_9, &VAR_15.val, &VAR_14.val);
 FUNC_2(0x80000006, &VAR_9, &VAR_9, &VAR_16, &VAR_17);

 switch (VAR_5) {
 case 1:
  VAR_18 = &VAR_14;

 case 0:
  if (!VAR_18->val)
   return;
  VAR_12 = VAR_1[VAR_18->assoc];
  VAR_10 = VAR_18->line_size;
  VAR_11 = VAR_18->lines_per_tag;
  VAR_13 = VAR_18->size_in_kb;
  break;
 case 2:
  if (!VAR_16)
   return;
  VAR_12 = VAR_1[VAR_16];
  VAR_10 = VAR_16;
  VAR_11 = VAR_16;

  VAR_13 = FUNC_0(VAR_2.x86_cache_size);
  break;
 case 3:
  if (!VAR_17)
   return;
  VAR_12 = VAR_1[VAR_17];
  VAR_10 = VAR_17;
  VAR_11 = VAR_17;
  VAR_13 = VAR_17 * 512;
  if (FUNC_1(VAR_0)) {
   VAR_13 = VAR_13 >> 1;
   VAR_12 = VAR_12 >> 1;
  }
  break;
 default:
  return;
 }

 VAR_6->split.is_self_initializing = 1;
 VAR_6->split.type = VAR_4[VAR_5];
 VAR_6->split.level = VAR_3[VAR_5];
 VAR_6->split.num_threads_sharing = 0;
 VAR_6->split.num_cores_on_die = FUNC_0(VAR_2.x86_max_cores) - 1;


 if (VAR_12 == 0xffff)
  VAR_6->split.is_fully_associative = 1;
 VAR_7->split.coherency_line_size = VAR_10 - 1;
 VAR_7->split.ways_of_associativity = VAR_12 - 1;
 VAR_7->split.physical_line_partition = VAR_11 - 1;
 VAR_8->split.number_of_sets = (VAR_13 * 1024) / VAR_10 /
  (VAR_7->split.ways_of_associativity + 1) - 1;
}
