
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct cpuinfo_x86 {unsigned int cpu_index; char* x86_vendor_id; char* x86_model_id; int x86_stepping; scalar_t__ cpuid_level; int microcode; int x86_cache_size; int loops_per_jiffy; int x86_tlbsize; int x86_clflush_size; int x86_cache_alignment; int x86_power; int x86_virt_bits; int x86_phys_bits; int x86_model; int x86; } ;


 int FUNC_0 (scalar_t__**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (struct cpuinfo_x86*,int) ;
 scalar_t__ FUNC_3 (struct cpuinfo_x86*,unsigned int) ;
 unsigned int VAR_4 ;
 unsigned int FUNC_4 (unsigned int) ;
 int FUNC_5 (struct seq_file*,char*,...) ;
 int FUNC_6 (struct seq_file*,char*) ;
 int FUNC_7 (struct seq_file*,struct cpuinfo_x86*,unsigned int) ;
 int FUNC_8 (struct seq_file*,struct cpuinfo_x86*) ;
 int* VAR_5 ;
 int ** VAR_6 ;
 scalar_t__** VAR_7 ;

__attribute__((used)) static int FUNC_9(struct seq_file *VAR_8, void *VAR_9)
{
 struct cpuinfo_x86 *VAR_10 = VAR_9;
 unsigned int VAR_11;
 int VAR_12;

 VAR_11 = VAR_10->cpu_index;
 FUNC_5(VAR_8, "processor\t: %u\n"
     "vendor_id\t: %s\n"
     "cpu family\t: %d\n"
     "model\t\t: %u\n"
     "model name\t: %s\n",
     VAR_11,
     VAR_10->x86_vendor_id[0] ? VAR_10->x86_vendor_id : "unknown",
     VAR_10->x86,
     VAR_10->x86_model,
     VAR_10->x86_model_id[0] ? VAR_10->x86_model_id : "unknown");

 if (VAR_10->x86_stepping || VAR_10->cpuid_level >= 0)
  FUNC_5(VAR_8, "stepping\t: %d\n", VAR_10->x86_stepping);
 else
  FUNC_6(VAR_8, "stepping\t: unknown\n");
 if (VAR_10->microcode)
  FUNC_5(VAR_8, "microcode\t: 0x%x\n", VAR_10->microcode);

 if (FUNC_2(VAR_10, VAR_3)) {
  unsigned int VAR_13 = FUNC_1(VAR_11);

  if (!VAR_13)
   VAR_13 = FUNC_4(VAR_11);
  if (!VAR_13)
   VAR_13 = VAR_4;
  FUNC_5(VAR_8, "cpu MHz\t\t: %u.%03u\n",
      VAR_13 / 1000, (VAR_13 % 1000));
 }


 if (VAR_10->x86_cache_size)
  FUNC_5(VAR_8, "cache size\t: %u KB\n", VAR_10->x86_cache_size);

 FUNC_7(VAR_8, VAR_10, VAR_11);
 FUNC_8(VAR_8, VAR_10);

 FUNC_6(VAR_8, "flags\t\t:");
 for (VAR_12 = 0; VAR_12 < 32*VAR_2; VAR_12++)
  if (FUNC_2(VAR_10, VAR_12) && VAR_6[VAR_12] != ((void*)0))
   FUNC_5(VAR_8, " %s", VAR_6[VAR_12]);

 FUNC_6(VAR_8, "\nbugs\t\t:");
 for (VAR_12 = 0; VAR_12 < 32*VAR_1; VAR_12++) {
  unsigned int VAR_14 = 32*VAR_2 + VAR_12;

  if (FUNC_3(VAR_10, VAR_14) && VAR_5[VAR_12])
   FUNC_5(VAR_8, " %s", VAR_5[VAR_12]);
 }

 FUNC_5(VAR_8, "\nbogomips\t: %lu.%02lu\n",
     VAR_10->loops_per_jiffy/(500000/VAR_0),
     (VAR_10->loops_per_jiffy/(5000/VAR_0)) % 100);





 FUNC_5(VAR_8, "clflush size\t: %u\n", VAR_10->x86_clflush_size);
 FUNC_5(VAR_8, "cache_alignment\t: %d\n", VAR_10->x86_cache_alignment);
 FUNC_5(VAR_8, "address sizes\t: %u bits physical, %u bits virtual\n",
     VAR_10->x86_phys_bits, VAR_10->x86_virt_bits);

 FUNC_6(VAR_8, "power management:");
 for (VAR_12 = 0; VAR_12 < 32; VAR_12++) {
  if (VAR_10->x86_power & (1 << VAR_12)) {
   if (VAR_12 < FUNC_0(VAR_7) &&
       VAR_7[VAR_12])
    FUNC_5(VAR_8, "%s%s",
        VAR_7[VAR_12][0] ? " " : "",
        VAR_7[VAR_12]);
   else
    FUNC_5(VAR_8, " [%d]", VAR_12);
  }
 }

 FUNC_6(VAR_8, "\n\n");

 return 0;
}
