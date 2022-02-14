
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct pcc_cpu {scalar_t__ input_offset; } ;
struct cpufreq_policy {int cpu; int cur; } ;
struct cpufreq_freqs {unsigned int new; int old; } ;
struct TYPE_2__ {int status; int command; int nominal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cpufreq_policy*,struct cpufreq_freqs*) ;
 int FUNC_1 (struct cpufreq_policy*,struct cpufreq_freqs*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (scalar_t__,int ,int ) ;
 int FUNC_7 () ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 scalar_t__ VAR_7 ;
 struct pcc_cpu* FUNC_8 (int ,int) ;
 int FUNC_9 (char*,int,...) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct cpufreq_policy *VAR_8,
         unsigned int VAR_9,
         unsigned int VAR_10)
{
 struct pcc_cpu *VAR_11;
 struct cpufreq_freqs VAR_12;
 u16 VAR_13;
 u32 VAR_14;
 int VAR_15;

 VAR_15 = VAR_8->cpu;
 VAR_11 = FUNC_8(VAR_4, VAR_15);

 FUNC_9("target: CPU %d should go to target freq: %d "
  "(virtual) input_offset is 0x%p\n",
  VAR_15, VAR_9,
  (VAR_7 + VAR_11->input_offset));

 VAR_12.old = VAR_8->cur;
 VAR_12.new = VAR_9;
 FUNC_0(VAR_8, &VAR_12);
 FUNC_10(&VAR_5);

 VAR_14 = 0x1 | (((VAR_9 * 100)
          / (FUNC_3(&VAR_6->nominal) * 1000)) << 8);
 FUNC_5(VAR_14,
   (VAR_7 + VAR_11->input_offset));
 FUNC_4(VAR_2, &VAR_6->command);

 FUNC_7();


 FUNC_6((VAR_7 + VAR_11->input_offset), 0, VAR_0);

 VAR_13 = FUNC_2(&VAR_6->status);
 FUNC_4(0, &VAR_6->status);

 FUNC_1(VAR_8, &VAR_12, VAR_13 != VAR_1);
 FUNC_11(&VAR_5);

 if (VAR_13 != VAR_1) {
  FUNC_9("target: FAILED for cpu %d, with status: 0x%x\n",
   VAR_15, VAR_13);
  return -VAR_3;
 }

 FUNC_9("target: was SUCCESSFUL for cpu %d\n", VAR_15);

 return 0;
}
