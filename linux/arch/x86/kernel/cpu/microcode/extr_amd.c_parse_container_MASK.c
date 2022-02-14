
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ processor_rev_id; } ;
struct microcode_amd {TYPE_1__ hdr; } ;
struct equiv_cpu_table {int num_entries; struct equiv_cpu_entry* entry; } ;
struct equiv_cpu_entry {int dummy; } ;
struct cont_desc {int psize; size_t size; int * data; struct microcode_amd* mc; int cpuid_1_eax; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct equiv_cpu_table*,int ) ;
 int FUNC_1 (int *,size_t,int) ;
 int FUNC_2 (int ,int *,size_t,int*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static size_t FUNC_4(u8 *VAR_2, size_t VAR_3, struct cont_desc *VAR_4)
{
 struct equiv_cpu_table VAR_5;
 size_t VAR_6 = VAR_3;
 u32 *VAR_7 = (u32 *)VAR_2;
 u16 VAR_8;
 u8 *VAR_9;

 if (!FUNC_1(VAR_2, VAR_3, 1))
  return 0;

 VAR_9 = VAR_2;

 VAR_5.entry = (struct equiv_cpu_entry *)(VAR_9 + VAR_0);
 VAR_5.num_entries = VAR_7[2] / sizeof(struct equiv_cpu_entry);






 VAR_8 = FUNC_0(&VAR_5, VAR_4->cpuid_1_eax);

 VAR_9 += VAR_7[2] + VAR_0;
 VAR_3 -= VAR_7[2] + VAR_0;





 while (VAR_3 > 0) {
  struct microcode_amd *VAR_10;
  u32 VAR_11;
  int VAR_12;

  VAR_12 = FUNC_2(FUNC_3(VAR_4->cpuid_1_eax), VAR_9, VAR_3, &VAR_11, 1);
  if (VAR_12 < 0) {




   goto out;
  } else if (VAR_12 > 0) {
   goto skip;
  }

  VAR_10 = (struct microcode_amd *)(VAR_9 + VAR_1);
  if (VAR_8 == VAR_10->hdr.processor_rev_id) {
   VAR_4->psize = VAR_11;
   VAR_4->mc = VAR_10;
  }

skip:

  VAR_9 += VAR_11 + VAR_1;
  VAR_3 -= VAR_11 + VAR_1;
 }
 if (VAR_4->mc) {
  VAR_4->data = VAR_2;
  VAR_4->size = VAR_6 - VAR_3;

  return 0;
 }

out:
 return VAR_6 - VAR_3;
}
